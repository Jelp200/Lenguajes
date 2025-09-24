/*
** #########################################################################################
**      Archivo: 04 - 05 - 02 - Dequeue.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**      Notas:
**          Programa que permite visualizar el funcionamiento de la operación dequeue en una
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
bool isEmpty(Cola *q);              // Verifica si la cola está vacía
void dequeue(Cola *q);              // Agrega un elemento a la cola

//* FUNCIÓN PRINCIPAL
int main() {
    Cola q;
    inicializar(&q);

    // Llenar la cola para probar dequeue
    q.datos[0] = 10;
    q.datos[1] = 20;
    q.datos[2] = 30;
    q.frente = 0;
    q.final = 2;

    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q); // Intentar eliminar de una cola vacía

    return 0;
}

//* FUNCIONES
// Inicializa la cola
void inicializar(Cola *q) {
    q->frente = -1;
    q->final = -1;
}
// Verifica si la cola está vacía
bool isEmpty(Cola *q) {
    return (q->frente == -1 || q->frente > q->final);
}
// Elimina un elemento de la cola
void dequeue(Cola *q) {
    if (isEmpty(q)) {
        printf("Error: La cola está vacía (underflow).\n");
        return -1;
    }
    int valor = q->datos[q->frente];
    q->frente++;
    printf("Elemento %d eliminado de la cola.\n", valor);
    return valor;
}