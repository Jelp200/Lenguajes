/*
** #########################################################################################
**      Archivo: 07 - 01 - if.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCION PRINCIPAL
int main(){
    int n = 0;

    printf("De un numero: "); scanf("%i", &n);

    if (n >= 0)
        puts("\n\nEl numero es mayor o igual a 0."); 

    return 0;
}