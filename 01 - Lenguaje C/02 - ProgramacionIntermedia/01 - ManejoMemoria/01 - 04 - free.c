/*
** #########################################################################################
**      Archivo: 01 - 04 - free.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <stdlib.h>

// FUNCIÓN PRINCIPAL
int main() {
    //* Asignar memoria
    int *ptr = (int *)malloc(10 * sizeof(int));

    //* Verificar si se asignó correctamente
    if (ptr == NULL) {
        printf("Memoria no asignada.\n");
        exit(1);
    }

    //* Liberar memoria
    free(ptr);

    printf("Memoria liberada exitosamente.\n");

    return EXIT_SUCCESS;
}