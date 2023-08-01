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

// Variables globales
int a[10] = {5, 3, 4, 1, 2, 10, 9, 6, 7, 8};                        // Arreglo con datos desordenados
int i, j, aux, min, dato, mitad, inf, sup;
char band = 'F';

// Main Function
int main(){

    tab();

     //! IMPRIMIMOS LA LISTA DESORDENADA
    for(i = 0 ; i < 10 ; i++){
        printf("[%i] ",a[i]);
    }

    puts("\n\n\t");
    system("PAUSE");
    system("CLS");

    //! ORDENACION POR BURBUJA.

    for(i = 0; i < 10; i++){                                        // Recorremos la lista.
        min = i;                                                    // Lea damos un valor a nuestro limite inferior dado el valor de la variable 'i'.
        for(j = i + 1 ; j < 10 ; j++){                              // Recorremos los valores de nuestra lista.
            if(a[min] > a[j])                                       // Si el arreglo en la posición del valor minimo es mayor al arreglo a[j]
            min = j;                                                // El valor minimo tomara el valor de la variable 'j'.
        }                                                           // Realizamos los intercambios de los elementos desordenados.
        aux = a[i];                                                 // La variable auxiliar tomara el valor de a[i].
        a[i] = a[min];                                              // a[i] tomara el valor de a[min].
        a[min] = aux;                                               // La a[min] tomara el valor de la variable auxiliar.
    }

    tab();

    //! IMPRIMIMOS LA LISTA YA ORDENADA
    for(i = 0 ; i < 10 ; i++){
        printf("[%i] ",a[i]);
    }

    /*
    Pedimos al usuario un numero para verificar si este existe en la lista ya antes dada.
    */
    printf("\n\n\tDigite un numero: ");scanf("%i",&dato);

    //! BUSQUEDA BINARIA.

    /*
    Inicializamos los valores para los limites inferior y superior siendo lo siguiente:
        Valor limite inferior igual a cero.
        Valor limite superior igual a diez.
    */
    inf = 0;
    sup = 10;

    while(inf <= sup){                                                      // Mientras el limite inferior sea menor o igual al limite superior se relizara el bucle.
        mitad = (inf + sup) / 2;;                                           // El valor medio estara dado por la suma del limite inferior y superior sobre dos.

        if(dato > 10 || dato < 0)                                           // Si el dato sale de los limites establecidos el programa terminara.
        break;

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
    }

    if(band == 'F'){                                                        // Ahora bien, si nuestra bandera es 'F' imprimiremos que el número no existe o no es parte de la lista
            printf("\tEl numero no existe o no es parte de la lista\n\n");
            sleep(3);
        }else if(band == 'V'){                                              // Pero si la bandera es 'V' daremos a conocer que el valor existe en la posición en la cual esta el valor
            printf("\tEl numero existe en la posicion %i\n\n", mitad + 1);  // de la mitad.
            sleep(3);
        }
    getch();

    return 0;
}

void tab(){
    printf("\t");
}