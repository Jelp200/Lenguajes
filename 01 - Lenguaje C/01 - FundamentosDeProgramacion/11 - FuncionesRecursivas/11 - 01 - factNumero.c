/*
** #########################################################################################
**      Archivo: 15 - 01 - factNumero.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// PROTOTIPO(S) DE FUNCION(ES)
long Factorial(int a);

// FUNCIÓN PRINCIPAL
int main(){
    int n;
    printf("Escriba un numero: "); scanf("%d", &n);
    printf("\nEl factorial de %d es: %d", Factorial(n));
    return 0;
}

// FUNCION(ES)
long Factorial(int a){
    if(a <= 1) return 1;
    else return (a * Factorial(a - 1));
}