/*
** #########################################################################################
**      Archivo: 01 - EspacioVariable.md
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCION PRINCIPAL
int main(){
    // Declaramos nuestra variable
    int var = 13;

    // Visualizamos el numero en la consola
    printf("El numero es: %i", var);

    //* Visualizamos la direccion de memoria donde se almaceno
    printf("\nSu direccion de memoria es: %p", &var);

    return 0;
}