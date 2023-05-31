/*
** #########################################################################################
**      Archivo: 05 - 04 - Feof.c
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

    do{
        scanf("%s", palabra);
        if(!feof(stdin)){
            printf("\n%s", palabra);
        }
    } while (!feof(stdin));

    return 0;
}
