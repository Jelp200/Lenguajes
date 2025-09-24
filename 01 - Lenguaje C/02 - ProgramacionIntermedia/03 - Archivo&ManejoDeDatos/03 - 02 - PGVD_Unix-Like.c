/*
** #########################################################################################
**      Archivo: 03 - 02 - PGVD.c (Unix-like)
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

//* DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>

//* DEFINICIONES
#define BLOCK_SIZE 4096                 // Tamaño del bloque para procesamiento por bloques
#define BUFFER_SIZE 65536               // Tamaño del buffer para buffering
#define MAX_LINE_LENGTH 1024            // Longitud máxima de una línea para flujos de datos

//* PROTOTIPO(S) DE FUNCIONE(S)
// Función para procesar un bloque de datos
void processBlock(const char *block, size_t size);

// Función para procesar una línea de datos
void processLine(const char *line);

//* FUNCIÓN PRINCIPAL
int main() {
    const char *filename = "large_input_file.dat";

    FILE *file = fopen(filename, "rb");

    if (!file) {
        perror("Error al abrir el archivo");
        return EXIT_FAILURE;
    }

    // Buffering: Asignar un buffer grande
    char *buffer = malloc(BUFFER_SIZE);

    if (!buffer) {
        perror("Error al asignar memoria");
        fclose(file);
        return EXIT_FAILURE;
    }

    setvbuf(file, buffer, _IOFBF, BUFFER_SIZE);

    // Memoria mapeada: Mapear una parte del archivo en memoria (opcional)
    int fd = fileno(file);                      // Obtener el descriptor de archivo
    off_t fileSize = lseek(fd, 0, SEEK_END);    // Obtener el tamaño del archivo
    lseek(fd, 0, SEEK_SET);                     // Volver al inicio del archivo

    void *mapped = mmap(NULL, fileSize, PROT_READ, MAP_PRIVATE, fd, 0);
    if (mapped == MAP_FAILED) {
        perror("Error al mapear el archivo");
        free(buffer);
        fclose(file);
        return EXIT_FAILURE;
    }

    // Procesamiento por bloques
    char block[BLOCK_SIZE];
    size_t bytesRead;
    while ((bytesRead = fread(block, 1, BLOCK_SIZE, file)) > 0)
        processBlock(block, bytesRead);

    // Procesamiento de flujos de datos (línea por línea)
    rewind(file);                               // Volver al inicio del archivo
    char line[MAX_LINE_LENGTH];
    while (fgets(line, MAX_LINE_LENGTH, file))
        processLine(line);

    // Liberar recursos
    munmap(mapped, fileSize);
    free(buffer);
    fclose(file);

    printf("Procesamiento completo.\n");
    return EXIT_SUCCESS;
}

//* FUNCIÓN(ES)
// Función para procesar un bloque de datos
void processBlock(const char *block, size_t size) {
    printf("Procesando bloque de %zu bytes...\n", size);
    // Simular procesamiento del bloque (por ejemplo, buscar un patrón)
    if (memmem(block, size, "patrón", 6) != NULL) {
        printf("Patrón encontrado en el bloque.\n");
    }
}

// Función para procesar una línea de datos
void processLine(const char *line) {
    printf("Procesando línea: %s", line);
}

/*
**  ------------------------------------- DESCRIPCIÓN --------------------------------------
**  1.- Procesamiento por bloques:
**      - El archivo se lee en bloques de 4 KB (BLOCK_SIZE).
**      - Cada bloque se procesa con la función processBlock, que simula la búsqueda de un
**        patrón en el bloque.
**
**  2.- Buffering:
**      - Se asigna un buffer grande de 64 KB (BUFFER_SIZE) para reducir las llamadas al sistema.
**      - El buffer se configura con setvbuf para el archivo abierto.
**
**  3.- Memoria mapeada:
**      - El archivo se mapea en memoria usando mmap, lo que permite acceder a los datos como
**        si fueran una región de memoria.
**      - Esto es útil para acceder rápidamente a partes específicas del archivo.
**
**  4.- Flujos de datos:
**      - El archivo se procesa línea por línea usando fgets.
**      - Cada línea se procesa con la función processLine, que simula el procesamiento de
**        datos en flujo.
**
**  5.-Recursos liberados:
**      - Se libera la memoria mapeada con munmap.
**      - Se libera el buffer asignado con free.
**      - Se cierra el archivo con fclose.
** ------------------------------------------------------------------------------------------
*/