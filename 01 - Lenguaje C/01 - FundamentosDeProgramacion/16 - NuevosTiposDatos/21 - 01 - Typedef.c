/*
** #########################################################################################
**      Archivo: 21 - 01 - Typedef.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// DEFINICIÓN DE NUESTRO TIPO DE DATO
typedef struct {
    float real;
    float imaginario;
} NumeroComplejo;

// FUNCIÓN PRINCIPAL
int main() {
    NumeroComplejo z = {2.0, -3.0}; // Declaración de una variable de tipo NumeroComplejo
    printf("El número complejo es: %.2f + %.2fi\n", z.real, z.imaginario);
    return 0;
}