/*
** #########################################################################################
**      Archivo: 04 - 04 - 06 - isFull.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**      Notas:
**          Programa que permite visualizar el funcionamiento de la operación isFull en una
**          pila (stack).
** #########################################################################################
*/
//* DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <stdbool.h>

//* DEFINICIONES
#define MAX_SIZE 5                  // Tamaño máximo de la pila

//* ESTRUCTURAS
typedef struct{
    int items[MAX_SIZE];            // Elementos de la pila
    int tope;                       // Índice del elemento superior
} Pila;

//* PROTOTIPOS DE FUNCIONES
// Inicializar la pila
void inicializar(Pila *p);
// Verificar si la pila está vacía
bool isFull(Pila *p);

//* FUNCIÓN PRINCIPAL
int main() {
    Pila p;
    inicializar(&p);

    if (isFull(&p)) {
        printf("La pila está llena.\n");
    } else {
        printf("La pila no está llena.\n");
    }

    // Llenar la pila y verificar nuevamente
    for (int i = 0; i < MAX_SIZE; i++) {
        p.datos[i] = i + 1;
        p.tope = i;
    }

    if (isFull(&p)) {
        printf("La pila está llena.\n");
    } else {
        printf("La pila no está llena.\n");
    }

    return 0;
}

//* FUNCIONES
// Inicializar la pila
void inicializar(Pila *p) {
    p->tope = -1;                   // -1 indica que la pila está vacía
}
// Verificar si la pila está vacía
bool isFull(Pila *p) {
    return (p->tope == MAX_SIZE - 1);
}