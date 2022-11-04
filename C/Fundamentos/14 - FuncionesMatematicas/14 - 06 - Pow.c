/*
** #########################################################################################
**      Archivo: 14 - 06 - Pow.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Pow nos ayuda a elevar un dato a una potencia:
**
**              pow(dato, exponente);
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>
#include <math.h>

// Prototipo(s) de funcion(es)
void fncMatFmod();

// Main Function
int main(){
    
    fncMatFmod();
    
    return 0;
}

// Funcion(es)
void fncMatFmod(){
    float  n1, e, cambio = 0;

    printf("De un numero: "); scanf("%f", &n1);
    printf("De el exponente: "); scanf("%f", &e);

    cambio = pow(n1, e);

    printf("%.2f a la %.2f es: %.2f", n1, e, cambio);
}