/*
** #########################################################################################
**      Archivo: 14 - 04 - Fabs.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Sqrt nos ayuda a sacar la raíz cuadrada:
**
**              sqrt(dato);
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>
#include <math.h>

// Prototipo(s) de funcion(es)
void fncMatSqrt();

// Main Function
int main(){
    
    fncMatSqrt();
    
    return 0;
}

// Funcion(es)
void fncMatSqrt(){
    float  n1, cambio = 0;

    printf("De un numero: "); scanf("%f", &n1);

    cambio = sqrt(n1);

    printf("La raíz cuadrada de %.2f es: %.2f", n1, cambio);
}