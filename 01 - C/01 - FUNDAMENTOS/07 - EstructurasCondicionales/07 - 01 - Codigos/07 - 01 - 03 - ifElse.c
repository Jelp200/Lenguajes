/*
** #########################################################################################
**      Archivo: 07 - 01 - 03 - ifElse.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCION PRINCIPAL
int main(){
    int n;

    printf("De un numero: "); scanf("%i", &n);

    if (n >= 0) puts("\n\nEl numero es mayor o igual a 0.");
    else puts("\n\nEl numero es menor a 0.");
    return 0;
}