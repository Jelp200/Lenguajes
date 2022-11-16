/*
** #########################################################################################
**      Archivo: 03 - 04 - ParametrosPorReferencia.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Funcion
void agregar(int *a){
    *a += 10;
}

// Main Function
int main(){

    int n;
    printf("\n\tEscribe un numero: "); scanf("%i", &n);
    printf("\n\tEl valor antes de la función es: %i", n);

    agregar(&n);

    printf("\n\tEl valor despues de llamar a la función es: %i", n);

    return 0;
}

