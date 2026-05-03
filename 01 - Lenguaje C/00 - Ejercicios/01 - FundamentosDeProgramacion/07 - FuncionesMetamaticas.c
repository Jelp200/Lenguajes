/*
** #########################################################################################
**      Archivo: 07 - FuncionesMetamaticas.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <math.h>

// FUNCIÓN PRINCIPAL
int main(){
    int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
    float a1 = 0.0, a2 = 0.0;

    //* 1. Calcula la raíz cuadrada de un número ingresado por el usuario.
    printf("Ingrese un número: "); scanf("%d", &n1);
    printf("Raíz cuadrada: %.2f\n", sqrt(n1));

    //* 2. Calcula el valor absoluto de un número.
    printf("Ingrese un número: "); scanf("%d", &n2);
    printf("Valor absoluto: %d\n", abs(n2));

    //* 3. Calcula la potencia de un número elevado a otro.
    printf("Ingrese la base: "); scanf("%d", &n3);
    printf("Ingrese el exponente: "); scanf("%d", &n4);
    printf("Potencia: %.2f\n", pow(n3, n4));

    //* 4. Calcula el seno y coseno de un ángulo en radianes.
    printf("Ingrese un ángulo en radianes: "); scanf("%f", &a1);
    printf("Seno: %.2f\n", sin(a1));
    printf("Coseno: %.2f\n", cos(a1));

    //* 5. Redondea un número decimal al entero más cercano.
    printf("Ingrese un número decimal: "); scanf("%f", &a2);
    printf("Número redondeado: %.0f\n", round(a2));

    return 0;
}