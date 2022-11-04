/*
** #########################################################################################
**      Archivo: 11 - 07 - Strrch.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          String remaining character (Strrchr) se declara de la siguiente manera:
**              strrchr(Cadena, Caracter);
**
**          Lo que hace está función es regresar el restante de una cadena apartir de la 
**          primera aarición del caracter indicado.
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>
#include <string.h>

// Main Function
int main(){
    char ABCDario[] = "abcdefghijklmnopqrstuvwxyz";
    char corte;

    printf("De la lentra donde se cortara el ABCDario: "); scanf("%c", &corte);

    printf("\n%s", strrchr(ABCDario, corte));

    return 0;
}