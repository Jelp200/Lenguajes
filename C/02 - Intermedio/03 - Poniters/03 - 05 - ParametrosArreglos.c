/*
** #########################################################################################
**      Archivo: 03 - 05 - ParametrosArreglos.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Funcion
void llenarArreglo(int Arreglo[], int d){
    for (int i = 0; i < d; i++){
        printf("\n\tDe el valor del arreglo [%i]: ", i); scanf("%i", &Arreglo[i]);
    }
    
}

// Main Function
int main(){

    int miVector[5];

    //! Pasamos el nombre del arreglo y su dimension.
    llenarArreglo(miVector, 5);

    //! Imprimimos sus valores
    for (int j = 0; j < 5; j++){
        printf("%i", miVector[j]);
    }
     
    return 0;
}

