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

    //! Apuntador al archivo.
    FILE *fd;

    char direccion[] = "C:\\Users\\Jorge\\Desktop\\04-01-Prueba";         // Localizamos el archivo que queremos.

    fd = fopen(direccion, "r");                                     // Al puntero le pasamos la función de fopen con el archivo y la acción.
    // r = read

    if (fd != NULL){
        printf("\n\tEl archivo no existe");
    }else{
        //! Imprimimos la ubicación del archivo y si existe o no.
        printf("\n\tEl archivo existe");
        printf("\n\tSu ubicacion es: %s", direccion);
    }
    

    return 0;
}
 
/*
Notas.

El programa utiliza la función "fopen()", para determinar si existe un archivo de texto (.txt) o no.

fopen(NombreArchivo, Modo);

    NombreArchivo = cadena -> Contiene el identificador externo del archivo.
    modo = cadena          -> Contiene el modo en que va a ser tratado el archivo.
*/