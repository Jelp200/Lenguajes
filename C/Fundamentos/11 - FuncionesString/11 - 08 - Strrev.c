/*
** #########################################################################################
**      Archivo: 11 - 07 - Strrev.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          String reverse (Strrev) se declara de la siguiente manera:
**              strrev(Cadena);
**
**          Lo que hace está función es regresar una cadena de origen revertida.
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>
#include <string.h>

// Main Function
int main(){
    char cadena[100];

    printf("De la cadena a invertir: "); gets(cadena);

    strrev(cadena);

    printf("Cadena invertida: %s", cadena);

    return 0;
}