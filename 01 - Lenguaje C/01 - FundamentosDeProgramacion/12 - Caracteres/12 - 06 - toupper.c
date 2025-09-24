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
    char c = 'b';
    char upper = toupper(c);
    
    printf("La versión en mayúscula de '%c' es '%c'.\n", c, upper);
    
    return 0;
}