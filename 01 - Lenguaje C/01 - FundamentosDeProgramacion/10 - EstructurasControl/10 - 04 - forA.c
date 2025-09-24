/*
** #########################################################################################
**      Archivo: 10 - 04 - forA.md
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(void){
    int filas = 10;
    int columnas = 10;

    // Bucle externo para las filas
    for (int i = 1; i <= filas; i++) {
        // Bucle interno para las columnas
        for (int j = 1; j <= columnas; j++) {
            printf("%4d", i * j); // Multiplica el valor de la fila por el de la columna
        }
        printf("\n"); // Nueva línea después de cada fila
    }

    return 0;
}