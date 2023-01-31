/*
** #########################################################################################
**      Archivo: 05 - 02 - Scanf.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Funcion principal.
int main() {

    //! Declaramos la cadena
    char palabra[20];

    printf("\n\tEscribe una palabra:"); scanf("%s", palabra);

    printf("\n\tPalabra: %s",palabra);

    return 0;
}

