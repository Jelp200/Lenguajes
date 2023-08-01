/*
** #########################################################################################
**      Archivo: 09 - 02 - DoWhile.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Estructura de control FOR.
**
**          do{
**              ...
**              Código en C
**              ...
**          }while (condición);
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Variables globales
int i = 0;

// Main Function
int main(){
    do{
        printf("%i.\n", i);
        i++;
        /* PROCESO DEL CÓDIGO
        i = 1, 1 + 1 = 2, 2 + 1 = 3, 3 + 1 = 4, ...
        0.
        1.
        2.
        3.
        4.
        ...
        20.
        */
    }while (i <= 20);
    
    return 0;
}