/*
** #########################################################################################
**      Archivo: 04 - 01 - Preincremento.md
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(void){
    int a = 0;
    int b = ++a;

    // 'a' se hace 1 y 'b' se hace 1 (toma el mismo valor que a).
    printf("El valor de a es \'%i\' y el valor de b es \'%i\'.", a, b);

    return 0;
}