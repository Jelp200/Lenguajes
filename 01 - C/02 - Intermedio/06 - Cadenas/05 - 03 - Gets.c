/*
** #########################################################################################
**      Archivo: 05 - 03 - Gets.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function

int main() {

    //! Declaramos la cadena
    char palabra[20];

    printf("\n\tEscribe una palabra:"); gets(palabra);

    printf("\n\tPalabra: %s",palabra);

    return 0;
}