/*
** #########################################################################################
**      Archivo: main.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include "funciones.h"

// Main Function
int main() {

    //! Creamos un apuntador para trabajar con las librerias.
    int *p_a, *p_b;
    int a, b;

    printf("\n\tDe el primer valor: "); scanf("%i", &a);
    printf("\tDe el segundo valor: "); scanf("%i", &b);

    wit();

    p_a = &a;
    p_b = &b;

    //! Llamamos a la función dentro del archivo .h
    int RS = suma(p_a, p_b);
    printf("\n\tLa suma es: %i", RS);

    wit();

    int RR = resta(p_a, p_b);
    printf("\n\tLa resta es: %i", RR);

    wit();

    int RP = producto(p_a, p_b);
    printf("\n\tEl producto es: %i", RP);

    wit();

    int RC = cociente(p_a, p_b);
    printf("\n\tEl cociente es: %i", RC);

    wit();

    int RSR = sRaices(p_a, p_b);
    printf("\n\tLa suma de las raices es: %i", RSR);
    
    return 0;
}

// Funciones.
void wit(){
    puts("\n");
    system("PAUSE");
    system("CLS");
}