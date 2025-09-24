/*
** #########################################################################################
**      Archivo: 04 - 05 - 05 - isEmpty.c
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
// Verificar si la cola está vacía
bool isEmpty(Cola *q) {
    return (q->frente == -1 || q->frente > q->final);
}

//* FUNCIÓN PRINCIPAL
int main() {
    Cola q;
    inicializar(&q);

    if (isEmpty(&q)) {
        printf("La cola está vacía.\n");
    } else {
        printf("La cola no está vacía.\n");
    }

    // Agregar un elemento y verificar nuevamente
    q.datos[0] = 10;
    q.frente = 0;
    q.final = 0;

    if (isEmpty(&q)) {
        printf("La cola está vacía.\n");
    } else {
        printf("La cola no está vacía.\n");
    }

    return 0;
}