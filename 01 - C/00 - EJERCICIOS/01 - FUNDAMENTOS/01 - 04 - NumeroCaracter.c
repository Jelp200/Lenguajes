/*
** #########################################################################################
**  Archivo         :   04 - NumeroCaracter.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que visualize la siguiente
**                      informacion en consola.
**                          Numero : [Numero ingresado]
**                          Caracter: [Caracter ingresado]
** #########################################################################################
*/
// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// PROTOTIPO(S) DE FUNCION(ES)
void clear();

// FUNCION PRINCIPAL
int main(){
    short int n = 0;
    signed char c;

    printf("\n\tDe el numero a visualizar: "); scanf("%li", &n);
    fflush(stdin);
    printf("\n\tDe el caracter a visualizar: "); scanf("%c", &c);

    clear();

    printf("\n\tNumero: %li", n);
    printf("\n\tCaracter: %c\n\n", c);
    return 0;
}

// FUNCONES
void clear(){
    system("cls || clear");
}