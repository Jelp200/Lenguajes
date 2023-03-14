/*
** #########################################################################################
**      Archivo: 09 - 05 - SumaNumeros.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**         Realizar un programa que sume n números dados por el usuario.
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function.
int main(){
    
    int ele, n;
    int S = 0;

    printf("De cuantos elementos es su suma: ");  scanf("%i", &ele);

    for(int i = 0; i <= n; i++){
        printf("\nDe el %i elemento: ", i + 1); scanf("%i", &n);
        S += n;
    }

    printf("\nLa suma total es: %i ", S);

    return 0;
}