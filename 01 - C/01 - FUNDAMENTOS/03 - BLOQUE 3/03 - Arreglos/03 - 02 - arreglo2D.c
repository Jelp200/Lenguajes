/*
** #########################################################################################
**      Archivo: 03 - 02 - arreglo2D.c
**      SO: GNU/linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCION PRINCIPAL
int main(){
    
    int arreglo[2][3] = {{1, 2, 3}, {4, 5, 6}};

    printf("\tLa posición [0][0] tiene un valor de: ", arreglo[0][0]);
    printf("\tLa posición [0][1] tiene un valor de: ", arreglo[0][1]);
    printf("\tLa posición [0][2] tiene un valor de: ", arreglo[0][2]);
    printf("\tLa posición [1][0] tiene un valor de: ", arreglo[1][0]);
    printf("\tLa posición [1][1] tiene un valor de: ", arreglo[1][1]);
    printf("\tLa posición [1][2] tiene un valor de: ", arreglo[1][2]);

    // De forma matricial tenemos.
    for (int i = 0; i < 2; ++i){                                // Filas
        for(int j = 0; j < 3; ++j){                             // Columnas
            printf("%i\t", arreglo[i][j]);
        }
        printf("\n\n");
    }
    
    return 0;
}