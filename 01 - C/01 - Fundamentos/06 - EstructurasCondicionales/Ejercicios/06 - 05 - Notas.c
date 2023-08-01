/*
** #########################################################################################
**      Archivo: 06 - 05 - Notas.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Dada las siguientes notas mostrar los soguiente mensajes.
**              A - Sobresaliente
**              B - Notable
**              C - Bien
**              D y F - Mejorar
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){
    char nota;

    printf("De su nota: "); scanf("%c", &nota);
    if (nota == 'A')
        puts("Sobresaliente");
    else if(nota == 'B')
        puts("Notable");
    else if(nota == 'C')
        puts("Bien");
    else if(nota == 'D' || nota == 'F')
        puts("Mejorar");
    else
        puts("De una nota acertada...");
    return main();
}