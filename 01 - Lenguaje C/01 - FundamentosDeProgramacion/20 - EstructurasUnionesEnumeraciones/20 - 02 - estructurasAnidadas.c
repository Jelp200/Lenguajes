/*
** #########################################################################################
**      Archivo: 20 - 02 - estructurasAnidadas.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// DEFINICIÓN DE ESTRUCTURA(S)
struct Fecha {
    int dia;
    int mes;
    int anho;
};

struct Persona {
    char nombre[50];
    struct Fecha fechaNacimiento;  // Estructura anidada
};

// FUNCION PRINCIPAL
int main(){
    // Crear una variable de tipo `Persona`
    struct Persona persona1;

    // Asignar valores a la persona y su fecha de nacimiento
    persona1.fechaNacimiento.dia = 16;
    persona1.fechaNacimiento.mes = 10;
    persona1.fechaNacimiento.anho = 2000;

    printf("Fecha de nacimiento: %d/%d/%d\n", persona1.fechaNacimiento.dia, persona1.fechaNacimiento.mes, persona1.fechaNacimiento.anho);

    return 0;
}