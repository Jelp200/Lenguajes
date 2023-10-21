/*
** #########################################################################################
**      Archivo: 12 - 02 - 02 - 05 - Atan.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <math.h>

// PROTOTIPOS DE FUNCIONES
void fncArcoTangente();

// FUNCION PRINCIPAL
int main(){
    
    fncArcoTangente();
    
    return 0;
}

// FUNCIONES
void fncArcoTangente(){
    float  n1, cambio = 0;

    printf("De un angulo: "); scanf("%f", &n1);

    cambio = atan(n1);

    printf("El arcotangente de %.2f es: %.2f", n1, cambio);
}