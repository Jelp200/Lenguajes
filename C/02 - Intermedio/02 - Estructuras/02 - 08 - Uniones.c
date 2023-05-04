/*
** #########################################################################################
**      Archivo: 02 - 08 - Uniones.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de preprocesador
#include <stdio.h>
#include <string.h>

// Union(es)
union datos{
    int entero;
    float flotante;
    char cadena[20]
};

// Main function
int main(){
    union datos misDatos;

    misDatos.entero = 10;
    printf("El valor de datos.entero es: %d", misDatos.entero);

    misDatos.flotante = 3.1416;
    printf("\nEl valor de datos.flotante es: %f", misDatos.flotante);

    strcpy(misDatos.cadena, "IPN ESIME Z");
    printf("\nEl valor de datos.cadena es: %s", misDatos.cadena);
    return 0;
}