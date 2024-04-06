/*
** #########################################################################################
**      Archivo: 02 - 02 - 02 - 01 - Sin.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <math.h>

// PROTOTIPOS DE FUNCIONES
void fncSeno();

// FUNCION PRINCIPAL
int main(){
    
    fncSeno();
    
    return 0;
}

// FUNCIONES
void fncSeno(){
    float  n1, cambio = 0;

    printf("De un angulo: "); scanf("%f", &n1);

    cambio = sin(n1);

    printf("El seno de %.2f es: %.2f", n1, cambio);
}