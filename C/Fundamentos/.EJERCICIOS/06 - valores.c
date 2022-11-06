/*
** #########################################################################################
**  Archivo         :   06 - valores.c
**  Proyecto        :   Mr.C (Ejercicios)
**  Herramienta(s)  :   Code::Blocks / Visual Studio Code
**  Compilador      :   C/C++ Compiler (Windows)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que visualize la siguiente
**                      informacion en consola.
**                          Char  : [Char ingresado]
**                          String: [String ingresado]
**                          Int   : [Int ingresado]
**                          Float : [Float ingresado]
**                          Double : [Double ingresado]
** #########################################################################################
*/

// Directivas de preprocesador.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Variables globales.
char cadena[50];
unsigned char c;
short int n = 0;
float fn = 0;
double d = 0;

// Funcion principal.
int main(void){

    printf("\tDe un caracter: "); scanf("%c", &c);
    fflush(stdin);
    system("cls");

    printf("\tDe una cadena de caracter: "); gets(cadena);
    system("cls");

    printf("\tDe un numero entero: "); scanf("%i", &n);
    system("cls");

    printf("\tDe un numero con decimal: "); scanf("%f", &fn);
    system("cls");

    printf("\tDe un numero grande: "); scanf("%lf", &d);
    system("cls");

    printf("\tChar: %c\n\tString: %s\n\tInt: %i\n\tFloat: %.2f\n\tDouble: %lf", c, cadena, n, fn, d);
    return 0;
}
