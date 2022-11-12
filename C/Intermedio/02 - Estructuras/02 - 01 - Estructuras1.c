/*
** #########################################################################################
**      Archivo: 02 - 01 - Estructuras1.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Estructuras
struct persona{
    char nombre[20];
    int edad;
}
persona1 = {"Jesus", 19},
persona2 = {"Manuel", 20};

// Main Function
int main(){

    printf("\nSu nombre es: %s", persona1.nombre);
    printf("\nSu edad es: %i\n\n", persona1.edad);

    printf("\nSu nombre es: %s", persona2.nombre);
    printf("\nSu edad es: %i", persona2.edad);

    return 0;
}