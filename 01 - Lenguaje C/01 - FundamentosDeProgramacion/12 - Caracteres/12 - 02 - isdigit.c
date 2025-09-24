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
    char c = '4';
    
    if (isdigit(c)) {
        printf("'%c' es un dígito.\n", c);
    } else {
        printf("'%c' no es un dígito.\n", c);
    }
    
    return 0;
}