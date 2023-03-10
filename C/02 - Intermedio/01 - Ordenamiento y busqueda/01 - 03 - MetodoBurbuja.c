/*
** #########################################################################################
**      Archivo: 01 - 03 - MetodoBurbuja.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Variables globales
int n, ele, aux, dato;
char band = 'F';
int indice = -1;

// Main Function
int main(){

    puts("\n\t\t\tORDENACION POR BURBUJA");

    printf("\n\tDe el numero de elementos que tendra el arrelgo: "); scanf("%i", &ele);
    int a[ele];                                                             // Declaramos un arreglo con el numero de elementos dado por el usuario.

    clear();

    //! PEDIMOS LOS VALORES DE CADA ELEMENTO.
    /*
    Para una variable 'i' que inicializa en 0, siendo 'i' menor al numero dado de los elementos requeridos
    y esta variable 'i' irá en incremento (postincremento).
    */
    for(int i = 0; i < ele; i++){
        printf("\n\tDe el %i dato: ", i + 1); scanf("%i", &a[i]);
    }

    clear();

    //! SE IMPRIMEN LOS VALORES DE LOS ARREGLOS.
    while (++indice < ele){
        printf("\n\tEl valor del array[%i] es: %i", indice, a[indice]);
    }

    wit();

    //! ORDENACION POR BURBUJA.
    /*
    El primer bucle lo que hace es controlar la pasada en el arreglo.
    El segundo bucle recorrera los valores dentro de la lista para así hacer las comparaciones.
    La condicional nos proporciona hacer los intercambios para los elementos desordenados.
    */
    for(int i = 0; i < ele; i++){
        for(int j = 0; j < ele; j++){
            if(a[j] > a[j + 1]){                                            // Si el valor del arreglo a[j] es mayor al arreglo a[j + 1], entonces
                aux = a[j];                                                 // la variable auxiliar tomara el valor del arreglo a[j], y el arreglo
                a[j] = a[j + 1];                                            // a[j] tomara el valor del arreglo a[j + 1], y por ultimo el valor de
                a[j + 1] = aux;                                             // a[j + 1] tomara el valor de la variable auxiliar.
            }
        }
    }

    //! IMPRIMIMOS LA LISTA YA ORDENADA.
    printf("\tLa lista ordenada es: ");
    /*
    El bucle recorre la lisra hasta el numero dado de los elementos requeridos e imprime el arreglo a[i]
    */
    for(int i = 0; i < ele; i++){
        printf("%i, ", a[i]);
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