/*
** #########################################################################################
**      Archivo: 02 - 02 - Estructuras2.c
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
persona1,
persona2;

// Main Function
int main(){

    printf("\nEscriba un nombre: "); gets(persona1.nombre);
    printf("\nEscriba la edad: "); scanf("%i", &persona1.edad);

    fflush(stdin);

    printf("\nEscriba un nombre: "); gets(persona2.nombre);
    printf("\nEscriba la edad: "); scanf("%i", &persona2.edad);

    system("CLS");

    printf("\nSu nombre es: %s\n",persona1.nombre);
    printf("La edad es: %i\n",persona1.edad);

    printf("\nSu nombre es: %s\n",persona2.nombre);
    printf("La edad es: %i\n",persona2.edad);

    return 0;
}