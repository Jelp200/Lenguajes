/*
** #########################################################################################
**      Archivo: 11 - 05 - Strupr.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          String upercase (Strupr) se declara de la siguiente manera:
**              strupr(Cadena);
**
**          Lo que hace está función es devolver todo el texto en mayusculas.
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>
#include <string.h>

// Main Function
int main(){
    char txt[100];

    puts("Escriba un texto en minusculas: "); fflush(stdin); gets(txt);

    strupr(txt);

    printf("\nEl nuevo texto es: %s", txt);

    return 0;
}