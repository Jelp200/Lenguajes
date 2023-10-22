/*
** #########################################################################################
**  Archivo: 01 - 32 - Factorial.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**              Realizar un programa que implemente la recursividad en funciones y así
**              calcule el factorial de un numero dado.
** #########################################################################################
*/

// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// VARIABLES GLOBALES
int n;

// PROTOTIPO(S) DE FUNCION(ES)
long Factorial(int n);                                            // Declaramos una funcion de tipo long con parametros para poder pasar

// FUNCION PRINCIPAL
int main(){
    // Pedimos al usuario el valor que pasara a la funcion
    printf("\n\t\tDe el numero al cual le desea sacar factorial: "); scanf("%i", &n);
    
    printf("\n\t\tEl factorial de %i es: %li", n, Factorial(n));

    printf("\n\n\t\tY sus elementos son:");
    // Realizamos un bucle el cual mostrara las operaciones realizadas en cada ciclo
    for(int i = 1; i <= n; i++)
        //! LLAMAMOS A LA FUNCION Y PASAMOS EL CONTADOR PARA ASI VISUALIZAR EL PROCESO HASTA EL DATO
        //! EL CUAL FUE DADO POR EL USUARIO.
        printf("\n\t\t\tFactorial de %i: %li", i, Factorial(i));

    return EXIT_SUCCESS;
}

// FUNCION(ES)
long Factorial(int n){
    /* Si el numero dado es menor o igual a 1 retornamos 1 */
    if(n <= 1)
        return 1;
    /* Sino, retornamos el valor del numero dado por la funcion en decremento */
    else
        return (n * Factorial(n - 1));
}