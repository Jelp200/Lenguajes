/*
** #########################################################################################
**      Archivo: 12 - 09 - Fibonacci.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**              Realizar un programa que implemente la recursividad en funciones y así
**              calcular la serie de fibonacci.
**
**              SF = 1 1 2 3 5 8 ...
** #########################################################################################
*/

// Directivas de prepocesdor
#include <stdio.h>
#include <stdlib.h>

// Variabes globales
int n;

// Prototipo(s) de funcion(es)
int Finobacci(int n);                                            // Declaramos una funcion de tipo int con parametros para poder pasar

// Main function
int main(){
    printf("\n\t\tDe el numero hasta donde desea la serie de Finobacci: "); scanf("%i", &n);
    
    for(int i = 1; i <= n; i++)
        //! LLAMAMOS A LA FUNCION Y PASAMOS EL CONTADOR PARA ASI VISUALIZAR EL PROCESO HASTA EL DATO
        //! EL CUAL FUE DADO POR EL USUARIO.
        printf("%d ", Finobacci(i));

    return EXIT_SUCCESS;
}

// Funcion(es)
int Finobacci(int n){
    /* Si el numero que se paso es igual a 1 o 0 */
    if(n == 1 || n == 0)
        return 1;
    else
        return (Finobacci(n - 1) + Finobacci(n - 2));
}