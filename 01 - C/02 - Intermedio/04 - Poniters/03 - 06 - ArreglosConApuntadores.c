/*
** #########################################################################################
**      Archivo: 03 - 06 - ArreglosConApuntadores.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){

    //! Declaramos nuestro array de n dimension que querramos.
    int miVector[5] = {1, 2, 3 , 4, 5};

    //! Ahora un apuntador al inicio de la variable (arreglo).
    int *pArreglo = &miVector[0];

    //! Nos desplazamos por el arreglo sin necesidad de conocer su dimension.
    while (*pArreglo != NULL){
        printf("\n %i", *pArreglo);
        pArreglo ++;                                        // Recorre el arreglo por las posiciónes.
    }
     
    return 0;
}

