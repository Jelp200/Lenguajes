/*
** #########################################################################################
**      Archivo: 08 - 01 - switchCase.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCION PRINCIPAL
int main(){
    int n = 0;

    printf("\n\t\tDe un número del 1 - 3: "); scanf("%i", &n);

    switch(n){
        case 1: printf("\n\t\tEligio el numero %i.", n); break;
        case 2: printf("\n\t\tEligio el numero %i.", n); break;
        case 3: printf("\n\t\tEligio el numero %i.", n); break;
        default: puts("\n\t\tNo dio un numero del 1 al 3"); break;
    }

    return 0;
}