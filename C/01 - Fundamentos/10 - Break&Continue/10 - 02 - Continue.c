/*
** #########################################################################################
**      Archivo: 10 - 02 - Continue.c
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
    puts("\t\t\tUSO DEL CONTINUE");
    printf("De el número a ignorar: "); scanf("%i", &n);

    for (i = 0; i <= 20; i++){
        if (i == n){
            continue;
        }
        printf("%i.\n", i);
    }

    return 0;
}

/*
FUNCIONAMIENTO DEL PROGRAMA

Podemos ver que "continue" nos sirve para seguir el programa en un punto establecido por el programador o usuario.
*/