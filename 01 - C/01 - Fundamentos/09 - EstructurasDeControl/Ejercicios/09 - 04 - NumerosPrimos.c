/*
** #########################################################################################
**      Archivo: 09 - 04 - Numeros primos.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Hacer un programa que imprima si el numero dado es un numero prmo o no.
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function.
int main(){
    int n, cont = 0;

    printf("De un numero: "); scanf("%i", &n);
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cont++;
        }
    }

    if(cont > 2)
        printf("El numero %i no es primo\n",n);
    else
        printf("El numero %i es primo\n",n);

    return 0;
}