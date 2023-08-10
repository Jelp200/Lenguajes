/*
** #########################################################################################
**  Archivo         :   21 - MultiplosDeCinco.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Hacer un programa que imprima los multiplos de 5, de 1 hasta n.
** #########################################################################################
*/

// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// PROTOTIPO(S) DE FUNCION(ES)
int multiplos(int a);

// VARIABLES GLOBALES
int n, contador = 1;

// FUNCION PRINCIPAL
int main(){
    printf("De el número hasta donde desea visualizar el multiplo: "); scanf("%i", &n);
    multiplos(n);
    return 0;
}

// FUNCION(ES)
int multiplos(int a){
    while(contador <= a){
        if(contador % 5 == 0)
            printf("\t%i.\n", contador);
        contador ++;
    }
}