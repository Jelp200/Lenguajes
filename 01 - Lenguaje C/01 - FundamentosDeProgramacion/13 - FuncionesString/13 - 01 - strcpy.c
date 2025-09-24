/*
** #########################################################################################
**      Archivo: 13 - 01 - strcpy.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <ctype.h>

// FUNCIÓN PRINCIPAL
int main(void){
    char origen[] = "Programación";

    char destino[12];   // Declaramos el arreglo de 12 ya que nuestro arreglo de origen tiene 12 caracteres.

    //Copiamos el contenido y lo mostramos
    strcpy(destino, origen);
    printf("%s", destino);

    return 0;
}