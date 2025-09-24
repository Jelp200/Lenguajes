/*
** #########################################################################################
**      Archivo: 01 - 05 - realloc.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**      Descripcion:
**          Redimensionar un bloque de memoria.
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <stdlib.h>

// FUNCIÓN PRINCIPAL
int main() {
    //* Asignar memoria para un arreglo de 3 elementos
    int *arr = (int *)malloc(3 * sizeof(int));

    //* Verificar si se asignó correctamente la memoria
    if (arr == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    //* Inicializar el arreglo
    for (int i = 0; i < 3; i++)
        arr[i] = i + 1;

    //* Imprimir el arreglo no redimensionado
    printf("Arreglo no redimensionado: ");
    for (int i = 0; i < 3; i++)
        printf("%d ", arr[i]);

    //* Redimensionar el arreglo
    arr = (int *)realloc(arr, 5 * sizeof(int));

    //* Verificar si se redimensionó correctamente la memoria
    if (arr == NULL) {
        printf("Error al redimensionar memoria.\n");
        return 1;
    }

    //* Inicializar el arreglo
    for (int i = 3; i < 5; i++) 
        arr[i] = i + 1;

    //* Imprimir el arreglo redimensionado
    printf("\n\nArreglo redimensionado: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    
    //* Liberar la memoria
    free(arr);

    return 0;
}