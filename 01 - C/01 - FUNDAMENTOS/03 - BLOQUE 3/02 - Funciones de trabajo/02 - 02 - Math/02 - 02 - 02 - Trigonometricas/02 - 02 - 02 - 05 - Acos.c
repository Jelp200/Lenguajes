/*
** #########################################################################################
**      Archivo: 02 - 02 - 02 - 05 - Acos.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <math.h>

// PROTOTIPOS DE FUNCIONES
void fncArcoCoseno();

// FUNCION PRINCIPAL
int main(){
    
    fncArcoCoseno();
    
    return 0;
}

// FUNCIONES
void fncArcoCoseno(){
    float  n1, cambio = 0;

    printf("De un angulo: "); scanf("%f", &n1);

    cambio = acos(n1);

    printf("El arcocoseno de %.2f es: %.2f", n1, cambio);
}