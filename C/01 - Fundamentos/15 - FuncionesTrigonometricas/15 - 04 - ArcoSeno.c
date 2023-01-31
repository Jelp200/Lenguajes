/*
** #########################################################################################
**      Archivo: 15 - 04 - ArcoSeno.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>
#include <math.h>

// Prototipo(s) de funcion(es)
void fncArcoSeno();

// Main Function
int main(){
    
    fncArcoSeno();
    
    return 0;
}

// Funcion(es)
void fncArcoSeno(){
    float  n1, cambio = 0;

    printf("De un angulo: "); scanf("%f", &n1);

    cambio = asin(n1);

    printf("El arcoseno de %.2f es: %.2f", n1, cambio);
}