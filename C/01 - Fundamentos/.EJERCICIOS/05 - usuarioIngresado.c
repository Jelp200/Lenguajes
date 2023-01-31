/*
** #########################################################################################
**  Archivo         :   05 - usuarioIngresado.c
**  Proyecto        :   Mr.C (Ejercicios)
**  Herramienta(s)  :   Code::Blocks / Visual Studio Code
**  Compilador      :   C/C++ Compiler (Windows)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que visualize la siguiente
**                      informacion en consola.
**                          Usuario  : [Usuario ingresado]
**                          Edad: [Edad ingresada]
**                          Escuela: [Escuela ingresada]
**                          Institucion: [Institucion ingresada]
** #########################################################################################
*/

// Directivas de preprocesador.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Variables globales.
signed char usuario[30],
            edad[3],
            escuela[80],
            institucion[80];

// Funcion principal.
int main(void){

    printf("\tDe el su usuario: "); gets(usuario);
    printf("\n\tDe la edad: "); gets(edad);
    printf("\n\tDe la escuela: "); gets(escuela);
    printf("\n\tDe la institucion: "); gets(institucion);

    system("cls");

    printf("\tUsuario: %s", usuario);
    printf("\n\tEdad: %s", edad);
    printf("\n\tEscuela: %s", escuela);
    printf("\n\tInstitucion: %s\n\n", institucion);

    system("pause");

    return 0;
}
