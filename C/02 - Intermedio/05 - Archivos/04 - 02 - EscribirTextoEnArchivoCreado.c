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

    //! Creamos el apuntador y lo igualamos a lo que devuelva "fopen".

    //! Ya que el archivo no existe esté se creara atomaticamente.

    FILE* Archivo = fopen("04-02-Prueba.txt", "a");

    // Verificación (NULL es la macro para memoria nula).
    if (Archivo == NULL){
        printf("\n\tError al intentar crear/acceder al archivo.");
    }else{
        // Definimos un texto y lo escribimos en el archivo.
        char Texto[] = "Hola mundo desde archivo";

        fprintf(Archivo, "Texto escrito: %s", Texto);
        printf("\n\tArchivo creado con exito.");
    }

    //! Cerramos el archivo.
    fclose(Archivo);
    
    return 0;
}