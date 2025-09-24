/*
** #########################################################################################
**      Archivo: 04 - 06 - 04 - LinkedListComplete.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**      Notas:
**          Programa que permite visualizar el funcionamiento de todas las operaciones en
**          una lista enlazada.
** #########################################################################################
*/

//* DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <stdlib.h>

//* DECLARACIÓN DE ESTRUCTURA PARA LOS NODOS
// NODO LISTA ENLAZADA SIMPLE
typedef struct NodoSimple {
    int dato;
    struct NodoSimple *siguiente;
} NodoSimple;

// NODO LISTA DOBLEMENTE ENLAZADA
typedef struct NodoDoble {
    int dato;
    struct NodoDoble *siguiente;
    struct NodoDoble *anterior;
} NodoDoble;

// NODO LISTA CIRCULAR ENLAZADA
typedef struct NodoCircular {
    int dato;
    struct NodoCircular *siguiente;
} NodoCircular;

//* PROTOTIPOS DE FUNCIONES
// ================================= LISTA ENLAZADA SIMPLE =================================
// Crear un nuevo nodo simple
NodoSimple* crearNodoSimple(int valor);
// Intertar un nodo simple al inicio/cabeza de la lista
void insertarSimple(NodoSimple **cabeza, int valor);
// Mostrar la lista simple
void mostrarSimple(NodoSimple *cabeza);
// Liberar lista simple
void liberarSimple(NodoSimple **cabeza);

// ============================== LISTA DOBLEMENTE ENLAZADA ================================
// Crear un nuevo nodo doble
NodoDoble* crearNodoDoble(int valor);
// Intertar un nodo doble al inicio/cabeza de la lista
void insertarDoble(NodoDoble **cabeza, int valor);
// Mostrar la lista doble adelante
void mostrarDobleAdelante(NodoDoble *cabeza);
// Mostrar la lista doble atras
void mostrarDobleAtras(NodoDoble *cola);
// Liberar lista doble
void liberarDoble(NodoDoble **cabeza);

// =============================== LISTA CIRCULAR ENLAZADA =================================
// Crear un nuevo nodo circular
NodoCircular* crearNodoCircular(int valor);
// Intertar un nodo circular al inicio/cabeza de la lista
void insertarCircular(NodoCircular **cabeza, int valor);
// Mostrar la lista circular
void mostrarCircular(NodoCircular *cabeza);
// Liberar lista simple
void liberarCircular(NodoCircular **cabeza);

//* FUNCION PRINCIPAL
int main() {
    NodoSimple *listaSimple = NULL;
    NodoDoble *listaDoble = NULL;
    NodoCircular *listaCircular = NULL;

    int opcion, valor;
    do {
        printf("\n===== MENÚ DE LISTAS =====\n");
        printf("1. Insertar en lista simple\n");
        printf("2. Mostrar lista simple\n");
        printf("3. Insertar en lista doble\n");
        printf("4. Mostrar lista doble (adelante)\n");
        printf("5. Mostrar lista doble (atrás)\n");
        printf("6. Insertar en lista circular\n");
        printf("7. Mostrar lista circular\n");
        printf("0. Salir\n");
        printf("Seleccione una opción: ");
        
        if (scanf("%d", &opcion) != 1) {
            printf("Entrada inválida. Intente de nuevo.\n");
            while (getchar() != '\n'); // Limpiar buffer
            continue;
        }

        switch (opcion) {
            case 1:
                printf("Ingrese un valor: ");
                if (scanf("%d", &valor) != 1) {
                    printf("Valor inválido.\n");
                    while (getchar() != '\n');
                    break;
                }
                insertarSimple(&listaSimple, valor);
                break;

            case 2:
                mostrarSimple(listaSimple);
                break;

            case 3:
                printf("Ingrese un valor: ");
                if (scanf("%d", &valor) != 1) {
                    printf("Valor inválido.\n");
                    while (getchar() != '\n');
                    break;
                }
                insertarDoble(&listaDoble, valor);
                break;

            case 4:
                mostrarDobleAdelante(listaDoble);
                break;

            case 5: {
                if (listaDoble == NULL) {
                    printf("Lista doble vacía\n");
                } else {
                    NodoDoble *cola = listaDoble;
                    while (cola->siguiente != NULL)
                        cola = cola->siguiente;
                    mostrarDobleAtras(cola);
                }
                break;
            }

            case 6:
                printf("Ingrese un valor: ");
                if (scanf("%d", &valor) != 1) {
                    printf("Valor inválido.\n");
                    while (getchar() != '\n');
                    break;
                }
                insertarCircular(&listaCircular, valor);
                break;

            case 7:
                mostrarCircular(listaCircular);
                break;

            case 0:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opción no válida\n");
        }
    } while (opcion != 0);

    // Liberar memoria
    liberarSimple(&listaSimple);
    liberarDoble(&listaDoble);
    liberarCircular(&listaCircular);

    return EXIT_SUCCESS;
}

//* FUNCIONES
// ================================= LISTA ENLAZADA SIMPLE =================================
// Crear un nuevo nodo simple
NodoSimple* crearNodoSimple(int valor) {
    // Aignar memoria para el nuevo nodo
    NodoSimple *nuevo = (NodoSimple*)malloc(sizeof(NodoSimple));

    // Verificar si la asignación de memoria fue exitosa
    if(!nuevo){
        fprintf(stderr, "Error: No se pudo asignar memoria...\n");
        exit(EXIT_FAILURE);
    }

    // Inicializar el nodo
    nuevo->dato = valor;
    nuevo->siguiente = NULL;
    return nuevo;
}

// Intertar un nodo simple al inicio/cabeza de la lista
void insertarSimple(NodoSimple **cabeza, int valor) {
    // Crear un nuevo nodo
    NodoSimple *nuevo = crearNodoSimple(valor);

    // Si la lista está vacía, el nuevo nodo será la cabeza
    if (*cabeza == NULL) {
        *cabeza = nuevo;
    } 
    // Si la lista no está vacía, recorrer hasta el final y agregar el nuevo nodo
    else{
        NodoSimple *temp = *cabeza;
        while (temp->siguiente != NULL)
            temp = temp->siguiente;
        temp->siguiente = nuevo;
    }
}

// Mostrar la lista simple
void mostrarSimple(NodoSimple *cabeza) {
    printf("Lista simple: ");

    // Recorrer la lista e imprimir los datos
    while (cabeza != NULL) {
        printf("%d -> ", cabeza->dato);
        cabeza = cabeza->siguiente;
    }
    printf("NULL\n");
}

// Liberar lista simple
void liberarSimple(NodoSimple **cabeza) {
    while (*cabeza != NULL) {
        NodoSimple *temp = *cabeza;
        *cabeza = (*cabeza)->siguiente;
        free(temp);
    }
}

// ============================== LISTA DOBLEMENTE ENLAZADA ================================
// Crear un nuevo nodo doble
NodoDoble* crearNodoDoble(int valor) {
    // Aignar memoria para el nuevo nodo
    NodoDoble *nuevo = (NodoDoble*)malloc(sizeof(NodoDoble));

    // Verificar si la asignación de memoria fue exitosa
    if(!nuevo){
        fprintf(stderr, "Error: No se pudo asignar memoria...\n");
        exit(EXIT_FAILURE);
    }

    // Inicializar el nodo
    nuevo->dato = valor;
    nuevo->siguiente = NULL;
    nuevo->anterior = NULL;
    return nuevo;
}

// Intertar un nodo doble al inicio/cabeza de la lista
void insertarDoble(NodoDoble **cabeza, int valor) {
    // Crear un nuevo nodo
    NodoDoble *nuevo = crearNodoDoble(valor);

    // Si la lista está vacía, el nuevo nodo será la cabeza
    if (*cabeza == NULL) {
        *cabeza = nuevo;
    }
    // Si la lista no está vacía, recorrer hasta el final y agregar el nuevo nodo
    else{
        NodoDoble *cola = *cabeza;
        while (cola->siguiente != NULL)
            cola = cola->siguiente;
        cola->siguiente = nuevo;
        nuevo->anterior = cola;
    }
}

// Mostrar la lista doble adelante
void mostrarDobleAdelante(NodoDoble *cabeza){
    printf("Lista doble (adelante): ");

    // Recorrer la lista e imprimir los datos
    while (cabeza != NULL) {
        printf("%d <-> ", cabeza->dato);
        cabeza = cabeza->siguiente;
    }
    printf("NULL\n");
}

// Mostrar la lista doble atras
void mostrarDobleAtras(NodoDoble *cola){
    printf("Lista doble (atras): ");

    // Recorrer la lista e imprimir los datos
    while (cola != NULL) {
        printf("%d <-> ", cola->dato);
        cola = cola->siguiente;
    }
    printf("NULL\n");
}

// Liberar lista doble
void liberarDoble(NodoDoble **cabeza){
    while (*cabeza != NULL) {
        NodoDoble *temp = *cabeza;
        *cabeza = (*cabeza)->siguiente;
        free(temp);
    }
}

// =============================== LISTA CIRCULAR ENLAZADA =================================
// Crear un nuevo nodo circular
NodoCircular* crearNodoCircular(int valor) {
    // Aignar memoria para el nuevo nodo
    NodoCircular *nuevo = (NodoCircular*)malloc(sizeof(NodoCircular));

    // Verificar si la asignación de memoria fue exitosa
    if(!nuevo){
        fprintf(stderr, "Error: No se pudo asignar memoria...\n");
        exit(EXIT_FAILURE);
    }

    // Inicializar el nodo
    nuevo->dato = valor;
    return nuevo;
}

// Intertar un nodo circular al inicio/cabeza de la lista
void insertarCircular(NodoCircular **cabeza, int valor) {
    // Crear un nuevo nodo
    NodoCircular *nuevo = crearNodoCircular(valor);

    // Si la lista está vacía, el nuevo nodo será la cabeza
    if (*cabeza == NULL) {
        *cabeza = nuevo;
        nuevo->siguiente = *cabeza;
    } 
    // Si la lista no está vacía, recorrer hasta el final y agregar el nuevo nodo
    else{
        NodoCircular *temp = *cabeza;
        while (temp->siguiente != cabeza)
            temp = temp->siguiente;
        temp->siguiente = nuevo;
        nuevo->siguiente = *cabeza;
    }
}

// Mostrar la lista circular
void mostrarCircular(NodoCircular *cabeza) {
    // Verificar si la lista está vacía
    if (cabeza == NULL) {
        printf("Lista circular vacía\n");
        return;
    }

    // Nodo temporal para recorrer la lista
    NodoCircular *temp = cabeza;
    printf("Lista circular: ");

    // Recorrer la lista e imprimir los datos
    do {
        printf("%d -> ", temp->dato);
        temp = temp->siguiente;
    } while (temp != cabeza);
    printf("(regresa al inicio)\n");
}

// Liberar lista simple
void liberarCircular(NodoCircular **cabeza) {
    // Verificar si la lista está vacía
    if (*cabeza == NULL) return;

    // Nodo temporal para recorrer la lista
    NodoCircular *temp = *cabeza;

    // Recorrer y liberar cada nodo
    while (temp->siguiente != *cabeza) {
        NodoCircular *borrar = temp;
        temp = temp->siguiente;
        free(borrar);
    }
    free(temp);
    *cabeza = NULL;
}
