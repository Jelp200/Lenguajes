/*
** #########################################################################################
**      Archivo: 14 - 05 - Fmod.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Fmod nos ayuda a elevar un dato a una potencia:
**
**              fmod(x, y);
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
    float  n1, y, cambio = 0;

    printf("De un numero: "); scanf("%f", &n1);
    printf("De otro numero: "); scanf("%f", &y);

    cambio = fmod(n1, y);

    printf("El resto del cociente entre %.2f y %.2f es: %.2f", n1, y, cambio);
}