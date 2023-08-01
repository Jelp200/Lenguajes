/*
** #########################################################################################
**      Archivo: 09 - 01 - CalculadoraBasicaDeElectronica.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Realizar un programa que haga la suma de los numeros anteriores a un numero dado
**          por el usuario, ejemplo.
**
**          n = 10
**          S = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function.
int main(){

    int n;
    int S = 0, contador = 1;

    printf("De el numero hasta donde desea que sea la suma: "); scanf("%i", &n);

    while(contador <= n){
        S += contador;
        contador++;
    }

    printf("La suma de 1 hasta %i es: %i", n, S);

    return 0;
}