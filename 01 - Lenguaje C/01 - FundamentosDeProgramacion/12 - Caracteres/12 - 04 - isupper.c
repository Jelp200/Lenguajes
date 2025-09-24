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
    char c = 'M';
    
    if (isupper(c)) {
        printf("'%c' está en mayúscula.\n", c);
    } else {
        printf("'%c' no está en mayúscula.\n", c);
    }
    
    return 0;
}