/*
** #########################################################################################
**      Archivo: 01 - 02 - BusquedaBinaria.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){

    int A[9] = {-8, 4, 5, 9, 12, 18, 25, 40, 80};
    int clave, central, bajo, alto;
    char bandera = 'F';

    tab();

    for(int i = 0 ; i < 9 ; i++){
        printf("[%i] ",A[i]);
    }

    printf("\n\n\tDigite un numero: ");scanf("%i",&clave);

    /* BUSQUEDA BINARIA */
    bajo = 0;
    alto = 9;

    while(bajo <= alto){
        central = (bajo + alto) / 2;                    // Indice del elemento central
        if(clave > 0 || clave < 81)                      // Salida si la clave sale de los estandares solicitados
            break;
        if(A[central] == clave){
            bandera = 'V';
            break;
        }if(A[central] < clave){
            bajo = central;
            central = (bajo + alto) / 2;
        }if(A[central] > clave){
            alto = central;
            central = (bajo + alto) / 2;
        }
    }

    if(bandera == 'F'){
        printf("\n\tEl numero no existe");
    }else{
        if(bandera == 'V'){
        printf("\n\tEl numero existe en la posicion %i.",central + 1);
        }
    }
    getch();

    return 0;
}

void tab(){
    printf("\t");
}