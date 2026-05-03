/*
** #########################################################################################
**      Archivo: 13 - Funciones.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**      Compilador: gcc (MinGW-W64) 15.2.0
**      Ejercicios:
**          1. Escribe una función que sume dos números y retorne el resultado.
**          2. Escribe una función que calcule el área de un círculo.
**          3. Escribe una función que determine si un número es primo.
**          4. Escribe una función que imprima un mensaje de bienvenida.
**          5. Escribe una función que reciba un número y devuelva su cuadrado.
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// DEFINICIÓN DE CONSTANTES
#define M_PI 3.14159265358979323846

// PROTOTIPOS DE FUNCIONES
int sumaDosNumeros(int n1, int n2);
double areaCirculo(double radio);
int esPrimo(int numero);
void mensajeBienvenida();
int cuadrado(int numero);

// FUNCIÓN PRINCIPAL
int main(){
    mensajeBienvenida();

    int a = 5, b = 3;
    printf("Suma de %d y %d: %d\n", a, b, sumaDosNumeros(a, b));

    double radio = 4.0;
    printf("Área del círculo con radio %.2f: %.2f\n", radio, areaCirculo(radio));

    int numero = 7;
    if (esPrimo(numero)) printf("%d es un número primo.\n", numero);
    else printf("%d no es un número primo.\n", numero);

    int num = 6;
    printf("El cuadrado de %d es %d\n", num, cuadrado(num));

    return 0;
}

// DEFINICIÓN DE FUNCIONES
int sumaDosNumeros(int n1, int n2){ return n1 + n2; }

double areaCirculo(double radio){ return M_PI * radio * radio; }

int esPrimo(int numero){
    if (numero < 2) return 0;
    for (int i = 2; i <= numero / 2; i++) if (numero % i == 0) return 0;
    return 1;
}

void mensajeBienvenida(){ printf("¡Bienvenido al programa!\n"); }

int cuadrado(int numero){ return numero * numero; }