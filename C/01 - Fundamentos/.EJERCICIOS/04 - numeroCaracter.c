/*
** #########################################################################################
**  Archivo         :   04 - numeroCaracter.c
**  Proyecto        :   Mr.C (Ejercicios)
**  Herramienta(s)  :   Code::Blocks / Visual Studio Code
**  Compilador      :   C/C++ Compiler (Windows)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que visualize la siguiente
**                      informacion en consola.
**                          Numero  : [Numero ingresado]
**                          Caracter: [Caracter ingresado]
** #########################################################################################
*/

// Directivas de preprocesador.
#include <stdio.h>
#include <stdlib.h>

// Variables globales.
short int n = 0;
signed char c;

// Funcion principal.
int main(void){

    printf("De el numero a visualizar: "); scanf("%li", &n);
    fflush(stdin);
    printf("De el caracter a visualizar: "); scanf("%c", &c);

    system("cls");

    printf("Numero: %li", n);
    printf("\nCaracter: %c", c);

    return 0;
}
