/*
** #########################################################################################
**      Archivo: 12 - 08 - strrev.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <string.h>

// FUNCIÓN PRINCIPAL
int main() {
    char cadena[] = "Jelp200";
    char copia[50];
    
    // Copiar la cadena original a una copia
    strcpy(copia, cadena);
    
    // Invertir la cadena usando strrev
    strrev(copia);
    
    printf("Cadena original: %s\n", cadena);
    printf("Cadena invertida: %s\n", copia);
    
    return 0;
}