/*
** ##########################################################################################
**  Archivo: 01 - 40 - Duplicados.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**              Realizar un programa que elimine los elementos duplicados en un arreglo,
**              dejando solo una instancia de cada valor único.
** ##########################################################################################
*/

// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>

// PROTOTIPO(S) DE FUNCION(ES)
void eliminarDuplicados(int arreglo[], int *longitud) {
    int i, j, k;
    for (i = 0; i < *longitud; i++) {
        for (j = i + 1; j < *longitud;) {
            if (arreglo[j] == arreglo[i]) {
                for (k = j; k < *longitud; k++) {
                    arreglo[k] = arreglo[k + 1];
                }
                (*longitud)--;
            } else {
                j++;
            }
        }
    }
}

// FUNCION PRINCIPAL
int main() {
    int arreglo[] = {1, 2, 2, 3, 4, 4, 5};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);
    eliminarDuplicados(arreglo, &longitud);
    printf("Arreglo sin duplicados: ");
    for (int i = 0; i < longitud; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
    return 0;
}