/*
** #########################################################################################
**  Archivo: 01 - 34 - IntBin.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**              Realizar un programa que implemente la recursividad en funciones y así
**              realizar la conversion de un n entero a n binario.
** #########################################################################################
*/

// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// VARIABLES GLOBALES
int n, aux;

int tipo = 0;

// PROTOTIPO(S) DE FUNCION(ES)
void clear(){
    system("cls || clear");
}
void pausa(){
    fflush(stdout);
    system("read -p '\n\t\tPresione enter para continuar...' t");       // Código en bash
}
int Binario(int n);                                            // Declaramos una funcion de tipo vacia con parametros para poder pasar

// FUNCION PRINCIPAL
int main(){
    clear();
    printf("\n\t\tDe el numero decimal a convertir: "); scanf("%i", &n);
    if(n >= 0){
        printf("\n\t\tEl numero binaio es: %i", Binario(n));
    }else{
        printf("\n\t\tDe un numero positivo...\n");
        pausa();
        return main();
    }

    return EXIT_SUCCESS;
}

// FUNCION(ES)
int Binario(int n){
    if(n > 1)
        Binario(n / 2);
    printf("%i", n % 2);
}