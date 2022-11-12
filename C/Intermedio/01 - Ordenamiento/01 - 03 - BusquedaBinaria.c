/*
** #########################################################################################
**      Archivo: 01 - 03 - BusquedaBinaria.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){
    
    int n, ele, aux, dato, inf, sup, mitad;
    char band = 'F';

    printf("\n\tDe el numero de elementos que tendra el arrelgo: "); scanf("%i", &ele);
    int a[ele];
    for (int i = 0; i < ele; i++){
        printf("\n\tDe el %i dato: ", i + 1); scanf("%i", &a[i]);
    }
    
    clear();

    int indice = -1;
    while (++indice < ele){
        printf("\n\tEl valor del array[%i] es: %i", indice, a[indice]);
    }

    wit();

    // Metodo burbuja.
    for (int i = 0; i < ele; i++){
        for (int j = 0; j < ele; j++){
            if (a[j] > a[j + 1]){
                aux = a[j];
                a[j] = a[j + 1];
                a[j + 1] = aux;
            }
        }
    }

    printf("\tLa lista ordenada es: ");
    for (int i = 0; i < ele; i++){
        printf("%i, ", a[i]);
    }

    //Busqueda Binaria

    wit();

    printf("\nEscribe un numero: ");
    scanf("%i",&dato);

    inf = 0;
    sup = ele;

    while (inf <= sup){
        mitad = (inf + sup) / 2;

        if (a[mitad] == dato){
            band = 'V';
            break;
        }if (a[mitad] > dato){
            sup = mitad;
            mitad = (inf+sup)/2;}
        if (a[mitad] < dato){
            inf = mitad;
            mitad = (inf+sup)/2;
        }
    }

    if (band == 'F'){
            printf("\tEl numero no existe\n\n");
            sleep(3);
        }else if (band == 'V'){
            printf("\tEl numero existe en la posicion %i\n\n",mitad);
            sleep(3);
        }
    
    return 0;
}

void clear(){
    system("CLS");
}

void wit(){
    printf("\n\n");
    system("pause");
    system("cls");
}