/*
** #########################################################################################
**      Archivo: 04 - 04 - 05 - isEmpty.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**      Notas:
**          Programa que permite visualizar el funcionamiento de la operación isEmpty en una
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
bool isEmpty(Pila *p);

//* FUNCIÓN PRINCIPAL
int main() {
    Pila p;
    inicializar(&p);

    if (isEmpty(&p)) {
        printf("La pila está vacía.\n");
    } else {
        printf("La pila no está vacía.\n");
    }

    // Agregar un elemento y verificar nuevamente
    p.datos[0] = 10;
    p.tope = 0;

    if (isEmpty(&p)) {
        printf("La pila está vacía.\n");
    } else {
        printf("La pila no está vacía.\n");
    }

    return 0;
}

//* FUNCIONES
// Inicializar la pila
void inicializar(Pila *p) {
    p->tope = -1;                   // -1 indica que la pila está vacía
}
// Verificar si la pila está vacía
bool isEmpty(Pila *p) {
    return p->tope == -1;
}