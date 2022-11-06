/***********************************************************************
**
**  Archivo         :   19 - ACII.c
**  Proyecto        :   Mr.C (Ejercicios)
**  Herramienta(s)  :   Code::Blocks / Visual Studio Code
**  Compilador      :   C/C++ Compiler (Windows)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que imprima el código ASCII.
**
***********************************************************************/

// Directivas de preprocesador.
#include <stdio.h>

// Funcion principal.
int main(){

    for(int i = 0; i <= 254; i++){
        printf("%c\n", i);
    }

    return 0;
}
