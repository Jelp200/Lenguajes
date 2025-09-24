/*
** #########################################################################################
**      Archivo: 02 - 02 - ApuntadoresFunciones.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN
int suma(int a, int b){
    return a + b;
}

// FUYNCIÓN PRINCIPAL
int main(){
    //* Declara una función apuntador que concuerda con la función suma
    int (*fptr)(int, int);

    //* Asignando el apuntador a la función suma
    fptr = &suma;

    //* Llama a la función vía el apuntador
    printf("%d", fptr(10, 5));                  // 15
    
    return 0;
}