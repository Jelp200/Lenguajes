/*
** #########################################################################################
**      Archivo: 04 - 05 - 03 - PeekFront.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**      Notas:
**          Programa que permite visualizar el funcionamiento de la operación Peek o Front
**          en una cola (Queue).
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

//* FUNCIONES
// Inicializar la cola
void inicializar(Cola *q) {
    q->frente = -1;
    q->final = -1;
}
// Verificar si la cola está vacía
bool isEmpty(Cola *q) {
    return (q->frente == -1 || q->frente > q->final);
}
// Peek o Front
int peek(Cola *q) {
    if (isEmpty(q)) {
        printf("Error: La cola está vacía.\n");
        return -1;
    }
    return q->datos[q->frente];
}

//* FUNCIÓN PRINCIPAL
int main() {
    Cola q;
    inicializar(&q);

    // Llenar la cola para probar peek
    q.datos[0] = 10;
    q.datos[1] = 20;
    q.datos[2] = 30;
    q.frente = 0;
    q.final = 2;

    printf("Elemento al frente: %d\n", peek(&q));

    return 0;
}