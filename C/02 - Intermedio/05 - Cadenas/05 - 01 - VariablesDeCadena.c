/*
** #########################################################################################
**      Archivo: 05 - 01 - Variables de cadena.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){

    //! Declaramos nuestra variable con los caracteres.
    char cad[] = "ABC";

    //! Imprimimos con punteros los valores
    printf("\n\tEl caracter en la posición [0] es: %c", *(cad + 0));
    printf("\n\tEl caracter en la posición [1] es: %c", *(cad + 1));
    printf("\n\tEl caracter en la posición [2] es: %c", *(cad + 2));
    printf("\n\tEl caracter en la posición [3] es: %c", *(cad + 3));
    
    return 0;
}