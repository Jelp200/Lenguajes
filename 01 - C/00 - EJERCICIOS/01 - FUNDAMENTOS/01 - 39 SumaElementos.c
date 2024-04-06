/*
** ##########################################################################################
**  Archivo: 01 - 39 - SumaElementos.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**              Realizar un programa que calcule la suma de todos los elementos de un arreglo
** ##########################################################################################
*/

// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>

// PROTOTIPO(S) DE FUNCION(ES)
int sumaArreglo(int arreglo[], int longitud){
    int suma = 0;
    for (int i = 0; i < longitud; i++)
        suma += arreglo[i];
    return suma;
}

// FUNCION PRINCIPAL
int main() {
    int arreglo[] = {1, 2, 3, 4, 5};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);
    int resultado = sumaArreglo(arreglo, longitud);
    printf("La suma de los elementos es: %d\n", resultado);
    return 0;
}