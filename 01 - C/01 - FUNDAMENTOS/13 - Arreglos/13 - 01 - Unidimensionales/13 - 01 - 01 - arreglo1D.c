/*
** #########################################################################################
**      Archivo: 13 - 01 - 01 - arreglo1D.c
**      SO: GNU/linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCION PRINCIPAL
int main(){
    
    int n;
    int arregloUniD[3] = {24, 05, 93};                                      // Declaramos el arreglo.
    
    // Visualizamos los valor del arreglo en cada posición.
    printf("\n\tEl primer valor del arreglo es: %i", arregloUniD[0]);
    printf("\n\tEl segundo valor del arreglo es: %i", arregloUniD[1]);
    printf("\n\tEl tercer valor del arreglo es: %i", arregloUniD[2]);

    // Ahora veremos las dos principales formas de manipulación de un arreglo.

    // 1er forma.
    printf("\n\n\tDe el nuevo valor del indice 0: "); scanf("%i", &n);
    arregloUniD[0] = n;
    printf("\tEl nuevo valor del indice 0 es: %i", arregloUniD[0]);

    // 2da forma.
    arregloUniD[1] = 69;
    printf("\n\n\tEl nuevo valor del indice 1 es: %i", arregloUniD[1]);

    puts("\n\n");

    // Ingresar datos a un arreglo.
    int arregloUniD2[10];

    for (int i = 0; i < 10; i++){
        printf("\tEscriba el valor para el indice %i: ", i); scanf("%i", &arregloUniD2[i]);
    }
    
    // Mostraremos los valores del arreglo.
    int indice = -1;
    while (++indice < 10){
        printf("\n\tEl valor del array[%i] es: %i", indice, arregloUniD2[indice]);
    }
    return 0;
}