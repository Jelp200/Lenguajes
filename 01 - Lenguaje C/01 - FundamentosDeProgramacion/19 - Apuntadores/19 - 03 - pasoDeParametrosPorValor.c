/*
** #########################################################################################
**      Archivo: 19 - 03 - pasoDeParametrosPorValor.md
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// PROTOTIPOS DE FUNCIONES
void duplicaPorValor(int x);

// FUNCION PRINCIPAL
int main(){
    int var = 10;
    printf("Variable antes de duplicar: %i", var);

    //* Llamada a la función con paso de valor.
    duplicaPorValor(var);

    //* Visualizamos el valor despues de la función.
    printf("\nVariable despues de llamar a la función: %i", var);

    return 0;
}

// FUNCIONES
//* Función que duplica un número, pero el duplicado solo afecta al parámetro local.
void duplicaPorValor(int x){
    x *= 2;

    //* Visualizamos el valor de la variable local.
    printf("\nVariable dentro de la función: %i", x);
}