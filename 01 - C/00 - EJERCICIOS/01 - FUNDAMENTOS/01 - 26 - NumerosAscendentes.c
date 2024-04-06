/*
** #########################################################################################
**      Archivo: 26 - NumerosAscendentes.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que a travez de funciones no recursivas pueda 
**                      realizar un ordenamiento de tres numeros de forma ascendente.
** #########################################################################################
*/

// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// VARIABLES GLOBALES
int n1 = 0, n2 = 0, n3 = 0;

// PROTOTIPO(S) DE FUNCION(ES)
int Orden(int a, int b, int c);

// FUNCION PRINCIPAL
int main(){
    printf("De el primer número: "); scanf("%i", &n1);
    printf("De el segundo número: "); scanf("%i", &n2);
    printf("De el tercer número: "); scanf("%i", &n3);
    Orden(n1, n2, n3);
    return 0;
}

// FUNCION(ES)
int Orden(int a, int b, int c){
    if(a >= b && a >= c){
        if(b >= c)
            printf("\n\t\tPrimer if: %i, %i, %i", c, b, a);
        else
            printf("\n\t\tPrimer else: %i, %i, %i", b, c, a);
    }
    if(b >= a && b >= c){
        if(a >= c)
            printf("\n\t\tSegundo if: %i, %i, %i", c, a, b);
        else
            printf("\n\t\tSegundo else: %i, %i, %i", a, c, b);
    }
    if(c >= b && c >= a){
        if(b >= a)
            printf("\n\t\tTercer if: %i, %i, %i", a, b, c);
        else
            printf("\n\t\tTercer else: %i, %i, %i", b, a, a);
    }
}