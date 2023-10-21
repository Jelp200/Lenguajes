/*
** #########################################################################################
**      Archivo: 11 - 01 - 02 - funcionesConRetorno.md
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// PROTOTIPOS DE FUNCIONES
int SUMAR(int n1, int n2);

// FUNCIÓN PRINCIPAL
int main(void){
    int a, b;
    
    printf("De el primer numero: "); scanf("%i", &a);
    printf("De el segundo numero: "); scanf("%i", &b);

    printf("La suma de %i y % i es: %i", a, b, SUMAR(a, b));
    return 0;
}

// FUNCIONES
int SUMAR(int n1, int n2){
    int S = 0;
    S = n1 + n2;

    return S;
}