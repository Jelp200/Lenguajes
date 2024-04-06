/*
** #########################################################################################
**      Archivo: 01 - 03 - funcionesRecursivas.md
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// PROTOTIPOS DE FUNCIONES
long Factorial(int n);

// FUNCIÓN PRINCIPAL
int main(void){
    int n;
    
    printf("\tEscriba un numero: "); scanf("%i", &n);

    for (int i = 0; i <= n; i++){
        printf("%li\n", Factorial(i));
    }

    return 0;
}

// FUNCIONES
long Factorial(int n){
    if(n <= 1){
        return 1;
    }else{
        return (n * Factorial(n - 1));
    }
}