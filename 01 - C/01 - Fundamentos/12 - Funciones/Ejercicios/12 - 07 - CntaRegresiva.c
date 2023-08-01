/*
** #########################################################################################
**      Archivo: 12 - 07 - CntaRegresiva.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**              Realizar un programa que implemente la recursividad en funciones y así este
**              pueda realizar una cuenta regresiva.
** #########################################################################################
*/

// Directivas de prepocesdor
#include <stdio.h>
#include <stdlib.h>

// Variabes globales
int n;

// Prototipo(s) de funcion(es)
void cntaRegresiva(int nActual);                                            // Declaramos una funcion de tipo void con parametros para poder pasar

// Main function
int main(){
    printf("\n\t\tDe el numero donde comenzara la cuenta: "); scanf("%i", &n);
    
    //! LLAMAMOS A LA FUNCION Y PASAMOS EL DATO PEDIDO POR EL USUARIO AL PARAMETRO
    cntaRegresiva(n);

    return EXIT_SUCCESS;
}

// Funcion(es)
void cntaRegresiva(int nActual){
    /* Si el dato proporcionado es < 0, termina el programa */
    if(nActual < 0)
        return;
    /* Si no, se visualizara el numero actual y se ejecutara de nuevo la funcion con un decremento */
    else{
        printf("\n\t\t%i", nActual);
        cntaRegresiva(nActual - 1);
    }
}

/*
    La función anterior es casí como tener:

void cntaRegresiva(int nActual){
    if(nActual <= 0)
        return;
    else{
        do{
            printf("\n\t\t%i", nActual);
            nActual--;
        }while(nActual != 0);
    }
}

    Podemos ver que en la funcion recursiva evitamos poner más lineas de código, esto se da gracias a que
    la misma funcion se llama y hace la operacion correspondiente hasta el limite del decremento. Mientras
    que en el ciclo do/while utilizamos un poco más de código y no llamamos a la misma función para realizar
    la operacion en cuestión. 
*/