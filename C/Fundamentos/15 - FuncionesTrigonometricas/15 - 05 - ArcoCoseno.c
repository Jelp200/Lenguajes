/*
** #########################################################################################
**      Archivo: 15 - 05 - ArcoCoseno.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>
#include <math.h>

// Prototipo(s) de funcion(es)
void fncArcoCoseno();

// Main Function
int main(){
    
    fncArcoCoseno();
    
    return 0;
}

// Funcion(es)
void fncArcoCoseno(){
    float  n1, cambio = 0;

    printf("De un angulo: "); scanf("%f", &n1);

    cambio = acos(n1);

    printf("El arcocoseno de %.2f es: %.2f", n1, cambio);
}