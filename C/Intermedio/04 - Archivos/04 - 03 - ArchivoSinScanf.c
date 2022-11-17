/*
** #########################################################################################
**      Archivo: 04 - 01 - Fopen.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){

    FILE* Archivo = fopen("04-03-Prueba.txt", "a");

    if (Archivo == NULL){
        printf("\n\tError al intentar crear/acceder al archivo.");
    }else{
        char letra;

        //! Mientras el usuario no presione enter.
        while ((letra = getchar()) != '\n'){
            fputc(letra, Archivo);                  // Escribe lo que digite en el archivo.
        }
    }
    
    fclose(Archivo);

    return 0;
}