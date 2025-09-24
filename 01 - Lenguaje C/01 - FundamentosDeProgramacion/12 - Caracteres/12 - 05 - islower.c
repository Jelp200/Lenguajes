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
    char c = 'k';
    
    if (islower(c)) {
        printf("'%c' está en minúscula.\n", c);
    } else {
        printf("'%c' no está en minúscula.\n", c);
    }
    
    return 0;
}