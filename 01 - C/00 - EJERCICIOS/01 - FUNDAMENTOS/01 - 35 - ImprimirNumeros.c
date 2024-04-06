/*
** #########################################################################################
**  Archivo: 01 - 36 - InvertirNumeros.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**              Realizar un programa que implemente la recursividad en funciones y así
**              invierta un numero dado por el usuario (hasta dos cifras).
**
**              N dado: 32 -> N invertido: 23
**
**              Algoritmo:
**              
**              nDado % 10 = Primer digito
**              si nDado > 10
**                  inverit(ndado/10)
** #########################################################################################
*/

// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// VARIABLES GLOBALES
int n;

// PROTOTIPO(S) DE FUNCION(ES)
int Invertir(int n);                                            // Declaramos una funcion de tipo int con parametros para poder pasar

// FUNCION PRINCIPAL
int main(){
    do{
        printf("\n\t\tDe un numero: "); scanf("%i", &n);
    }while(n < 0);

    printf("\n\t\t");Invertir(n);

    return EXIT_SUCCESS;
}

// FUNCION(ES)
int Invertir(int n){
    printf("%d", n % 10);
    if(n > 10)
        return Invertir(n / 10);
}