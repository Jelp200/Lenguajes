/*
** #########################################################################################
**  Archivo         :   21 - usuarioFnc.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Code::Blocks / Visual Studio Code
**  Compilador      :   C/C++ Compiler (Windows)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que visualize la siguiente
**                      informacion en consola a travez de diferentes funciones.
**                      [Usuario] [Edad] [Pais]
** #########################################################################################
*/

// Directivas de preprocesador.
#include <stdio.h>
#include <stdlib.h>

// Prototipo(s) de funcion(es).
void Usuario();
void Edad();
void Pais();

// Funcion principal.
int main(void){

    Usuario();
    Edad();
    Pais();

    return 0;
}

// Funcion(es);
void Usuario(){
    printf("\n\t[Jelp 200] ");
}

void Edad(){
    printf("[22] ");
}

void Pais(){
    printf("[Mexico]");
}