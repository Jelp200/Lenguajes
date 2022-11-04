/*
** #########################################################################################
**      Archivo: 15 - 01 - Seno.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>
#include <math.h>

// Prototipo(s) de funcion(es)
void fncSeno();

// Main Function
int main(){
    
    fncSeno();
    
    return 0;
}

// Funcion(es)
void fncSeno(){
    float  n1, cambio = 0;

    printf("De un angulo: "); scanf("%f", &n1);

    cambio = sin(n1);

    printf("El seno de %.2f es: %.2f", n1, cambio);
}