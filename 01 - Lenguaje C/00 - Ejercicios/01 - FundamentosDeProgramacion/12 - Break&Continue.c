/*
** #########################################################################################
**      Archivo: 12 - Break&Continue.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(){
    //* 1. Escribe un ciclo que imprima los números del 1 al 10, pero se detenga al llegar al 5.
    printf("Números del 1 al 10, deteniéndose al llegar al 5.\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) break;
        printf("%d ", i);
    }
    printf("\n");

    //* 2. Escribe un ciclo que imprima los números del 1 al 10, pero omita el 5.
    printf("Números del 1 al 10, omitiendo el 5.\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) continue;
        printf("%d ", i);
    }
    printf("\n");

    //* 3. Usa break para salir de un ciclo infinito cuando se cumpla una condición.
    printf("Ciclo infinito, se detendrá al llegar a 5.\n");
    int contador = 0;
    while (1) {
        contador++;
        if (contador == 5) break;
        printf("%d ", contador);
    }
    printf("\n");

    //* 4. Usa continue para saltar los números pares en un ciclo del 1 al 10.
    printf("Números del 1 al 10, omitiendo los pares.\n");
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) continue;
        printf("%d ", i);
    }
    printf("\n");

    //* 5. Escribe un ciclo que sume números hasta que el usuario ingrese 0 (usa break).
    printf("Ingrese números para sumar (0 para terminar).\n");
    int suma = 0, numero;
    while (1) {
        printf("Ingrese un número (0 para terminar): ");
        scanf("%d", &numero);
        if (numero == 0) break;
        suma += numero;
    }
    printf("Suma total: %d\n", suma);

    return 0;
}