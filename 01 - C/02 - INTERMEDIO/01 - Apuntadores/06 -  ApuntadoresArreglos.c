/*
** #########################################################################################
**      Archivo: 06 - ApuntadoresArreglos.md
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCION PRINCIPAL
int main(){
    int Arreglo[5] = {1, 2, 3, 4, 5};

    //* Declaramos nuestra variable apuntador al inicio de nuestro arreglo
    int *pArreglo = &Arreglo[0];                // Nuestra variable apuntador esta siendo igualada a la dirección de memoria del primer valor

    //* Nos desplazamos por el arreglo sin necesidad de conocer su dimensión.
    while(*pArreglo != NULL){
        printf("%i\n", *pArreglo);
        pArreglo++;                             // Recorremos el arreglo posición por posición.
    }

    return 0;
}