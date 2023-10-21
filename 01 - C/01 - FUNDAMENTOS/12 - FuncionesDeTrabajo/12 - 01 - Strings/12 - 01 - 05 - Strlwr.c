/*
** #########################################################################################
**      Archivo: 12 - 01 - 05 - Strlwr.md
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <string.h>

// FUNCIÓN PRINCIPAL
int main(void){
    char txt[100];

    puts("Escriba un texto  en mayusculas: "); fflush(stdin); gets(txt);

    strlwr(txt);

    printf("\nEl nuevo texto es: %s", txt);

    return 0;
}