/*
** #########################################################################################
**      Archivo: 03-TiposDeDatos.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Veremos los tipos de datos basicos en C.
** #########################################################################################
*/

// Directivas de preprocesador.
#include <stdio.h>

// Variable global.
char caracter = 'C';
char string[] = "String";
int entero = 1;
float decimal = 1.2;


// Función principal.
int main(void){

    printf("\n\t\tDato tipo char: %c", caracter);
    printf("\n\t\tDato tipo entero: %i", entero);
    printf("\n\t\tDato tipo decimal: %.1f", decimal);
    printf("\n\t\tDato tipo string: %s", string);

    return 0;
}