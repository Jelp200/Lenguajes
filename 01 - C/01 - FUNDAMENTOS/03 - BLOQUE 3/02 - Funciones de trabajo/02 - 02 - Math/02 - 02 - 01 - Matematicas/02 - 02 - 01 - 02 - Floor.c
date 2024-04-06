/*
** #########################################################################################
**      Archivo: 02 - 01 - 01 - 02 - Floor.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <math.h>

// PROTOTIPOS DE FUNCIONES
void fncMatFloor();

// FUNCION PRINCIPAL
int main(){
    
    fncMatFloor();
    
    return 0;
}

// FUNCIONES
void fncMatFloor(){
    float  n1, cambio = 0;

    printf("De un numero: "); scanf("%f", &n1);

    cambio = floor(n1);

    printf("El redonde0 de %.4f al entero menor mas cercano es: %.2f", n1, cambio);
}