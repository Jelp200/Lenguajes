/*
** #########################################################################################
**      Archivo: 14 - 01 - Ceil.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Ceil nos ayuda a rendondear un dato al entero mayor más cercano, se establece
**          de la siguiente manera:
**
**              ceil(dato);
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>
#include <math.h>

// Prototipo(s) de funcion(es)
void fncMatCeil();

// Main Function
int main(){
    
    fncMatCeil();
    
    return 0;
}

// Funcion(es)
void fncMatCeil(){
    float  n1, cambio = 0;

    printf("De un numero: "); scanf("%f", &n1);

    cambio = ceil(n1);

    printf("El redonde de %.4f al entero mas cercano es: %.2f", n1, cambio);
}