/*
** #########################################################################################
**      Archivo: 12 - 02 - isdigit.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <ctype.h>

// FUNCIÓN PRINCIPAL
int main() {
    char c = '.';
    
    if (ispunct(c)) {
        printf("'%c' es un signo de puntuación.\n", c);
    } else {
        printf("'%c' no es un signo de puntuación.\n", c);
    }
    
    return 0;
}