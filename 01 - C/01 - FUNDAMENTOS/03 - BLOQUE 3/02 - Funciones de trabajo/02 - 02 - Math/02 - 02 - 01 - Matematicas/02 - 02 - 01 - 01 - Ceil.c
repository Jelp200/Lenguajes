/*
** #########################################################################################
**      Archivo: 02 - 01 - 01 - 01 - Ceil.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <math.h>

// PROTOTIPOS DE FUNCIONES
void fncMatCeil();

// FUNCION PRINCIPAL
int main(){
    
    fncMatCeil();
    
    return 0;
}

// FUNCIONES
void fncMatCeil(){
    float  n1, cambio = 0;

    printf("De un numero: "); scanf("%f", &n1);

    cambio = ceil(n1);

    printf("El redonde de %.4f al entero mas cercano es: %.2f", n1, cambio);
}