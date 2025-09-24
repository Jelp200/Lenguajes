/*
** #########################################################################################
**      Archivo: 04 - 04 - 04 - Top.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**      Notas:
**          Programa que permite visualizar el funcionamiento de la operación top en una
**          pila (stack).
** #########################################################################################
*/
//* DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <stdbool.h>

//* DEFINICIONES
#define MAX_SIZE 10                 // Tamaño máximo de la pila

//* ESTRUCTURAS
// Estructura de la pila
typedef struct {
    int datos[MAX_SIZE];
    int tope;                       // Índice del elemento en la cima
} Pila;

//* PROTOTIPOS DE FUNCIONES
// Inicializar la pila
void inicializar(Pila *p);
// Verificar si la pila está vacía
bool isEmpty(Pila *p);
// Operación push: Insertar un elemento en la pila
void top(Pila *p);

//* FUNCIÓN PRINCIPAL
int main() {
    Pila p;
    inicializar(&p);

    // Llenar la pila para probar top.
    p.datos[0] = 1;
    p.datos[1] = 2;
    p.datos[2] = 3;
    p.tope = 2;

    // Mostrar el elemento en la cima de la pila
    top(&p);

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
// Operación top: Mostrar el elemento en la cima de la pila
void top(Pila *p) {
    if (isEmpty(p)) {
        printf("La pila está vacía.\n");
    } else {
        printf("Elemento en la cima: %d\n", p->datos[p->tope]);
    }
}