/*
** #########################################################################################
**      Archivo: 15 - 06 - ArcoTangente.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>
#include <math.h>

// Prototipo(s) de funcion(es)
void fncArcoTangente();

// Main Function
int main(){
    
    fncArcoTangente();
    
    return 0;
}

// Funcion(es)
void fncArcoTangente(){
    float  n1, cambio = 0;

    printf("De un angulo: "); scanf("%f", &n1);

    cambio = atan(n1);

    printf("El arcotangente de %.2f es: %.2f", n1, cambio);
}