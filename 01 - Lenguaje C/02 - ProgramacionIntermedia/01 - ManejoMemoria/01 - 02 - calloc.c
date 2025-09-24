/*
** #########################################################################################
**      Archivo: 01 - 02 - calloc.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**      Descripcion:
**          Asignar memoria inicializada a cero.
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <stdlib.h>

// FUNCIÓN PRINCIPAL
int main() {
    //* Declaración de variables
    int *arr, n;                    // Puntero a un arreglo de enteros y tamaño del arreglo
    printf("Ingrese el tamaño del arreglo: "); scanf("%d", &n);

    //* Asignar memoria para el arreglo
    arr = (int *)calloc(n, sizeof(int));

    //* Verificar si se asigno la memoria
    if (arr == NULL) {
        printf("No se pudo asignar memoria\n");
        return 1;
    }

    printf("Arreglo de %d elementos inicializado a cero\n", n);
    
    //* Mostrar el arreglo
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    //* Liberar memoria
    free(arr);

    return 0;
}