/*
** #########################################################################################
**      Archivo: 12 - 10 - EnteroBinario.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**              Realizar un programa que implemente la recursividad en funciones y así
**              realizar la conversion de un n entero a n binario.
** #########################################################################################
*/

// Directivas de prepocesdor
#include <stdio.h>
#include <stdlib.h>

// Variabes globales
int n;

// Prototipo(s) de funcion(es)
void Binario(int n);                                            // Declaramos una funcion de tipo vacia con parametros para poder pasar

// Main function
int main(){
    system("cls");
    printf("\n\t\tDe el numero decimal a convertir: "); scanf("%i", &n);

    if(n >= 0){
        printf("\n\t\tEl numero binaio es: ");
        Binario(n);
    }else{
        printf("\n\t\tDe un numero positivo...\n");
        system("pause");
        return main();
    }
    return EXIT_SUCCESS;
}

// Funcion(es)
void Binario(int n){
    if(n > 1)
        Binario(n / 2);
    printf("%i", n % 2);
}