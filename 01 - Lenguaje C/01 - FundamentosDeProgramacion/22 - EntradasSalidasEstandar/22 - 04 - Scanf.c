/*
** #########################################################################################
**      Archivo: 22 - 04 - Scanf.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <stdarg.h>

// FUNCIÓN PRINCIPAL
int main(){
    double sum, v;
    sum = 0;
    
    // Bucle que se ejecuta mientras scanf pueda leer un número flotante
    while (scanf("%lf", &v) == 1) 
    // Suma el valor introducido a la variable sum y lo imprime
    printf("\t%.2f\n", sum += v);
    
    return 0;
}