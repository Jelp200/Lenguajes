/*
** #########################################################################################
**      Archivo: 08 - Post&Pre-Incremento.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(){
    //* 1. Muestra la diferencia entre pre-incremento y post-incremento en una variable.
    int a1 = 0, a2 = 0;
    printf("Valor inicial de a: %d\n", a1);
    a2 = a1;
    printf("Post-incremento (a++): %d\n", a1++);
    printf("Pre-incremento (++a): %d\n", ++a2);

    //* 2. Usa pre-decremento y post-decremento y muestra los resultados.
    int b1 = 5, b2 = 0;
    printf("\nValor inicial de b: %d\n", b1);
    b2 = b1;
    printf("Post-decremento (b--): %d\n", b1--);
    printf("Pre-decremento (--b): %d\n", --b2);

    //* 3. Escribe un ciclo que use post-incremento para contar del 1 al 5.
    printf("\nContando del 1 al 5 con post-incremento:\n");
    for (int i = 1; i <= 5; i++) printf("%d ", i);
    
    //* 4. Escribe un ciclo que use post-decremento para contar del 5 al 1.
    printf("\nContando del 5 al 1 con post-decremento:\n");
    for (int j = 5; j >= 1; j--) printf("%d ", j);

    //* 5. Usa operadores de incremento en una expresión compleja y explica el resultado.
    int x = 2, y = 3;
    int result = x++ + ++y; // x se usa antes de incrementarse, y se incrementa antes de usarse
    printf("\n\nResultado de x++ + ++y: %d\n", result);

    return 0;
}