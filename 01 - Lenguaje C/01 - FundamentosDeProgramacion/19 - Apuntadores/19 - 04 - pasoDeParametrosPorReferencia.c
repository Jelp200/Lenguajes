/*
** #########################################################################################
**      Archivo: 19 - 04 - pasoDeParametrosPorReferencia.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// PROTOTIPOS DE FUNCIONES
void duplicaPorValor(int *x);

// FUNCION PRINCIPAL
int main(){
    int var = 10;
    printf("Variable antes de duplicar: %i", var);

    //* Llamada a la función con paso por referencia (punteros)
    duplicaPorValor(&var);              // Direccionamos el valor de la operacion a la dirección de memoria de la variable

    //* Visualizamos el valor despues de la función.
    printf("\nVariable despues de llamar a la función: %i", var);

    return 0;
}

// FUNCIONES
//* Función que duplica un número usando paso por referencia (punteros)
void duplicaPorValor(int *x){
    *x *= 2;

    //* Visualizamos el valor de la variable local.
    printf("\nVariable dentro de la función: %i", *x);
}