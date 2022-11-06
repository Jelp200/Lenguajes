/***********************************************************************
**
**  Archivo         :   15 - cuentaRegresiva.c
**  Proyecto        :   Mr.C (Ejercicios)
**  Herramienta(s)  :   Code::Blocks / Visual Studio Code
**  Compilador      :   C/C++ Compiler (Windows)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que realice una cuenta
**                      regresiva desde el 100 hasta el 0.
**
***********************************************************************/

// Directivas de preprocesador.
#include <stdio.h>

// Funcion principal.
int main(){
    int contador = 0;

    contador = 100;

    while (contador >= 0){
        system("cls");

        printf("\n\t%i\n\n", contador);
        contador = contador - 1;

        system("PAUSE");
    }
    return 0;
}
