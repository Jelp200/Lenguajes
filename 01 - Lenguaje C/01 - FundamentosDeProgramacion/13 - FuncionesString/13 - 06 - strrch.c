/*
** #########################################################################################
**      Archivo: 12 - 06 - strrch.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <ctype.h>

// FUNCIÓN PRINCIPAL
int main(void){
    char cadena[100];

    printf("De la cadena a invertir: "); gets(cadena);

    strrev(cadena);

    printf("Cadena invertida: %s", cadena);

    return 0;
}