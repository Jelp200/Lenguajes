/*
** #########################################################################################
**      Archivo: 20 - 03 - estructurasFunciones.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// DEFINICIÓN DE ESTRUCTURA(S)
struct Punto {
    int x;
    int y;
};

// FUNCION(ES)
// Función para calcular la distancia al origen
float distanciaAlOrigen(struct Punto p) {
    return sqrt(p.x * p.x + p.y * p.y);
}

// Función para imprimir un punto
void imprimirPunto(struct Punto p) {
    printf("Punto: (%d, %d)\n", p.x, p.y);
}

// FUNCION PRINCIPAL
int main(){
    struct Punto p1;

    // Asignar valores a los campos de la estructura
    p1.x = 3;
    p1.y = 4;

    // Imprimir el punto
    imprimirPunto(p1);

    // Calcular y mostrar la distancia al origen
    printf("Distancia al origen: %.2f\n", distanciaAlOrigen(p1));

    return 0;
}