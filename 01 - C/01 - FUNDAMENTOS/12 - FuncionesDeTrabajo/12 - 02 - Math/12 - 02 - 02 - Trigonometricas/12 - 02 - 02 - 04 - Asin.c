/*
** #########################################################################################
**      Archivo: 12 - 02 - 02 - 04 - Asin.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <math.h>

// PROTOTIPOS DE FUNCIONES
void fncArcoSeno();

// FUNCION PRINCIPAL
int main(){
    
    fncArcoSeno();
    
    return 0;
}

// FUNCIONES
void fncArcoSeno(){
    float  n1, cambio = 0;

    printf("De un angulo: "); scanf("%f", &n1);

    cambio = asin(n1);

    printf("El arcoseno de %.2f es: %.2f", n1, cambio);
}