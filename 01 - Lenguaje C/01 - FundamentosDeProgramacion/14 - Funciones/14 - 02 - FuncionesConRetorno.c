/*
** #########################################################################################
**      Archivo: 14 - 02 - FuncionesConRetorno.md
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// PROTOTIPO(S) DE FUNCION(ES)
int Sumar(int n1, int n2);

// FUNCIÓN PRINCIPAL
int main(){
    int a, b;
    printf("De el 1er numero: "); scanf("%i", &a);
    printf("De el 2do numero: "); scanf("%i", &b);
    printf("La suma de %i y %i es: %i", a, b, Sumar(a, b));
    return 0;
}
// FUNCION(ES)
int Sumar(int n1, int n2){
    int Suma = 0;
    Suma = n1 + n2;
    return Suma;
}