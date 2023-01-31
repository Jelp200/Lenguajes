/*
** #########################################################################################
**      Archivo: 01 - 01 - BusquedaSecuencial.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){
    
    int arreglo[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int i = 0, dato;
    char band = 'F';

    printf("\n\tEscriba un numero: "); scanf("%i", &dato);

    // Busqueda secuencial.
    while ((band == 'F') && (i < 10)){
        if(arreglo[i] == dato){
            band = 'V';
        }
        i++;
    }

    if (band == 'F'){
        printf("\tEl numero no existe en la linea.");
    }else if(band == 'V'){
        printf("\n\tEl arreglo tiene los siguientes datos: | %i | %i | %i | %i | %i | %i | %i | %i |\n", arreglo[0], arreglo[1], arreglo[2], arreglo[3], arreglo[4], arreglo[5], arreglo[6], arreglo[7], arreglo[8], arreglo[9], arreglo[10]);
        printf("\n\tEl numero existe, en la posición %i\n", i);
    }
    
    return 0;
}

