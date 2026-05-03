/*
** #########################################################################################
**      Archivo: 03 - Variables.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(){
    //* 1. Declara una variable entera, asígnale un valor y muéstralo.
    int a = 5;
    printf("El valor de a es: %d\n", a);

    //* 2. Declara una variable float, asígnale un valor y muéstralo.
    float b = 3.14;
    printf("El valor de b es: %.2f\n", b);

    //* 3. Declara una variable char, asígnale una letra y muéstrala.
    char c = 'A';
    printf("El valor de c es: %c\n", c);

    //* 4. Declara dos variables, suma sus valores y muestra el resultado.
    int d = 7, e = 3;
    printf("La suma de %d y %d es: %d\n", d, e, d + e);

    //* 5. Intercambia el valor de dos variables y muestra los resultados antes y después.
    int f = 10, g = 20;
    printf("Antes del intercambio: f = %d, g = %d\n", f, g);
    int temp = f;
    f = g;
    g = temp;
    printf("Después del intercambio: f = %d, g = %d\n", f, g);

    return 0;
}