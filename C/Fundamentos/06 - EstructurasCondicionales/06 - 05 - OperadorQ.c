/*
** #########################################################################################
**      Archivo: 06 - 05 -OperadorQ.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          (Condicion) ? Expresión 1 : Expresión 2;
**
**          Se puede ver de la siguiet manera.
**
**          (Condición) IF (Valida, ejecuta esté código) ELSE (Falsa, , ejecuta esté código);
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){
    int n;

    printf("De un número a evaluar: "); scanf("%i", &n);

    (n >= 0) ? (puts("El número es positivo...")) : (puts("El número es negativo..."));
    
    return 0;
}