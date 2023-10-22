/*
** #########################################################################################
**  Archivo: 01 - 31 - CntaRegresiva.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**              Realizar un programa que implemente la recursividad en funciones y así este
**              pueda realizar una cuenta regresiva.
** #########################################################################################
*/

// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// VARIABLES GLOBALES
int n;

// PROTOTIPO(S) DE FUNCION(ES)
void cntaRegresiva(int nActual);                                            // Declaramos una funcion de tipo void con parametros para poder pasar

// FUNCION PRINCIPAL
int main(){
    printf("\n\t\tDe el numero donde comenzara la cuenta: "); scanf("%i", &n);
    
    //! LLAMAMOS A LA FUNCION Y PASAMOS EL DATO PEDIDO POR EL USUARIO AL PARAMETRO
    cntaRegresiva(n);

    return EXIT_SUCCESS;
}

// FUNCION(ES)
