/*
** #########################################################################################
**      Archivo: 03 - 00 - Ejemplo.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){

    int u = 3;
    int v;

    //! Creamos las variables puntero.
    int *pu;
    int *pv;

    // Asignamos valores.
    pu = &u;                                        //! Asigna la dirección de 'u' a 'pu'
    v = *pu;                                        //! Asigna el valor de 'u' a 'v'
    pv = &v;                                        //! Asigna la dirección de 'v' a 'pv'

    // Visualizamos los datos asignados.
    printf("\n\tu = %d   &u = %p   pu = %X   *pu = %i\n", u, &u, pu, *pu);
    printf("\n\tv = %d   &v = %p   pv = %X   *pv = %i\n", u, &u, pu, *pu);

    return 0;
}