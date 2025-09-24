/*
** #########################################################################################
**      Archivo: 02 - 03 - OAAA.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN
int suma(int a, int b){
    return a + b;
}

// FUYNCIÓN PRINCIPAL
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Puntero al primer elemento del arreglo

    printf("Valor en ptr: %d\n", *ptr); // 10
    ptr++; // Mover el puntero al siguiente elemento
    printf("Valor en ptr: %d\n", *ptr); // 20
    ptr += 2; // Mover el puntero dos posiciones adelante
    printf("Valor en ptr: %d\n", *ptr); // 40

    return 0;
}