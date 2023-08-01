/*
** #########################################################################################
**      Archivo: 03 - 01 - Enum.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Declaración de una enumeracion.
enum color{ ROJO, VERDE, BLANCO };

// Función para imprimir color.
void imprColor(enum color eleccColor){
    const char *nombreColor = "Color invalido";

    switch (eleccColor){
        case ROJO:
            nombreColor = "Rojo";
            printf("\n\t\033[0;31m %s", nombreColor);
            break;
        case VERDE:
            nombreColor = "Verde";
            printf("\n\t\033[0;32m %s", nombreColor);
            break;
        case BLANCO:
            nombreColor = "Blanco";
            printf("\n\t %s", nombreColor);
            break;
        default:
            printf("%s", nombreColor);
            break;
   }
}

// Main function
int main(){
   enum color eleccColor;

   printf("Digite un numero entre 0 y 2: "); scanf("%d", (int*)&eleccColor);
   imprColor(eleccColor);
   
   return 0;
}