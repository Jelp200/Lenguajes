/*
** #########################################################################################
**      Archivo: 04 - 05 - 01 - Enqueue.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**      Notas:
**          Programa que permite visualizar el funcionamiento de la operación enqueue en una
**          cola (Queue).
** #########################################################################################
*/

//* DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <stdbool.h>

//* DEFINICIONES
#define MAX_SIZE 5                  // Tamaño máximo de la cola

//* DECLARACIÓN DE ESTRUCTURAS
typedef struct {
    int datos[MAX_SIZE];            // Arreglo de elementos
    int frente;                     // Frente de la cola
    int final;                      // Final de la cola
} Cola;

//* PROTOTIPOS DE FUNCIONES
void inicializar(Cola *q);          // Inicializa la cola
bool isFull(Cola *q);               // Verifica si la cola está llena
void enqueue(Cola *q, int valor);    // Agrega un elemento a la cola

//* FUNCIÓN PRINCIPAL
int main() {
    Cola q;
    inicializar(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    return 0;
}

//* FUNCIONES
// Inicializa la cola
void inicializar(Cola *q) {
    q->frente = -1;
    q->final = -1;
}
// Verifica si la cola está llena
bool isFull(Cola *q) {
    return (q->final == MAX_SIZE - 1);
}
// Agrega un elemento a la cola
void enqueue(Cola *q, int valor) {
    if (isFull(q)) {
        printf("Error: La cola está llena (overflow).\n");
        return;
    }
    if (q->frente == -1) {
        q->frente = 0;
    }
    q->final++;
    q->datos[q->final] = valor;
    printf("Elemento %d agregado a la cola.\n", valor);
}