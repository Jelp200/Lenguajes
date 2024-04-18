/*
** #########################################################################################
**      Archivo: 05 - EstructurasAnidadas.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// DEFINICIÓN DE LAS ESTRUCTURAS
struct Producto {
    char nombre[50];
    float precio;
    int stock;
};

// PROTOTIPO DE FUNCIONES
void ingresarProducto(struct Producto *prod);
void mostrarProducto(struct Producto prod);
float valorTotalInventario(struct Producto *productos, int numProductos);

// FUNCIÓN PRINCIPAL
int main() {
    // Declaración de un arreglo de estructuras Producto
    struct Producto inventario[3];

    // Ingreso de datos para cada producto
    for (int i = 0; i < 3; i++) {
        printf("\nIngrese los datos para el producto %d:\n", i + 1);
        ingresarProducto(&inventario[i]);
    }

    // Mostrar la información de cada producto
    printf("\nInformacion del inventario:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nDatos del producto %d:\n", i + 1);
        mostrarProducto(inventario[i]);
    }

    // Calcular y mostrar el valor total del inventario
    printf("\nValor total del inventario: %.2f\n", valorTotalInventario(inventario, 3));

    return 0;
}

// FUNCIONES
void ingresarProducto(struct Producto *prod) {
    printf("Ingrese el nombre del producto: ");
    scanf("%s", prod->nombre);
    printf("Ingrese el precio del producto: ");
    scanf("%f", &prod->precio);
    printf("Ingrese la cantidad en stock del producto: ");
    scanf("%d", &prod->stock);
}

// Función para mostrar la información de un producto
void mostrarProducto(struct Producto prod) {
    printf("\nNombre: %s\n", prod.nombre);
    printf("Precio: %.2f\n", prod.precio);
    printf("Stock: %d\n", prod.stock);
}

// Función para calcular el valor total del inventario
float valorTotalInventario(struct Producto *productos, int numProductos) {
    float total = 0;
    for (int i = 0; i < numProductos; i++) {
        total += productos[i].precio * productos[i].stock;
    }
    return total;
}