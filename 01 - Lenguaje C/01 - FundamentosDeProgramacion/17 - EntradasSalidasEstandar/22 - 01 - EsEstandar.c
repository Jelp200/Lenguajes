/*
** #########################################################################################
**      Archivo: 22 - 01 - EsEstandar.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <ctype.h>

// FUNCIÓN PRINCIPAL
main(){
    int c;

    while((c = getchar()) != EOF)
        putchar(tolower(c));
    return 0;
}