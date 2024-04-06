/*
** #########################################################################################
**      Archivo: 02 - 04 - Strlen.md
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <string.h>

// FUNCIÓN PRINCIPAL
int main(void){
    char arreglo[200];

    puts("Escriba un texto: "); fflush(stdin); gets(arreglo);

    printf("\nLa longitud de la cadena dada es: %i", strlen(arreglo));

    return 0;
}