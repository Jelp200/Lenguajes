/*
** #########################################################################################
**      Archivo: 02 - 02 - 02 - 03 - Tan.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <math.h>

// PROTOTIPOS DE FUNCIONES
void fncTangente();

// FUNCION PRINCIPAL
int main(){
    
    fncTangente();
    
    return 0;
}

// FUNCIONES
void fncTangente(){
    float  n1, cambio = 0;

    printf("De un angulo: "); scanf("%f", &n1);

    cambio = tan(n1);

    printf("La tangente de %.2f es: %.2f", n1, cambio);
}