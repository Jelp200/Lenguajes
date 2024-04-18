/*
** #########################################################################################
**      Archivo: 02 - Uniones.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

//DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// DEFINICIÓN DE LA UNIÓN
union Dato {
    int entero;
    float flotante;
    char caracter;
};

// DFINICIÓN DE LA ESTRUCTURA
struct Registro {
    char tipo;
    union Dato dato;
};

// FUNCION PRINCIPAL
int main() {
    // Declaración de un arreglo de estructuras Registro
    struct Registro registros[5];

    // Ingreso de datos para cada registro
    for (int i = 0; i < 5; ++i) {
        printf("Ingrese el tipo de dato para el registro %d (I para entero, F para flotante, C para caracter): ", i + 1);
        scanf(" %c", &registros[i].tipo);

        switch (registros[i].tipo) {
            case 'I':
                printf("Ingrese un numero entero: ");
                scanf("%d", &registros[i].dato.entero);
                break;
            case 'F':
                printf("Ingrese un numero flotante: ");
                scanf("%f", &registros[i].dato.flotante);
                break;
            case 'C':
                printf("Ingrese un caracter: ");
                scanf(" %c", &registros[i].dato.caracter);
                break;
            default:
                printf("Tipo de dato no válido\n");
                return 1;
        }
    }

    // Impresión de los datos de cada registro
    printf("\nDatos de los registros:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Registro %d:\n", i + 1);
        switch (registros[i].tipo) {
            case 'I':
                printf("Tipo: Entero, Valor: %d\n", registros[i].dato.entero);
                break;
            case 'F':
                printf("Tipo: Flotante, Valor: %.2f\n", registros[i].dato.flotante);
                break;
            case 'C':
                printf("Tipo: Caracter, Valor: %c\n", registros[i].dato.caracter);
                break;
        }
        printf("\n");
    }

    return 0;
}
