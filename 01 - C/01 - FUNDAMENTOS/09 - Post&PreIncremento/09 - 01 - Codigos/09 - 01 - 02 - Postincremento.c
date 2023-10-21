/*
** #########################################################################################
**      Archivo: 09 - 01 - 02 - Postincremento.md
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(void){
    int a = 0;
    int b = a++;

    // 'a' se hace 1 y 'b' se hace 0 (toma el valor inicial de a).
    printf("El valor de a es \'%i\' y el valor de b es \'%i\'.", a, b);

    return 0;
}