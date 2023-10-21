/*
** #########################################################################################
**      Archivo: 07 - 01 - 05 - OperadorT.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCION PRINCIPAL
int main(){
    int n;

    printf("De un número a evaluar: "); scanf("%i", &n);

    (n >= 0) ? (puts("El número es positivo...")) : (puts("El número es negativo..."));
    
    return 0;
}