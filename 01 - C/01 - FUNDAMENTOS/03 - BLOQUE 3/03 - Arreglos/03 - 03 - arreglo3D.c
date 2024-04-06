/*
** #########################################################################################
**      Archivo: 03 - 03 - arreglo3D.c
**      SO: GNU/linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCION PRINCIPAL
int main(){
    
    int arreglo[2][3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

    // De forma matricial tenemos.
    for (int i = 0; i < 2; ++i){                                // Veces que se repite
        for(int j = 0; j < 2; ++j){                             // Filas
            for (int k = 0; k < 3; ++k){                        // Columnas
                printf("%i\t", arreglo[i][j][k]);
            }
            printf("\n\n");
        }
        printf("\n\n");
    }
    
    return 0;
}