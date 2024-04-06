/*
** #########################################################################################
**      Archivo: 02 - 06 - Strupr.md
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

    puts("Escriba un texto en minusculas: "); fflush(stdin); gets(txt);

    strupr(txt);

    printf("\nEl nuevo texto es: %s", txt);

    return 0;
}