/*
** #########################################################################################
**  Archivo         :   08 - OperadoresLogcos.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**              Calcular el numero menor de dos números con el operador ternario.
** #########################################################################################
*/
// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// PROTOTIPO(S) DE FUNCION(ES)
int menor(int n1, int n2);

// VARIABLES GLOBALES
int n1 = 0, n2 = 0;

// FUNCION PRINCIPAL
int main(){
    printf("De el primer numero: "); scanf("%i", &n1);
    printf("De el segundo numero: "); scanf("%i", &n2);
    menor(n1, n2);
    return 0;
}

// FUNCION(ES)
int menor(int n1, int n2){
    (n1 > n2) ? (printf("%i es mayor a %i", n1, n2)) : (printf("%i es mayor a %i", n2, n1));
}