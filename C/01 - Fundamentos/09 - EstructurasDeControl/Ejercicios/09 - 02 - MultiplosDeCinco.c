/*
** #########################################################################################
**      Archivo: 09 - 02 - MultiplosDeCinco.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Hacer un programa que imprima los multiplos de 5 de 1 hasta n.
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function.
int main(){

    int n;
    int M = 0, contador = 1;

    printf("De el numero hasta donde desea que se visualicen los multiplos: "); scanf("%i", &n);

    while(contador <= n){
        if((contador % 5) == 0){
            printf("%i.\n", contador);
        }
        contador++;
    }
    return 0;
}