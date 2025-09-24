/*
** #########################################################################################
**      Archivo: 03 - 02 - PGVD.c (Windows)
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BLOCK_SIZE 4096       // Tamaño del bloque para procesamiento por bloques
#define BUFFER_SIZE 65536     // Tamaño del buffer para buffering
#define MAX_LINE_LENGTH 1024  // Longitud máxima de una línea para flujos de datos

// Implementación de memmem para Windows
void *my_memmem(const void *haystack, size_t haystack_len, const void *needle, size_t needle_len) {
    if (needle_len == 0) return (void *)haystack; // Un needle vacío siempre coincide
    if (haystack_len < needle_len) return NULL;  // No hay suficiente espacio para encontrar el needle

    const char *h = (const char *)haystack;
    const char *n = (const char *)needle;

    for (size_t i = 0; i <= haystack_len - needle_len; i++) {
        if (memcmp(h + i, n, needle_len) == 0) {
            return (void *)(h + i);
        }
    }
    return NULL; // No se encontró el needle
}

// Función para procesar un bloque de datos
void processBlock(const char *block, size_t size) {
    printf("Procesando bloque de %zu bytes...\n", size);
    // Simular procesamiento del bloque (por ejemplo, buscar un patrón)
    if (my_memmem(block, size, "patrón", 6) != NULL) {
        printf("Patron encontrado en el bloque.\n");
    }
}

// Función para procesar una línea de datos
void processLine(const char *line) {
    printf("\nProcesando linea: %s", line);
}

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

    // Procesamiento por bloques
    char block[BLOCK_SIZE];
    size_t bytesRead;
    while ((bytesRead = fread(block, 1, BLOCK_SIZE, file)) > 0) {
        processBlock(block, bytesRead);
    }

    // Procesamiento de flujos de datos (línea por línea)
    rewind(file);  // Volver al inicio del archivo
    char line[MAX_LINE_LENGTH];
    while (fgets(line, MAX_LINE_LENGTH, file)) {
        processLine(line);
    }

    // Liberar recursos
    free(buffer);
    fclose(file);

    printf("Procesamiento completo.\n");
    return EXIT_SUCCESS;
}