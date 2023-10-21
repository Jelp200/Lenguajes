/*
** #########################################################################################
**      Archivo: 12 - 01 - 01 - 05 - Fmod.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <math.h>

// PROTOTIPOS DE FUNCIONES
void fncMatFmod();

// FUNCION PRINCIPAL
int main(){
    
    fncMatFmod();
    
    return 0;
}

// FUNCIONES
void fncMatFmod(){
    float  n1, y, cambio = 0;

    printf("De un numero: "); scanf("%f", &n1);
    printf("De otro numero: "); scanf("%f", &y);

    cambio = fmod(n1, y);

    printf("El resto del cociente entre %.2f y %.2f es: %.2f", n1, y, cambio);
}