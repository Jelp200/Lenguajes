/*
** #########################################################################################
**      Archivo: 01 - 01 - malloc.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**      Descripcion:
**          Asignar memoria dinamica para un arreglo de enteros.
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <stdlib.h>

// FUNCIÓN PRINCIPAL
int main() {
    //* Declaración de variables
    int *arr, n;                                    // Puntero a un arreglo de enteros y tamaño del arreglo
    printf("Ingrese el tamano del arreglo: "); scanf("%d", &n);

    //* Asignar memoria para el arreglo
    arr = (int *)malloc(n * sizeof(int));

    //* Verificar si se asigno la memoria
    if(arr == NULL) {
        printf("Error al asignar la memoria.\n");
        return 1;
    }

    //* Inicializar el arreglo
    for(int i = 0; i < n; i++)
        arr[i] = i + 1;
    
    //* Mostrar el arreglo
    printf("\nArreglo: ");
    for (int i = 0; i < n; i++)
        printf(" %d", arr[i]);

    //* Liberar la memoria
    free(arr);

    return 0;
}