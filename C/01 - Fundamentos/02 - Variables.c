/*
** #########################################################################################
**      Archivo: 02-Variables.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Veremos como poder declarar variables en C.
** #########################################################################################
*/

// Directivas de preprocesador.
#include <stdio.h>

// Defines,
#define DEFINE "Define"

// Variable global.
char variableGlobal[] = "Variable global"; 

// Función principal.
int main(void){
    char variableLocal[] = "Variable local";

    printf("\n\t\tEl define es: %s", DEFINE);
    printf("\n\t\tLa variable global es: %s", variableGlobal);
    printf("\n\t\tLa local global es: %s", variableLocal);

    return 0;
}