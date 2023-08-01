/*
** #########################################################################################
**      Archivo: 01 - 03 - BurbujaBinaria.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Variables globales
int n, ele, aux, dato, inf, sup, mitad;
char band = 'F';
int indice = -1;

// Main Function
int main(){

    puts("\n\t\t\tORDENACION POR BURBUJA Y BUSQUEDA BINARIA");

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
    El bucle recorre la lisra hasta el numero dado de los elementos requeridos e imprime el arreglo a[i].
    */
    for (int i = 0; i < ele; i++){
        printf("%i, ", a[i]);
    }

    wit();

    /*
    Pedimos al usuario un numero para verificar si este existe en la lista ya antes dada.
    */
    printf("\nEscribe un numero: "); scanf("%i",&dato);

    /*
    Inicializamos los valores para los limites inferior y superior siendo lo siguiente:
        Valor limite inferior igual a cero.
        Valor limite superior igual al numero de elementos dado por el usuario.
    */
    inf = 0;
    sup = ele;

    //! BUSQUEDA BINARIA
    while(inf <= sup){                                                      // Mientras el limite inferior sea menor o igual al limite superior se relizara el bucle.
        mitad = (inf + sup) / 2;                                            // El valor medio estara dado por la suma del limite inferior y superior sobre dos.
                                                                            // Recordemos que el valor medio nos permitira empezar a realizar las busquedas en sublistas.
        if(a[mitad] == dato){                                               // Si el arreglo en la posición que esta a la mitad es igual al dato que deseamos buscar.
            band = 'V';                                                     // Nuestra bandera se actualizara a 'V' y se rompe el bucle.
            break;
        }if(a[mitad] > dato){                                               // Si el arreglo en la posicion que esta a la mitad es mayor al dato que deseamos buscar.
            sup = mitad;                                                    // El valor del limite superior se convertira en el valor de la mitad.
            mitad = (inf + sup) / 2;                                        // Y ahora nuestra mitad se actualizara a la suma del limite inferior y el nuevo limite superior sobre dos.
        }if(a[mitad] < dato){                                               // Si el arreglo en la posicion que esta a la mitad es menor al dato que deseamos buscar.
            inf = mitad;                                                    // El valor del limite inferior se convertira en el valor de la mitad.
            mitad = (inf + sup) / 2;                                        // Y ahora nuestra mitad se actualizara a la suma del  nuevo limite inferior y el limite superior sobre dos.
        }
    }                                                                       // Así hasta que el arreglo en la posición que esta a la mitad es igual al dato que deseamos buscar.

    if(band == 'F'){                                                        // Ahora bien, si nuestra bandera es 'F' imprimiremos que el número no existe o no es parte de la lista
            printf("\tEl numero no existe o no es parte de la lista\n\n");
            sleep(3);
        }else if(band == 'V'){                                              // Pero si la bandera es 'V' daremos a conocer que el valor existe en la posición en la cual esta el valor
            printf("\tEl numero existe en la posicion %i\n\n", mitad);      // de la mitad.
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