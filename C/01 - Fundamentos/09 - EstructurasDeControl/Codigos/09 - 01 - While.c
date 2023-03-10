/*
** #########################################################################################
**      Archivo: 09 - 01 - While.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Estructura de control WHILE.
**
**          while(algo){
**              ...
**              Código en C
**              ...
**          }
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){
    int opc = 1;

    while (opc != 0){
        puts("Opcion 1.");
        puts("Opcion 2.");
        puts("Opcion 3.");
        puts("Opcion 4.");
        puts("Opcion 5.");
        puts("Salir (0).");
        printf("De una opcion a hacer: "); scanf("%i", &opc);

        switch (opc){
        case 1: printf("\nOpcion %i dentro de un menu.\n\n", opc); break;
        case 2: printf("\nOpcion %i dentro de un menu.\n\n", opc); break;
        case 3: printf("\nOpcion %i dentro de un menu.\n\n", opc); break;
        case 4: printf("\nOpcion %i dentro de un menu.\n\n", opc); break;
        case 5: printf("\nOpcion %i dentro de un menu.\n\n", opc); break;
        case 0: break;
        default: printf("\nDe una opción correcta..."); break;
        }
    }

    return 0;
}