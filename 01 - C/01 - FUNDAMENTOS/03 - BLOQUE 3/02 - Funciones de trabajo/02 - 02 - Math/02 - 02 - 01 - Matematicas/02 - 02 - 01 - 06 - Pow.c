/*
** #########################################################################################
**      Archivo: 02 - 01 - 01 - 06 - Pow.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <math.h>

// PROTOTIPOS DE FUNCIONES
void fncMatPow();

// FUNCION PRINCIPAL
int main(){
    
    fncMatPow();
    
    return 0;
}

// FUNCIONES
void fncMatPow(){
    float  n1, e, cambio = 0;

    printf("De un numero: "); scanf("%f", &n1);
    printf("De el exponente: "); scanf("%f", &e);

    cambio = pow(n1, e);

    printf("%.2f a la %.2f es: %.2f", n1, e, cambio);
}