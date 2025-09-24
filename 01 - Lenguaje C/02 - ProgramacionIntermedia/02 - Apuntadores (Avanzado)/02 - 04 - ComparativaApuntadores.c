/*
** #########################################################################################
**      Archivo: 02 - 04 - ComparativaApuntadores.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <stdlib.h>

// FUYNCIÓN PRINCIPAL
int main() {
    //* -------------------------
    //* 1. Comparativa a NULL
    //* -------------------------
    int *ptr = NULL;

    printf("=== Comparación de apuntador con NULL ===\n");
    if (ptr == NULL)
        printf("El apuntador está en NULL\n");
    else
        printf("El apuntador no es NULL\n");

    //* -------------------------
    //* 2. Comparación de apuntadores con arreglo
    //* -------------------------
    int n = 10;     // Longitud del arreglo
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int *ptrStart = arr;        // Apunta al primer elemento
    int *ptrEnd   = &arr[n-1];  // Apunta al último elemento

    int count_even = 0;
    int count_odd  = 0;

    printf("\n=== Comparación de apuntadores en un arreglo ===\n");

    // Usamos el puntero para recorrer
    for (int *p = ptrStart; p <= ptrEnd; p++) {
        if (*p % 2 == 0)
            count_even++;
        else
            count_odd++;
    }

    printf("Cantidad de pares: %d\n", count_even);
    printf("Cantidad de impares: %d\n", count_odd);

    //* -------------------------
    //* 3. Comparación entre punteros directamente
    //* -------------------------
    printf("\n=== Comparaciones entre direcciones de memoria ===\n");
    printf("ptrStart (%p) %s ptrEnd (%p)\n",
        (void*)ptrStart,
        (ptrStart < ptrEnd ? "<" : ">="),
        (void*)ptrEnd);

    printf("ptrEnd (%p) %s ptrStart (%p)\n",
        (void*)ptrEnd,
        (ptrEnd > ptrStart ? ">" : "<="),
        (void*)ptrStart);

    if (ptrStart != ptrEnd)
        printf("Los punteros apuntan a diferentes posiciones de memoria.\n");

    return EXIT_SUCCESS;
}