/*
** #########################################################################################
**      Archivo: 12 - 11 - ImprimirNumeros.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**              Realizar un programa que implemente la recursividad en funciones y así
**              imprima de forma descendente del numero dado a 0.
** #########################################################################################
*/

// Directivas de prepocesdor
#include <stdio.h>
#include <stdlib.h>

// Variabes globales
int n;

// Prototipo(s) de funcion(es)
int Listar(int n);                                            // Declaramos una funcion de tipo int con parametros para poder pasar

// Main function
int main(){
    printf("\n\t\tDe un numero: "); scanf("%i", &n);

    for(int i = n; i > 0; i--){
        printf("\n\t\t%d", Listar(i));
    }
    return EXIT_SUCCESS;
}

// Funcion(es)
int Listar(int n){
    if(n == 1)
        return 1;
    else
        return Listar(n - 1) + 1;
}