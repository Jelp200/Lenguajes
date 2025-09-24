/*
** #########################################################################################
**      Archivo: 04 - 04 - 02 - Push.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**      Notas:
**          Programa que permite visualizar el funcionamiento de la operación push en una
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
// Verificar si la pila está llena
bool isFull(Pila *p);
// Operación push: Insertar un elemento en la pila
void push(Pila *p, int valor);

//* FUNCIÓN PRINCIPAL
int main() {
    Pila p;
    inicializar(&p);

    int valor;

    // Insertar elementos en la pila
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("Ingrese el valor a insertar: ");
        scanf("%d", &valor);
        push(&p, valor);
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
    return (p->tope == -1);
}
// Verificar si la pila está llena
bool isFull(Pila *p) {
    return (p->tope == MAX_SIZE - 1);
}
// Operación push: Insertar un elemento en la pila
void push(Pila *p, int valor) {
    if (isFull(p)) {
        printf("Error: La pila está llena (overflow).\n");
        return;
    }
    p->tope++;
    p->datos[p->tope] = valor;
    printf("Elemento %d agregado a la pila.\n", valor);
}