/*
** #########################################################################################
**      Archivo: 08 - 01 - PostIncremento.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Variable++
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){
    int a = 0;
    int b = a++;

    // 'a' se hace 1 y 'b' se hace 0 (toma el valor inicial de a).
    printf("El valor de a es \'%i\' y el valor de b es \'%i\'.", a, b);

    return 0;
}