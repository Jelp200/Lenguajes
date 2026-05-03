/*
** #########################################################################################
**      Archivo: 05 - Entradas&Salidas.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(){
    //* 1. Escribe un programa que pida al usuario su nombre y lo imprima.
    char nombre[50];
    printf("¿Cuál es tu nombre?: "); scanf("%s", nombre);
    printf("Hola, %s!\n", nombre);

    //* 2. Solicita dos números al usuario y muestra su suma.
    int n1 = 0, n2 = 0;
    printf("Ingresa el primer número: "); scanf("%d", &n1);
    printf("Ingresa el segundo número: "); scanf("%d", &n2);
    printf("La suma de %d y %d es: %d\n", n1, n2, n1 + n2);

    //* 3. Pide al usuario un carácter y muéstralo en pantalla.
    char caracter;
    printf("Ingresa un carácter: "); scanf(" %c", &caracter);
    printf("El carácter ingresado es: %c\n", caracter);

    //* 4. Solicita al usuario su edad y muestra un mensaje personalizado.
    int edad;
    printf("¿Cuál es tu edad?: "); scanf("%d", &edad);
    printf("Tienes %d años, ¡bienvenido a la programación en C!\n", edad);
    
    //* 5. Pide al usuario tres números y muestra su promedio.
    int n3 = 0, n4 = 0, n5 = 0;
    printf("Ingresa el primer número: "); scanf("%d", &n3);
    printf("Ingresa el segundo número: "); scanf("%d", &n4);
    printf("Ingresa el tercer número: "); scanf("%d", &n5);
    float promedio = (n3 + n4 + n5) / 3.0;
    printf("El promedio de %d, %d y %d es: %.2f\n", n3, n4, n5, promedio);

    return 0;
}