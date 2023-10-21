/*
** #########################################################################################
**  Archivo         :   20 - SumaParesRestaImpares.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que haga la suma de los números impares y la
**                      resta de números pares hasta un número dado por el usuario, por
**                      rejemplo.
**
**                      n = 10;
**                      S = 1 - 2 + 3 - 4 + 5 - 6 + 7 - 8 + 9 - 10
** #########################################################################################
*/

// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// PROTOTIPO(S) DE FUNCION(ES)
int suma(int a);

// VARIABLES GLOBALES
int n, contador = 1;
int SG = 0, SP = 0, SIP = 0, N = 0;

// FUNCION PRINCIPAL
int main(){
    printf("De el número hasta donde desea la suma: "); scanf("%i", &n);
    printf("El resultado es = %i", suma(n));
    return 0;
}

// FUNCION(ES)
int suma(int a){
    while(contador <= a){
        if(contador % 2 == 0){
            N = contador * (-1);
            SP += N;
        }else
            SIP += contador;
        contador ++;
    }
    return SG = SP + SIP;
}