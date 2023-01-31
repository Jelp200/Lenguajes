/*
** #########################################################################################
**      Archivo: 01 - 04 - BusquedaBinaria2.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){
    
    int a[10] = {5, 3, 4, 1, 2, 10, 9, 6, 7, 8};
    int i, j, aux, min, dato, mitad, inf, sup;
    char bandera = 'F';

    for(i=0 ; i<10 ; i++){
        min=i;
        for(j = i + 1 ; j < 10 ; j++){
        if(a[min] > a[j]){ min = j; }
    }
        aux = a[i];
        a[i] = a[min];    
        a[min] = aux;
    }

    tab();
    
    for(i = 0 ; i < 10 ; i++){
        printf("[%i] ",a[i]);
    }

    printf("\n\n\tDigite un numero: ");scanf("%i",&dato);

    //Busqueda binaria.

    inf = 0;
    sup = 10;

    while(inf <= sup){
        mitad=(inf + sup) / 2;
            if(dato > 10 || dato < 0){
            break;
        }if(a[mitad] == dato){
        bandera = 'V';
        break;
        }if(a[mitad] > dato){
        sup = mitad;
        mitad = (inf + sup) / 2;
        }if(a[mitad] < dato){
        inf = mitad;
        mitad = (inf + sup) / 2;
        }
    }

    if(bandera == 'F'){
        printf("\n\tEl numero no existe");
    }else{
        if(bandera == 'V'){
        printf("\n\tEl numero existe en la posicion %i.",mitad + 1);
        }
    }
    getch();

    return 0;
}

void tab(){
    printf("\t");
}