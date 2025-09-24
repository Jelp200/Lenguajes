/*
** #########################################################################################
**      Archivo: 04 - 04 - 01 - StackComplete.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**      Notas:
**          Programa que incorpora todas las operaciones básicas de una pila (stack).
** #########################################################################################
*/

//* DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//* DEFINICIONES
#define MAX_SIZE 5              // Tamaño máximo de la pila

//* ESTRUCTURAS
// Estructura de la pila
typedef struct {
    int datos[MAX_SIZE];
    int tope;                   // Índice del elemento en la cima
} Pila;

//* FUNCIONES
// Inicializar la pila
void inicializar(Pila *p) {
    p->tope = -1;               // -1 indica que la pila está vacía
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
        printf("\tError: La pila está llena (overflow).\n");
        return;
    }
    p->tope++;
    p->datos[p->tope] = valor;
    printf("\tElemento %d agregado a la pila.\n", valor);
}
// Operación pop: Eliminar y devolver el elemento en la cima
int pop(Pila *p) {
    if (isEmpty(p)) {
        printf("\tError: La pila está vacía (underflow).\n");
        return -1;              // Valor de error
    }
    int valor = p->datos[p->tope];
    p->tope--;
    printf("\tElemento %d eliminado de la pila.\n", valor);
    return valor;
}
// Operación top: Devolver el elemento en la cima sin eliminarlo
int top(Pila *p) {
    if (isEmpty(p)) {
        printf("\tError: La pila está vacía.\n");
        return -1;              // Valor de error
    }
    return p->datos[p->tope];
}
// Mostrar el estado actual de la pila
void mostrarPila(Pila *p) {
    if (isEmpty(p)) {
        printf("\tLa pila esta vacía.\n");
        return;
    }
    printf("\tContenido de la pila (desde la cima): ");
    for (int i = p->tope; i >= 0; i--) {
        printf("%d ", p->datos[i]);
    }
    printf("\n");
}

//* FUNCIÓN PRINCIPAL
int main() {
    Pila p;
    inicializar(&p);

    int opcion, valor;

    do {
        system("cls");
        puts("\t\t--- Meno de Operaciones ---");
        printf("\t1. Push (Insertar)\n");
        printf("\t2. Pop (Eliminar)\n");
        printf("\t3. Top (Ver cima)\n");
        printf("\t4. Verificar si está vacía\n");
        printf("\t5. Verificar si está llena\n");
        printf("\t6. Mostrar pila\n");
        printf("\t7. Salir\n");
        printf("\tSeleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("\tIngrese el valor a insertar: ");
                scanf("%d", &valor);
                push(&p, valor);
                system("pause");
                break;
            case 2:
                pop(&p);
                system("pause");
                break;
            case 3:
                valor = top(&p);
                if (valor != -1) {
                    printf("\tElemento en la cima: %d\n", valor);
                    system("pause");
                }
                break;
            case 4:
                if (isEmpty(&p)) {
                    printf("\tLa pila está vacía.\n");
                    system("pause");
                } else {
                    printf("\tLa pila no está vacía.\n");
                    system("pause");
                }
                break;
            case 5:
                if (isFull(&p)) {
                    printf("\tLa pila está llena.\n");
                    system("pause");
                } else {
                    printf("\tLa pila no está llena.\n");
                    system("pause");
                }
                break;
            case 6:
                mostrarPila(&p);
                system("pause");
                break;
            case 7:
                printf("\tSaliendo...\n");
                break;
            default:
                printf("\tOpción no válida.\n");
        }
    } while (opcion != 7);

    return 0;
}