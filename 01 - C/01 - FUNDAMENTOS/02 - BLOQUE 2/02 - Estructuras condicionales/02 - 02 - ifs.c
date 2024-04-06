/*
** #########################################################################################
**      Archivo: 02 - 02 - ifs.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCION PRINCIPAL
int main(){
    int n = 0;

    printf("De un numero: "); scanf("%i", &n);

    if(n > 0 && n <= 10){
        printf("El numero es mayor a 0 y menor a 10");
    }
    if(n > 10 && n <= 20){
        printf("El numero es mayor a 10 y menor a 20");
    }
    if(n > 20 && n <= 30){
        printf("El numero es mayor a 20 y menor a 30");
    }
    
    return 0;
}