/*
** #########################################################################################
**      Archivo: 04 - 05 - 07 - QueueComplete.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**      Notas:
**          Programa que permite visualizar el funcionamiento de todas las operaciones en
**          una cola.
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
// Inicializar cola
void inicializar(Cola *cola) {
    cola->frente = -1;
    cola->final = -1;
}
// Verificar si la cola está vacía
bool estaVacia(Cola *cola) {
    return (cola->frente == -1 || cola->frente == cola->final + 1);
}
// Operación enqueue: Insertar un elemento al final de la cola
void enqueue(Cola *q, int valor) {
    if (isFull(q)) {
        printf("Error: La cola está llena (overflow).\n");
        return;
    }
    if (isEmpty(q)) {
        q->frente = 0; // Inicializar el frente si la cola está vacía
    }
    q->final++;
    q->datos[q->final] = valor;
    printf("Elemento %d agregado a la cola.\n", valor);
}
// Operación dequeue: Eliminar y devolver el elemento al frente de la cola
int dequeue(Cola *q) {
    if (isEmpty(q)) {
        printf("Error: La cola está vacía (underflow).\n");
        return -1; // Valor de error
    }
    int valor = q->datos[q->frente];
    q->frente++;
    if (q->frente > q->final) {
        // Reiniciar la cola si está vacía después de dequeue
        q->frente = q->final = -1;
    }
    printf("Elemento %d eliminado de la cola.\n", valor);
    return valor;
}
// Operación peek: Devolver el elemento al frente sin eliminarlo
int peek(Cola *q) {
    if (isEmpty(q)) {
        printf("Error: La cola está vacía.\n");
        return -1; // Valor de error
    }
    return q->datos[q->frente];
}
// Operación tamaño: Devolver el número de elementos en la cola
int tamaño(Cola *q) {
    if (isEmpty(q)) {
        return 0;
    }
    return (q->final - q->frente + 1);
}
// Mostrar el estado actual de la cola
void mostrarCola(Cola *q) {
    if (isEmpty(q)) {
        printf("La cola está vacía.\n");
        return;
    }
    printf("Contenido de la cola (desde el frente): ");
    for (int i = q->frente; i <= q->final; i++) {
        printf("%d ", q->datos[i]);
    }
    printf("\n");
}

//* FUNCIÓN PRINCIPAL
int main() {
    Cola q;
    inicializar(&q);

    int opcion, valor;

    do {
        printf("\n--- Menú de Operaciones ---\n");
        printf("1. Enqueue (Insertar)\n");
        printf("2. Dequeue (Eliminar)\n");
        printf("3. Peek (Ver frente)\n");
        printf("4. Verificar si está vacía\n");
        printf("5. Verificar si está llena\n");
        printf("6. Tamaño de la cola\n");
        printf("7. Mostrar cola\n");
        printf("8. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese el valor a insertar: ");
                scanf("%d", &valor);
                enqueue(&q, valor);
                break;
            case 2:
                dequeue(&q);
                break;
            case 3:
                valor = peek(&q);
                if (valor != -1) {
                    printf("Elemento al frente: %d\n", valor);
                }
                break;
            case 4:
                if (isEmpty(&q)) {
                    printf("La cola está vacía.\n");
                } else {
                    printf("La cola no está vacía.\n");
                }
                break;
            case 5:
                if (isFull(&q)) {
                    printf("La cola está llena.\n");
                } else {
                    printf("La cola no está llena.\n");
                }
                break;
            case 6:
                printf("Tamaño de la cola: %d\n", tamaño(&q));
                break;
            case 7:
                mostrarCola(&q);
                break;
            case 8:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción no válida.\n");
        }
    } while (opcion != 8);

    return 0;
}