/*
** #########################################################################################
**      Archivo: 02 - 08 - Strrev.md
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <string.h>

// FUNCIÓN PRINCIPAL
int main(void){
    char cadena[100];

    printf("De la cadena a invertir: "); gets(cadena);

    strrev(cadena);

    printf("Cadena invertida: %s", cadena);

    return 0;
}