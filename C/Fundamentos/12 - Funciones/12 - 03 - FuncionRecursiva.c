/*
** #########################################################################################
**      Archivo: 12 - 03 - FuncionRecursiva.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Prototipo(s) de funcion(es)
long factorial(int n);

// Main Function
int main(){
    
    int n;
    
    printf("\tEscriba un numero: "); scanf("%i", &n);

    printf("\n\tEl factorial del numero es: %li", factorial(n));

    return 0;
}

// Funcion(es)
long factorial(int n){
    if(n <= 1){
        return 1;
    }else{
        return (n * factorial(n - 1));
    }
}