/*
** #########################################################################################
**      Archivo: 03 - ApuntadorArreglo.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
**      Notas:
** #########################################################################################
*/

/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++ I N C L U D E S +++++++++++++++++++++++++++++++++++++ 
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
#include <stdio.h>

/* -----------------------------------------------------------------------------------------
---------------------------- V A R I A B L E S   G L O B A L E S ---------------------------
----------------------------------------------------------------------------------------- */
int arr1[4][5][2], var;
int *p;

/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++ P R O T O T I P O (S)   D E   F U N C I O N E S +++++++++++++++++++++
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
void pausa(){
    fflush(stdout);
    system("read -p '\n\nPresione enter para continuar...' t");       // Código en bash
}

/* ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||||||||||| F U N C I O N   P R I N C I P A L |||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| */
int main(){
    p = &arr1[0][0][0];     // Apuntador p apunta a la dirección de memoria de arr1[0][0][0]
    var = 1;

    // Recorremos el arreglo de 3 dimensiones
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            for (int k = 0; k < 2; k++){
                arr1[i][j][k] = var;
                var += 2;   // El arreglo aumenta su valor de  dos en dos hasta llenarse
            }
        }
    }

    // Realizamos operaciones con los apuntadores para visualizar los valores del arreglo
    // en la posición [0] + 4, [0] + 16 y [0] + 23.
    int a = *(p + 4);
    int b = *(p + 16);
    int c = *(p + 23);

    printf("Los valores son: %d, %d y %d", a, b, c);
    pausa();

    // Imprimimos los valores del arreglo
    for(int i = 0; i < 4; i++){                 // "for" para recorrer el plano
        for(int j = 0; j < 5; j++){             // "for" para recorrer la fila
            for(int k = 0; k < 2; k++)          // "for" para recorrer la columna
                printf("[%d]" , arr1[i][j][k]); // Imprimimos el valor del arreglo
            printf("\n");
        }
        printf("\n");
    }
    pausa();

    /* Recorremos el arreglo para modificar los valores de la siguiente manera:
        - Plano 0: Valores multiplos de 4.
        - Plano 1: Valores multiplos de 6.
        - Plano 2: Valores multiplos de 7.
        - Plano 3: Valores multiplos de 5.
    */
    p = &arr1[0][0][0];    // Apuntador p apunta a la dirección de memoria de arr1[0][0][0]

    for(int i = 0; i < 40; i++){
        if(i < 10)
            *(p + i) = 4 * (i + 1);
        if(i >= 10 && i < 20)
            *(p + i) = 6 * (i - 9);
        if(i >= 20 && i < 30)
            *(p + i) = 7 * (i - 19);
        if(i >= 30 && i < 40)
            *(p + i) = 5 * (i - 29);
    }

    // Imprimimos los nuevos valores del arreglo
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            for(int k = 0; k < 2; k++)
                printf("[%d]" , arr1[i][j][k]);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
