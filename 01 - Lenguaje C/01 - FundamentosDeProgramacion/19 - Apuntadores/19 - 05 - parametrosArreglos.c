/*
** #########################################################################################
**      Archivo: 19 - 05 - parametrosArreglos.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// PROTOTIPOS DE FUNCIONES
void llenarArreglo(int Arreglo[], int longitud);

// FUNCION PRINCIPAL
int main(){
    int miVector[5];

    //* Pasamos solamente el nombre del arreglo y su dimensión.
    llenarArreglo(miVector, 5);

    // Mostramos sus valores.
    for(int i = 0; i < 5; i++)
        printf("Valor Arreglo[%i]: %i\n", i, miVector[i]);

    return 0;
}

// FUNCIONES
//* Función que permite el ingreso de los elementos de un arreglo
void llenarArreglo(int Arreglo[], int longitud){
    // Ciclo para recorrer el arreglo
    for(int i = 0; i < longitud; i++){
        printf("\nDe el valor #%i del arreglo: ", i);
        scanf("%i", &Arreglo[i]);
    }
}