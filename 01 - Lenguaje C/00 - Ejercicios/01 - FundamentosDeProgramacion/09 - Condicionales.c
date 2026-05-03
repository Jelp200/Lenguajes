/*
** #########################################################################################
**      Archivo: 09 - Condicionales.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(){
    //* 1. Escribe un programa que determine si un número es positivo o negativo.
    printf("===== Numero Positivo o Negativo =====\n");
    int n1 = 0;
    printf("Ingrese un número: "); scanf("%d", &n1);
    (n1 > 0) ? printf("El número es positivo.\n") : (n1 < 0) ? printf("El número es negativo.\n") : printf("El número es cero.\n");

    //* 2. Determina si un número es par o impar.
    printf("\n===== Numero Par o Impar =====\n");
    int n2 = 0;
    printf("Ingrese otro número: "); scanf("%d", &n2);
    (n2 % 2 == 0) ? printf("El número es par.\n") : printf("El número es impar.\n");

    //* 3. Pide dos números y muestra el mayor.
    printf("\n===== Mayor de Dos Números =====\n");
    int n3 = 0, n4 = 0;
    printf("Ingrese el primer número: "); scanf("%d", &n3);
    printf("Ingrese el segundo número: "); scanf("%d", &n4);
    (n3 > n4) ? printf("El mayor es: %d\n", n3) : (n4 > n3) ? printf("El mayor es: %d\n", n4) : printf("Ambos números son iguales.\n");

    //* 4. Pide tres números y muestra el menor.
    printf("\n===== Menor de Tres Números =====\n");
    int n5 = 0, n6 = 0, n7 = 0;
    printf("Ingrese el primer número: "); scanf("%d", &n5);
    printf("Ingrese el segundo número: "); scanf("%d", &n6);
    printf("Ingrese el tercer número: "); scanf("%d", &n7);
    if (n5 <= n6 && n5 <= n7) printf("El menor es: %d\n", n5);
    else if (n6 <= n5 && n6 <= n7) printf("El menor es: %d\n", n6);
    else printf("El menor es: %d\n", n7);
    
    //* 5. Escribe un programa que verifique si un año es bisiesto.
    printf("\n===== Año Bisiesto =====\n");
    int ano = 0;
    printf("Ingrese un año: "); scanf("%d", &ano);
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) printf("El año es bisiesto.\n");
    else printf("El año no es bisiesto.\n");

    return 0;
}