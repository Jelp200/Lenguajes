/*
** #########################################################################################
**      Archivo: 11 - 05 - Strlwr.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          String lowercase (Strlwr) se declara de la siguiente manera:
**              strlwr(Cadena);
**
**          Lo que hace está función es devolver todo el texto en minusculas.
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>
#include <string.h>

// Main Function
int main(){
    char txt[100];

    puts("Escriba un texto  en mayusculas: "); fflush(stdin); gets(txt);

    strlwr(txt);

    printf("\nEl nuevo texto es: %s", txt);

    return 0;
}