/*
** #########################################################################################
**  Archivo         :   11 - mayorEdad.c
**  Proyecto        :   Mr.C (Ejercicios)
**  Herramienta(s)  :   Code::Blocks / Visual Studio Code
**  Compilador      :   C/C++ Compiler (Windows)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que de acceso a un mayor
**                      de edad.
** #########################################################################################
*/


// Directivas de preprocesador.
#include <stdio.h>

// Defines.
#define EDAD 18

// Funcion principal.
int main(void){

    int edadIn;

    printf("\n\tDe su edad: "); scanf("%i", &edadIn);

    (edadIn >= EDAD) ? printf("\n\tVienvenido a caliente.mx") : printf("\n\tNo eres mayor de 18 a�os");

    return 0;
}
