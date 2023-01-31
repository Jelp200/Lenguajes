/*
** #########################################################################################
**      Archivo: 10 - 01 - Break.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Variables globales
int n, i = 0;

// Main Function
int main(){

    puts("\t\t\tUSO DEL BREAK");
    printf("De el número donde se rompera la cuenta: "); scanf("%i", &n);
    for (i = 0; i < 100; i++){
        if (i == n){
            break;
        }
        printf("%i.\n", i);
    }
    

    return 0;
}

/*
FUNCIONAMIENTO DEL PROGRAMA

"break" nos sirve para romper el programa en un punto establecido dentro del programa.
*/