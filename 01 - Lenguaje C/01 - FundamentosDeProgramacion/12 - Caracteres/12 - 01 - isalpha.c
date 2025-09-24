/*
** #########################################################################################
**      Archivo: 12 - 01 - isalpha.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <ctype.h>

// FUNCIÓN PRINCIPAL
int main() {
    char c = 'a';
    
    if (isalpha(c)) {
        printf("'%c' es una letra.\n", c);
    } else {
        printf("'%c' no es una letra.\n", c);
    }
    
    return 0;
}