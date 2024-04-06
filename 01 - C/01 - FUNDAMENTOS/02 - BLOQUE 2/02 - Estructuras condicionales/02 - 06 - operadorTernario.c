/*
** #########################################################################################
**      Archivo: 02 - 06 - operadorTernario.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCION PRINCIPAL
int main(){
    int n = 0;

    printf("De un número a evaluar: "); scanf("%i", &n);

    (n >= 0) ? (puts("El número es positivo...")) : (puts("El número es negativo..."));
    
    return 0;
}