/*
** #########################################################################################
**      Archivo: 15 - 03 - Tangente.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>
#include <math.h>

// Prototipo(s) de funcion(es)
void fncTangente();

// Main Function
int main(){
    
    fncTangente();
    
    return 0;
}

// Funcion(es)
void fncTangente(){
    float  n1, cambio = 0;

    printf("De un angulo: "); scanf("%f", &n1);

    cambio = tan(n1);

    printf("La tangente de %.2f es: %.2f", n1, cambio);
}