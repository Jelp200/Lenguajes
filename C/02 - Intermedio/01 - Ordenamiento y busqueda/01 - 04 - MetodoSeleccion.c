/*
** #########################################################################################
**      Archivo: 01 - 04 - MetodoSelección.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Variables globales
int n, indiceMenor, i, j;
int indice = -1;
double aux;

// Main Function
int main(){

    puts("\n\t\t\tORDENACION POR SELECCION");

    printf("\n\tDe el numero de elementos que tendra el arrelgo: "); scanf("%i", &n);
    int a[n];                                                             // Declaramos un arreglo con el numero de elementos dado por el usuario.

    clear();

    //! PEDIMOS LOS VALORES DE CADA ELEMENTO.
    /*
    Para una variable 'i' que inicializa en 0, siendo 'i' menor al numero dado de los elementos requeridos
    y esta variable 'i' irá en incremento (postincremento).
    */
    for(int i = 0; i < n; i++){
        printf("\n\tDe el %i dato: ", i + 1); scanf("%i", &a[i]);
    }

    clear();

    //! SE IMPRIMEN LOS VALORES DE LOS ARREGLOS.
    while (++indice < n){
        printf("\n\tEl valor del array[%i] es: %i", indice, a[indice]);
    }

    wit();

    //! ORDENACION POR SELECCION.
    for(i = 0; i < n; i++){                                             // Desde i = 0; hasta i menor al numero de elementos dados por el usuario; incrementando i.
        indiceMenor = i;                                                // El indice menor tomara el valor de i.
        for(j = i + 1; j < n; j++){                                     // Desde j = 0; hasta j menor al numero de elementos dados por el usuario; incrementando j.
            if (a[j] < a[indiceMenor])                                  // Si el valor del arreglo en la posicón a[j] es menor al valor del arreglo en la posición a[indiceMenor].
                indiceMenor = j;                                        // El indice menor obtendra el valor de j.
        }
        //! REALIZAMOS EL CAMBIO DE VARIABLES.
        aux = a[i];                                                     // La variable auxiliar tomara el valor del arreglo en la posición a[i],
        a[i] = a[indiceMenor];                                          // a[i] tomara el valor del arreglo a[indiceMenor].
        a[indiceMenor] = aux;                                           // a[indiceMenor] tomara el valor de la variable auxiliar.
    }

    //! IMPRIMIMOS LA LISTA YA ORDENADA.
    printf("\tLista ordenada ascendentemente es: ");
    /*
    El bucle recorre la lisra hasta el numero dado de los elementos requeridos e imprime el arreglo a[i]
    */
    for(i = 0; i < n; i++){
        printf("%i, ", a[i]);
    }

    printf("\n\tLista ordenada descendentemente es: ");
    for(i = n; i >= 0; i--){
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