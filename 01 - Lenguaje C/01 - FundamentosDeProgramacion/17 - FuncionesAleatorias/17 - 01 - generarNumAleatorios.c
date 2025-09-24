/*
** #########################################################################################
**      Archivo: 17 - 01 - generarNumAleatorios.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// PROTOTIPO(S) DE FUNCION(ES)
void fncRand();

// FUNCIÓN PRINCIPAL
int main(){
    fncRand();
    return 0;
}

// FUNCION(ES)
void fncRand(){
    int n;
    srand(time(NULL));
    n = 1 + rand() % ((10 + 1) - 1);
    printf("%d", n);
}