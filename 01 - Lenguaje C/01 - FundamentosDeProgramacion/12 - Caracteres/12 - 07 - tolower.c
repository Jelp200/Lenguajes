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
    char c = 'G';
    char lower = tolower(c);
    
    printf("La versión en minúscula de '%c' es '%c'.\n", c, lower);
    
    return 0;
}