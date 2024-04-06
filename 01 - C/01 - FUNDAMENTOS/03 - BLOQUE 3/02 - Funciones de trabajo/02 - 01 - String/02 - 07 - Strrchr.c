/*
** #########################################################################################
**      Archivo: 02 - 07 - Strrchr.md
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <string.h>

// FUNCIÓN PRINCIPAL
int main(void){
    char ABCDario[] = "abcdefghijklmnopqrstuvwxyz";
    char corte;

    printf("De la lentra donde se cortara el ABCDario: "); scanf("%c", &corte);

    printf("\n%s", strrchr(ABCDario, corte));

    return 0;
}