/*
** #########################################################################################
**      Archivo: 04 - 06 - 02 - RSLL.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**      Notas:
**          Programa que incorpora los dos tipos de recorridos (iterativo y recursivo) para
**          una lista enlazada simple.
** #########################################################################################
*/

//* DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <stdlib.h>

//* ESTRUCTURAS
// Estructura para un nuevo nodo
struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Error de memoria!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

//* FUNCIONES
// Recorrido iterativo
void iterativeTraversal(struct Node* head) {
    printf("Recorrido iterativo: ");
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Recorrido recursivo
void recursiveTraversal(struct Node* head) {
    if (head == NULL) {
        printf("NULL\n");
        return;
    }
    printf("%d -> ", head->data);
    recursiveTraversal(head->next);
}

//* FUNCIÓN PRINCIPAL
int main() {
    // Creación de la lista: 10 -> 20 -> 30 -> 40
    struct Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);

    // Mostrar ambos recorridos
    iterativeTraversal(head);
    
    printf("Recorrido recursivo: ");
    recursiveTraversal(head);

    // Liberar memoria
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}