/*
** #########################################################################################
**      Archivo: 04 - 05 - 06 - isFull.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**      Notas:
**          Programa que permite visualizar el funcionamiento de la operación isEmpty
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
// Verificar si la cola está lleno
bool isFull(Cola *q) {
    return (q->final == MAX_SIZE - 1);
}

//* FUNCIÓN PRINCIPAL
int main() {
    Cola q;
    inicializar(&q);

    if (isFull(&q)) {
        printf("La cola está llena.\n");
    } else {
        printf("La cola no está llena.\n");
    }

    // Llenar la cola y verificar nuevamente
    for (int i = 0; i < MAX_SIZE; i++) {
        q.datos[i] = i + 1;
        q.final = i;
    }
    q.frente = 0;

    if (isFull(&q)) {
        printf("La cola está llena.\n");
    } else {
        printf("La cola no está llena.\n");
    }

    return 0;
}