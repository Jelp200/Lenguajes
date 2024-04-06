/*
** #########################################################################################
**      Archivo: 02 - 01 - 01 - 03 - Fabs.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <math.h>

// PROTOTIPOS DE FUNCIONES
void fncMatFabs();

// FUNCION PRINCIPAL
int main(){
    
    fncMatFabs();
    
    return 0;
}

// FUNCIONES
void fncMatFabs(){
    float  n1, cambio = 0;

    printf("De un numero: "); scanf("%f", &n1);

    cambio = fabs(n1);

    printf("El |%.2f| es: %.2f", n1, cambio);
}