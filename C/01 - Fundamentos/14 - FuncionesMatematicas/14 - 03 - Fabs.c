/*
** #########################################################################################
**      Archivo: 14 - 03 - Fabs.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Fabs nos ayuda tener el valor absoluto de un numero o valor ingresado:
**
**              fabs(dato);
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>
#include <math.h>

// Prototipo(s) de funcion(es)
void fncMatFabs();

// Main Function
int main(){
    
    fncMatFabs();
    
    return 0;
}

// Funcion(es)
void fncMatFabs(){
    float  n1, cambio = 0;

    printf("De un numero: "); scanf("%f", &n1);

    cambio = fabs(n1);

    printf("El |%.2f| es: %.2f", n1, cambio);
}