/*
** #########################################################################################
**      Archivo: 10 - 01 - 02 - while.md
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(void){
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