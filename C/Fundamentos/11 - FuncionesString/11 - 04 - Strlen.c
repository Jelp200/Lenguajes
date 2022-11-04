/*
** #########################################################################################
**      Archivo: 11 - 04 - Strlen.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          String length (Strcmp) se declara de la siguiente manera:
**              strlen(Cadena1);
**
**          Lo que hace está función es devolver la longitud de una cadena ingresada.
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>
#include <string.h>

// Main Function
int main(){
    char arreglo[200];

    puts("Escriba un texto: "); fflush(stdin); gets(arreglo);

    printf("\nLa longitud de la cadena dada es: %i", strlen(arreglo));

    return 0;
}