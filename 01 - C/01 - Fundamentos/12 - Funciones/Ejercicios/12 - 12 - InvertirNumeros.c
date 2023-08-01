/*
** #########################################################################################
**      Archivo: 12 - 12 - ImprimirNumeros.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
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

// Directivas de prepocesdor
#include <stdio.h>
#include <stdlib.h>

// Variabes globales
int n;

// Prototipo(s) de funcion(es)
int Invertir(int n);                                            // Declaramos una funcion de tipo int con parametros para poder pasar

// Main function
int main(){
    
    do{
        printf("\n\t\tDe un numero: "); scanf("%i", &n);
    }while(n < 0);

    printf("\n\t\t");Invertir(n);

    return EXIT_SUCCESS;
}

// Funcion(es)
int Invertir(int n){
    printf("%d", n % 10);
    if(n > 10)
        return Invertir(n / 10);
}