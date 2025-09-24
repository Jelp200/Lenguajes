/*
** #########################################################################################
**      Archivo: 03 - 01 - LEA_Txt&Bin.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main() {
    FILE *archivo;

    // Escritura en modo texto
    archivo = fopen("ejemplo.txt", "w");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }
    fprintf(archivo, "Hola, mundo!\n");
    fclose(archivo);

    // Lectura en modo texto
    archivo = fopen("ejemplo.txt", "r");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }
    char buffer[100];
    fgets(buffer, 100, archivo);
    printf("Contenido del archivo: %s", buffer);
    fclose(archivo);

    return 0;
}