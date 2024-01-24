/*
** #########################################################################################
**      Archivo: 01 - CambioDeValor.md
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
**      Notas:
**          Cambio de valor de una variable mediante un apuntador.
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCION PRINCIPAL
int main(){
    // Declaramos nuestras variables
    int var1 = 5;
    int var2 = 10;

    //* Declaramos nuestras variables apuntador y las referenciamos a la direccion memoria de nuestras variables
    int *pVar1 = &var1;
    int *pVar2 = &var2;

    //* Cambiamos el valor de nuestras variables mediante nuestros apuntadores
    *pVar1 = 15;
    *pVar2 = 20;

    //* Imprimimos los datos de nuestras variables y nuestras variables apuntador
    printf("Dato variable 1: %i", var1);
    printf("\nDato variable 2: %i", var2);

    return 0;
}