/*
** #########################################################################################
**      Archivo: 20 - 01 - Estructuras.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// DEFINICIÓN DE ESTRUCTURA
struct Componentes{
    char nombre[50];
    int cantidad;
    float precio;
};


// FUNCION PRINCIPAL
int main(){
    // Declaramos un arreglo de estructura de componentes
    struct Componentes componente[5];

    // Ingreso de datos para cada componente
    for(int i = 0; i < 5; i++){
        printf("Ingese el nombre del componente %i: ", i + 1); scanf("%s", &componente[i].nombre);
        printf("Ingese la cantidad en existencia del componente %i: ", i + 1); scanf("%i", &componente[i].cantidad);
        printf("Ingese el precio del componente %i: ", i + 1); scanf("%f", &componente[i].precio);
    }

    // Impresión de datos
    printf("\nDatos de los componentes:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Componente %i:\n", i + 1);
        printf("Nombre: %s\n", componente[i].nombre);
        printf("Cantidad: %i\n", componente[i].cantidad);
        printf("Precio: $%.2f\n", componente[i].precio);
        printf("\n");
    }

    return 0;
}