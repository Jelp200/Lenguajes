/*
** #########################################################################################
**      Archivo: 01 - EstructurasAnidadas.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// DEFINICIÓN DE LAS ESTRUCTURAS
struct Direccion {
    char calle[100];
    int numero;
    char ciudad[50];
};

struct Cliente {
    char nombre[50];
    char telefono[15];
    struct Direccion direccion;
};

int main() {
    // Declaración de una variable de tipo Cliente
    struct Cliente cliente;

    // Ingreso de datos para el cliente y su dirección de entrega
    printf("Ingrese el nombre del cliente: ");
    scanf("%s", &cliente.nombre);
    printf("Ingrese el numero de telefono del cliente: ");
    scanf("%s", &cliente.telefono);
    printf("Ingrese la calle de la direccion de entrega: ");
    scanf("%s", &cliente.direccion.calle);
    printf("Ingrese el numero de la direccion de entrega: ");
    scanf("%d", &cliente.direccion.numero);
    printf("Ingrese la ciudad de la direccion de entrega: ");
    scanf("%s", &cliente.direccion.ciudad);

    // Impresión de los datos del cliente y su dirección de entrega
    printf("\nDatos del cliente:\n");
    printf("Nombre: %s\n", cliente.nombre);
    printf("Telefono: %s\n", cliente.telefono);
    printf("Direccion de Entrega:\n");
    printf("  Calle: %s\n", cliente.direccion.calle);
    printf("  Numero: %d\n", cliente.direccion.numero);
    printf("  Ciudad: %s\n", cliente.direccion.ciudad);

    return 0;
}