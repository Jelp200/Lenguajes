/*
** #########################################################################################
**      Archivo: 14 - 06 - Pow.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>
#include <math.h>

// Main Function
int main(){
    
    int n;
    int arregloUniD[3] = {24, 05, 93};                                      // Declaramos el arreglo.
    
    // Visualizamos los valor del arreglo en cada posición.
    printf("El primer valor del arreglo es: %i", arregloUniD[0]);
    printf("\nEl segundo valor del arreglo es: %i", arregloUniD[1]);
    printf("\nEl tercer valor del arreglo es: %i", arregloUniD[2]);

    // Ahora veremos las dos principales formas de manipulación de un arreglo.

    // 1er forma.
    printf("\n\nDe el nuevo del indice 0: "); scanf("%i", &n);
    arregloUniD[0] = n;
    printf("El nuevo valor del indice 0 es: %i", arregloUniD[0]);

    // 2da forma.
    arregloUniD[1] = 69;
    printf("El nuevo valor del indice 1 es: %i", arregloUniD[1]);

    // Ingresar datos a un arreglo.
    int arregloUniD2[10];

    for (int i = 0; i < 10; i++){
        printf("Escriba el valor para el indice %i: ", i); scanf("%i", &arregloUniD2[i]);
    }
    
    // Mostraremos los valores del arreglo.
    int indice = -1;
    while (++indice < 10){
        printf("\nEl valor del array[%i] es: %i", indice, arregloUniD2[indice]);
    }
    return 0;
}