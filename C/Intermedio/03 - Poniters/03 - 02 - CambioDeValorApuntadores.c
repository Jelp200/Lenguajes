/*
** #########################################################################################
**      Archivo: 03 - 02 - CambioDeValorApuntadores.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){

    // Declaramos las variables
    int A = 19;
    int B = 20;

    //! Declaramos un apuntador a la referencia de las variables.
    int *pA = &A, *pB = &B;

    printf("\n\tEl valor de \'A\' es: %i\n", A);
    printf("\n\tLa ubicacion en memoria del apuntador a \'A\' es: %p\n", pA);
    printf("\n\tEl valor del apuntador a \'A\' es: %d\n", *pA);
    printf("\n\tEl valor de \'A\' es: %d\n", A);

    //! Cambiamos el valor al apuntador.
    printf("\n\n\tDe un nuevo valor a \'A\': "); scanf("%i", &*pA);

    //? Aqui se notara que cambio el valor de la variable a la que apuntaba
    printf("\n\tEl nuevo valor de \'A\' es: %d", A);

    puts("\n");
    system("PAUSE");
    system("CLS");

    printf("\n\tEl valor de \'B\' es: %i\n", B);
    printf("\n\tLa ubicacion en memoria del apuntador a \'B\' es: %X\n", pB);
    printf("\n\tEl valor del apuntador a \'B\' es: %d\n", *pB);
    printf("\n\tEl valor de \'B\' es: %d\n", B);

    //! Cambiamos el valor al apuntador.
    printf("\n\n\tDe un nuevo valor a \'B\': "); scanf("%i", &*pB);

    //? Aqui se notara que cambio el valor de la variable a la que apuntaba
    printf("\n\tEl nuevo valor de \'B\' es: %d", B);

    return 0;
}

