/*
** #########################################################################################
**      Archivo: 02 - 03 - TypedefEstructura.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Funcion(es)
void wit(){
    puts("\n\n");
    system("PAUSE");
    system("CLS");
}

// Estructura(s)
struct persona{
    char nombre[20];
    int edad;
    char direccion[50];
};

typedef struct persona persona;

// Main Function
int main(){
    persona persona1, persona2;

    puts("\n\t\tMIEMBROS EDITABLES");
    printf("\nEscriba un nombre: "); gets(persona1.nombre);
    printf("\nEscriba la edad: "); scanf("%i", &persona1.edad);

    fflush(stdin);

    printf("\nEscriba un nombre: "); gets(persona2.nombre);
    printf("\nEscriba la edad: "); scanf("%i", &persona2.edad);

    wit();

    puts("\n\t\tMIEMBROS EDITABLES");
    printf("\nSu nombre es: %s\n",persona1.nombre);
    printf("La edad es: %i\n",persona1.edad);

    printf("\nSu nombre es: %s\n",persona2.nombre);
    printf("La edad es: %i\n",persona2.edad);
    
    return 0;
}