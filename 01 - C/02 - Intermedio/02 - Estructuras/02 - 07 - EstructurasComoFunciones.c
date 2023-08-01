/*
** #########################################################################################
**      Archivo: 02 - 07 - EstructurasComoFunciones.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de preprocesador
#include <stdio.h>

// Estructura(s)
struct infoPersona{
    char nombre[20];
    char calle[30];
    char ciudad[25];
    char estado[25];
    char cp[5];
};

typedef struct infoPersona infoPersona;

// Prototipos de funciones
void inPersona(infoPersona* pntrPersona);
void verInfo(infoPersona Persona);

// Main function
int main(){
    infoPersona regresarData;

    //! Pasa por referencia la variable.
    inPersona(&regresarData);

    //! Pasa por valor.
    verInfo(regresarData);
    printf("\nPulsa cualquier caracter para continuar..."); getchar();
}

// Funcion(es)
void inPersona(infoPersona* pntrPersona){
    puts("\nDatos de entrada de la persona.\n");
    //! Se utiliza el operador '->' para acceder a los miembros.
    printf("\tNombre: "); gets(pntrPersona -> nombre);
    printf("\tCalle: "); gets(pntrPersona -> calle);
    printf("\tCiudad: "); gets(pntrPersona -> ciudad);
    printf("\tEstado: "); gets(pntrPersona -> estado);
    printf("\tC.P: "); gets(pntrPersona -> cp);
}

void verInfo(infoPersona Persona){
    puts("\nDatos de entrada de la persona.\n");
    //! Se utiliza el operador '->' para acceder a los miembros.
    puts(Persona.nombre);
    puts(Persona.calle);
    puts(Persona.ciudad);
    puts(Persona.estado);
    puts(Persona.cp);
}