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
    char c = '9';
    
    if (isalnum(c)) {
        printf("'%c' es un carácter alfanumérico.\n", c);
    } else {
        printf("'%c' no es un carácter alfanumérico.\n", c);
    }
    
    return 0;
}