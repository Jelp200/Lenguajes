/*
** #########################################################################################
**      Archivo: 02 - 01 - ApuntadoresDobles.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(){
    //* Variable
    int var = 10;

    //* Apuntador a la variable entera
    int *ptr1 = &var;

    //* Apuntador al apuntador
    int **ptr2 = &ptr1;

    printf("var: %d\n", var);           // var = 10
    printf("*ptr1: %d\n", *ptr1);       // *ptr1 = 10
    printf("**ptr2: %d\n", **ptr1);     // **ptr2 = 10
    return 0;
}