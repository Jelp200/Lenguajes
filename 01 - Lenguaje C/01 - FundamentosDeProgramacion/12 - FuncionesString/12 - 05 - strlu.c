/*
** #########################################################################################
**      Archivo: 12 - 05 - strlu.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <string.h>

// FUNCIÓN PRINCIPAL
int main(void){
    char txtM[100];

    puts("Escriba un texto  en mayusculas: "); fflush(stdin); gets(txtM);

    strlwr(txtM);

    printf("\nEl nuevo texto es: %s", txtM);

    char txt[100];

    puts("Escriba un texto en minusculas: "); fflush(stdin); gets(txt);

    strupr(txt);

    printf("\nEl nuevo texto es: %s", txt);

    return 0;
}