/*
** #########################################################################################
**      Archivo: 01 - 06 - MetodoQuicksort.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

//! REALIZAR EL CÓDIGO CORRESPONDIENTE.

// Directivas de prerpocesador
#include <stdio.h>

// Variables globales
int n, i, j, ;
int indice = -1;
double aux;

// Main Function
int main(){

    puts("\n\t\t\tORDENACION RAPIDA");

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

    //! ORDENACION POR INSERCION.
    for(i = 0; i < n; i++){                                                 // Desde i = 0; hasta i menor al numero de elementos dados por el usuario; Incrementa i.
        j = i;                                                              // La posicion 'j' tendra el valor de i.
        aux = a[i];                                                         // La variable auxuliar tomara el valor del arreglo en la posicion 'i' a[i].
        //! LOCALIZACION DEL PUNTO DE INSERCION EXPLORANDO HACIA ABAJO
        while(j > 0 && aux < a[j - 1]){                                     // Vamos a realizar el bloque mientras la posicion sea mayor a 0, y el arreglo a[posicion - 1].
            //! DESPLAZAMOS LOS ELEMENTOS HACIA ARRIBA PARA HACER ESPACIO
            a[j] = a[j - 1];                                                // a[posicion] tomara el valor de a[posicion - 1].
            j--;                                                            // La posicion se decrementa
        }
        a[j] = aux;                                                         // Al salir del ciclo while el arreglo a[posicion] tendra el valor de la variable auxiliar.
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