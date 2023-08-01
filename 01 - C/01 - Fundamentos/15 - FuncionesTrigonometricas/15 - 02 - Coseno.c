/*
** #########################################################################################
**      Archivo: 15 - 02 - Coseno.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>
#include <math.h>

// Prototipo(s) de funcion(es)
void fncCoseno();

// Main Function
int main(){
    
    fncCoseno();
    
    return 0;
}

// Funcion(es)
void fncCoseno(){
    float  n1, cambio = 0;

    printf("De un angulo: "); scanf("%f", &n1);

    cambio = cos(n1);

    printf("El coseno de %.2f es: %.2f", n1, cambio);
}