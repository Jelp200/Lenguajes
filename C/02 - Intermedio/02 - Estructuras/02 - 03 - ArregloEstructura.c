/*
** #########################################################################################
**      Archivo: 02 - 03 - ArregloEstructura.c
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
personas[5];                                                    // persona1, persona2, ...

// Main Function
int main(){

    int i;

    //* Bucle para ingresar datos de la persona "n"
    for (i = 0; i < 5; i++){
        fflush(stdin);

        system("cls");

        printf("\t%i) Escribe su Nombre: ",i+1); gets(personas[i].nombre);
        printf("\t%i) Escribe su Edad: ",i+1); scanf("%i",&personas[i].edad);
        printf("\n");
    }
    
    //* Bucle para visualizar lo datos ingresados de las personas.
    for (i = 0; i < 5; i++){
        printf("\n\t%i) Su nombre es: %s", i + 1, personas[i].nombre);
        printf("\n\t%i) Su Edad es: %i", i + 1, personas[i].edad);
    }printf("\n\n");

    return 0;
}