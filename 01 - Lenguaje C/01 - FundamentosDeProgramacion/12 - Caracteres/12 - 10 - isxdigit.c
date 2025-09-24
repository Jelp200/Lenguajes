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
    char c = 'A';
    
    if (isxdigit(c)) {
        printf("'%c' es un dígito hexadecimal.\n", c);
    } else {
        printf("'%c' no es un dígito hexadecimal.\n", c);
    }
    
    return 0;
}