/*
** #########################################################################################
**      Archivo: 02 - 02 - PEYAMA.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// DEFINICIÓN DE ESTRUCTURA
struct Persona {
    char nombre[50];
    int edad;
};

// FUNCIÓN(ES)
// Función que imprime persona (recibe puntero a struct)
void imprimirPersona(struct Persona *ptr) {
    printf("Nombre: %s\n", ptr->nombre);
    printf("Edad: %d\n", ptr->edad);
}

// Función que modifica persona (demuestra paso por referencia)
void modificarPersona(struct Persona *ptr, const char *nuevoNombre, int nuevaEdad) {
    strcpy(ptr->nombre, nuevoNombre);  // Copia nuevo nombre
    ptr->edad = nuevaEdad;             // Cambia la edad
}

// Función que imprime un arreglo (recibe puntero a int)
void imprimirArreglo(int *arr, int n) {
    printf("Arreglo: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Función que modifica un arreglo (incrementa cada valor)
void modificarArreglo(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] += 10;   // Suma 10 a cada elemento
    }
}

// FUNCIÓN PRINCIPAL
int main() {
    //* --- Estructura ---
    struct Persona p1 = {"Jorge", 24};
    printf("Antes de modificar:\n");
    imprimirPersona(&p1);

    modificarPersona(&p1, "Ana", 30);
    printf("\nDespués de modificar:\n");
    imprimirPersona(&p1);

    //* --- Arreglo ---
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("\nAntes de modificar arreglo:\n");
    imprimirArreglo(arr, n);

    modificarArreglo(arr, n);
    printf("Después de modificar arreglo:\n");
    imprimirArreglo(arr, n);

    return EXIT_SUCCESS;
}