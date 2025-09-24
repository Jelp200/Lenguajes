/*
** #########################################################################################
**      Archivo: 13 - 04 - strlen.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <ctype.h>

// FUNCIÓN PRINCIPAL
int main(void){
    char arreglo[200];

    puts("Escriba un texto: "); fflush(stdin); gets(arreglo);

    printf("\nLa longitud de la cadena dada es: %i", strlen(arreglo));

    return 0;
}