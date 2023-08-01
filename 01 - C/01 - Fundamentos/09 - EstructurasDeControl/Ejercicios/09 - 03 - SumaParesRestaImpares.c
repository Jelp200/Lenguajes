/*
** #########################################################################################
**      Archivo: 09 - 03 - SumaParesRestaImpares.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Hacer un programa que realice la suma y resta de los numeros subsecuentes a un
**          numero dado por el usuario, ejemplo.
**
**          n = 10
**          S = 1 - 2 + 3 - 4 + 5 - 6 + 7 - 8 + 9 - 10
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Funcion principal
int main (){

    int N = 0, SP = 0, SIP = 0, SG = 0;
    int n, contador = 1;

    printf("Hasta que numero desea que sea la suma: "); scanf("%i", &n);

    while(contador <= n){
        if(contador % 2 == 0){
            N = contador * (-1);
            SP += N;
        }else
            SIP += contador;
        contador++;
    }

    SG = SP + SIP;

    printf("La suma es: %i", SG);

    return 0;
}