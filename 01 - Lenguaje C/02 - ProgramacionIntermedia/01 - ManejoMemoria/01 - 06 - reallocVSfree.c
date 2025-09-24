/*
** #########################################################################################
**      Archivo: 01 - 06 - reallocVSfree.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <stdlib.h>

// FUNCIÓN PRINCIPAL
int main(void) {
    //* Asignar memoria
    int *ptr = (int *)malloc(5 * sizeof(int));

    ptr = realloc(ptr, 0);                          //* Liberar memoria
    if (ptr == NULL)
        printf("Memoria liberada con realloc(ptr, 0)\n");
    printf("Dirección de memoria asignada en: %p\n\n", ptr);
    
    //* Asignar memoria
    ptr = (int *)malloc(5 * sizeof(int));
    free(ptr);                                      //* Liberar memoria
    printf("Memoria liberada con free(ptr)\n");
    printf("Dirección de memoria asignada en: %p\n", ptr);

    return 0;
}