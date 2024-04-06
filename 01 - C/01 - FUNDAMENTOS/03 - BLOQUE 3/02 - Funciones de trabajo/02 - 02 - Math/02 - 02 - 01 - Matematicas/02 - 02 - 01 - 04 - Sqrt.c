/*
** #########################################################################################
**      Archivo: 02 - 01 - 01 - 04 - Sqrt.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <math.h>

// PROTOTIPOS DE FUNCIONES
void fncMatSqrt();

// FUNCION PRINCIPAL
int main(){
    
    fncMatSqrt();
    
    return 0;
}

// FUNCIONES
void fncMatSqrt(){
    float  n1, cambio = 0;

    printf("De un numero: "); scanf("%f", &n1);

    cambio = sqrt(n1);

    printf("La raíz cuadrada de %.2f es: %.2f", n1, cambio);
}