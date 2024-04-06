/*
** #########################################################################################
**      Archivo: 02 - 02 - 02 - 02 - Cos.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <math.h>

// PROTOTIPOS DE FUNCIONES
void fncCoseno();

// FUNCION PRINCIPAL
int main(){
    
    fncCoseno();
    
    return 0;
}

// FUNCIONES
void fncCoseno(){
    float  n1, cambio = 0;

    printf("De un angulo: "); scanf("%f", &n1);

    cambio = cos(n1);

    printf("El coseno de %.2f es: %.2f", n1, cambio);
}