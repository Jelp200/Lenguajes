/*
** #########################################################################################
**      Archivo: 04 - CambioDeValor.md
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
**      Notas:
**          Realizar la suma de dos números mediante apuntadores.
** #########################################################################################
*/

/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++ I N C L U D E S +++++++++++++++++++++++++++++++++++++ 
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
#include <stdio.h>

/* -----------------------------------------------------------------------------------------
---------------------------- V A R I A B L E S   G L O B A L E S ---------------------------
----------------------------------------------------------------------------------------- */

// Declaramos nuestras variables globales a utilizar
int a = 100, b = 30;
int s = 0;

// FUNCION PRINCIPAL
int main(){
    //* Declaramos nuestras variables apuntador y las referenciamos a la direccion memoria de nuestras variables
    int *pa = &a;
    int *pb = &b;

    //! Realizamos la suma de nuestras variables apuntador
    s = *pa + *pb;

    //* Imprimimos los datos de nuestras variables y nuestras variables apuntador
    printf("Dato variable 1: %i", a);
    printf("\nDato variable 2: %i", b);
    printf("\nSuma = %i", s);

    return 0;
}