/*
** #########################################################################################
**      Archivo: 05 - 03 - doWhile.md
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(void){
    int i = 0;
    
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