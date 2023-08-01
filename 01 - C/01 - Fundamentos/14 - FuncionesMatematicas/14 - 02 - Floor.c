/*
** #########################################################################################
**      Archivo: 14 - 02 - Floor.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Floor nos ayuda a rendondear un dato al entero menor más cercano, se establece
**          de la siguiente manera:
**
**              floor(dato);
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>
#include <math.h>

// Prototipo(s) de funcion(es)
void fncMatFloor();

// Main Function
int main(){
    
    fncMatFloor();
    
    return 0;
}

// Funcion(es)
void fncMatFloor(){
    float  n1, cambio = 0;

    printf("De un numero: "); scanf("%f", &n1);

    cambio = floor(n1);

    printf("El redonde0 de %.4f al entero menor mas cercano es: %.2f", n1, cambio);
}