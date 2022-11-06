/***********************************************************************
**
**  Archivo         :   13 - post&pre.c
**  Proyecto        :   Mr.C (Ejercicios)
**  Herramienta(s)  :   Code::Blocks / Visual Studio Code
**  Compilador      :   C/C++ Compiler (Windows)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que post y pre incremente
**                      un numero.
**
***********************************************************************/

// Directivas de preprocesador.
#include <stdio.h>


// Funcion principal.
int main(void){

    int a;
    int b = 0;

    printf("\n\t\tDe un numero: "); scanf("%i", &a);

    b = a++; // Post = ++a

    printf("\n\t\tA es %i y el preincremento es: %i", a, b);


    return 0;
}
