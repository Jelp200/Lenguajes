/*
** #########################################################################################
**      Archivo: 04 - TiposDeDatos.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(){
    //* 1. Declara variables de tipo int, float, double y char, y muestra sus valores.
    int a = 5;
    float b = 3.14;
    double c = 3.14159265359;
    char d = 'A';
    printf("int: %d, float: %.2f, double: %.10f, char: %c\n", a, b, c, d);

    //* 2. Escribe un programa que muestre el tamaño en bytes de cada tipo de dato.
    printf("Tamaño de int: %zu bytes\n", sizeof(int));
    printf("Tamaño de float: %zu bytes\n", sizeof(float));
    printf("Tamaño de double: %zu bytes\n", sizeof(double));
    printf("Tamaño de char: %zu bytes\n", sizeof(char));

    //* 3. Realiza operaciones entre diferentes tipos de datos y muestra el resultado.
    int e = 5;
    float f = 2.5;
    printf("Suma de int y float: %.2f\n", e + f);

    //* 4. Convierte un valor float a int y muestra ambos valores.
    float g = 7.8;
    int h = (int)g;
    printf("Valor float: %.2f, valor int: %d\n", g, h);

    //* 5. Declara una variable unsigned int y muestra su valor máximo.
    unsigned int i = 0;
    printf("Valor máximo de unsigned int: %u\n", ~i);

    return 0;
}