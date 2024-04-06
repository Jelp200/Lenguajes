/*
** #########################################################################################
**  Archivo         :   05 - UsuarioIngresado.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que visualize la siguiente
**                      informacion en consola.
**                          Usuario : [Usuario ingresado]
**                          Edad: [Edad ingresada]
**                          Escuela: [Escuela ingresada]
**                          Institucion: [Institucion ingresada]
** #########################################################################################
*/
// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// PROTOTIPO(S) DE FUNCION(ES)
void clear();
void fin();

// VARIABLES GLOBALES
signed char usr[30],
            edad[3],
            esc[80],
            inst[80];

// FUNCION PRINCIPAL
int main(){
    printf("\n\tDe el usuario: "); gets(usr);
    printf("\n\tDe la edad: "); gets(edad);
    printf("\n\tDe la escuela: "); gets(esc);
    printf("\n\tDe la institución: "); gets(inst);

    clear();

    printf("\n\tUsuario: %s", usr);
    printf("\n\tEdad: %s", edad);
    printf("\n\tEscuela: %s", esc);
    printf("\n\tInstitución: %s", inst);

    fin();

    return 0;
}

// FUNCIONES
void clear(){
    system("cls || clear");
}

void fin(){
    puts("\n\n\tFin del programa...");
    getchar();
}