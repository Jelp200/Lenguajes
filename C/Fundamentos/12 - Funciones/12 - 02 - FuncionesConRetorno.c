/*
** #########################################################################################
**      Archivo: 12 - 02 - FuncionesConRetorno.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Estructura de una función sin retorno:
**
**          tipoDato nombreFuncion(parametros){
**              ...
**              Código de la función (Intrucciones);
**              ...
**              return expresion;
**          }
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Prototipo(s) de funcion(es)
int SUMAR(int n1, int n2);

// Variables globales
int a, b;

// Main Function
int main(){
    
    printf("De el primer numero: "); scanf("%i", &a);
    printf("De el segundo numero: "); scanf("%i", &b);

    printf("La suma de %i y % i es: %i", a, b, SUMAR(a, b));
    
    return 0;
}

// Funcion(es)
int SUMAR(int n1, int n2){
    int S = 0;
    S = n1 + n2;

    return S;
}