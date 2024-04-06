/*
** #########################################################################################
**  Archivo         :   19 - SumaDeNumerosSeguidos.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que haga la suma de los números anteriores a un
**                      número dado por el usuario, po rejemplo.
**
**                      n = 10;
**                      S = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10
** #########################################################################################
*/

// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// PROTOTIPO(S) DE FUNCION(ES)
int suma(int a);

// VARIABLES GLOBALES
int n, S = 0, contador = 1;

// FUNCION PRINCIPAL
int main(){
    printf("De el número hasta donde desea la suma: "); scanf("%i", &n);
    printf("La súma de 1 hasta %i es = %i", n, suma(n));
    return 0;
}

// FUNCION(ES)
int suma(int a){
    while(contador <= a){
        S += contador;
        contador ++;
    }
    return S;
}