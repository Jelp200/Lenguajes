/*
** #########################################################################################
**      Archivo: 05 - 05 - Getchar&Putchar.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main() {

    int c;

    while (EOF != (c = getchar())){           //Mientras c no haya llegado al final  
        putchar(c);                         //EOF = end of file
    };
    
    return 0;
}