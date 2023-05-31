/*
** #########################################################################################
**      Archivo: 03 - 01 - UsoDelPunteroYDireccion.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){

    int n;
    int *pn;

    printf("\n\tDe el numero a apuntar: "); scanf("%i", &n);

    system("CLS");

    printf("\n\tNumero: %i", n);
    printf("\n\tPosicion: %p", &n);                                     //! Posición de memoria.

    puts("\n");
    system("PAUSE");
    system("CLS");

    pn = &n;                                                            //! pn = posición de memoria del numero.
    puts("\n\t\tValor de la variable\n");
    printf("\tNumero: %i\n", n);
    printf("\tNumero: %i\n", *pn);

    puts("\n\tPosicion de memoria\n");
    printf("\tPosicion: %X\n", &n);
    printf("\tPosicion: %X", pn);

    return 0;
}