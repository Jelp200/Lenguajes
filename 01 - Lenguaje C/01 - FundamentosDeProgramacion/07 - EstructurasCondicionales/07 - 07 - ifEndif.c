/*
** #########################################################################################
**      Archivo: 07 - 07 - inEndif.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// DEFINES
#define MODE 2

// FUNCION PRINCIPAL
int main(){
    #if MODE == 1
        printf("Modo 1 seleccionado\n");
    #elif MODE == 2
        printf("Modo 2 seleccionado\n");
    #else
        printf("Modo desconocido\n");
    #endif

    return 0;
}