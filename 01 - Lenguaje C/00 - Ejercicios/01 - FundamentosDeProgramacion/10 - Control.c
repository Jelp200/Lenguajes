/*
** #########################################################################################
**      Archivo: 10 - Control.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(){
    //* 1. Imprime los números del 1 al 10 usando un ciclo while.
    printf("===== Números del 1 al 10 =====\n");
    int cw = 1;
    while (cw <= 10) {
        printf("%d\n", cw); cw++;
    }

    //* 2. Imprime los números del 10 al 1 usando un ciclo for.
    printf("\n===== Números del 10 al 1 =====\n");
    for (int cf = 10; cf >= 1; cf--) printf("%d\n", cf);

    //* 3. Suma los números del 1 al 100 usando un ciclo.
    printf("\n===== Suma de los números del 1 al 100 =====\n");
    int sum = 0;
    for (int i = 1; i <= 100; i++) sum += i;
    printf("La suma es: %d\n", sum);

    //* 4. Imprime la tabla de multiplicar de un número ingresado por el usuario.
    printf("\n===== Tabla de Multiplicar =====\n");
    int num = 0;
    printf("Ingrese un número: "); scanf("%d", &num);
    for (int j = 1; j <= 10; j++) printf("%d x %d = %d\n", num, j, num * j);

    //* 5. Calcula el factorial de un número usando un ciclo do-while.
    printf("\n===== Factorial de un Número =====\n");
    int factNum = 0, factorial = 1;
    printf("Ingrese un número: "); scanf("%d", &factNum);
    int temp = factNum;
    do {
        factorial *= temp;
        temp--;
    } while (temp > 0);
    printf("El factorial de %d es: %d\n", factNum, factorial);

    return 0;
}