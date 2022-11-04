/*
** #########################################################################################
**      Archivo: 11 - 01 - Strcpy.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          String copy (Strcpy) se declara de la siguiente manera:
**              strcpy(Destino, Fuente);
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>
#include <string.h>

// Main Function
int main(){
    char origen[] = "Programación";

    char destino[12];                                       // Declaramos el arreglo de 12 ya que nuestro arreglo de origen tiene 12 caracteres.

    //Copiamos el contenido y lo mostramos
    strcpy(destino, origen);
    printf("%s", destino);

    return 0;
}