/*
** #########################################################################################
**      Archivo: 07 - 01 - 01 - if.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCION PRINCIPAL
int main(){
    int n;

    printf("De un numero: "); scanf("%i", &n);

    if (n >= 0)
        puts("\n\nEl numero es mayor o igual a 0."); 

    return 0;
}