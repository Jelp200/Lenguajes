/*
** #########################################################################################
**      Archivo: 14 - FuncionesRecursivas.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**      Compilador: gcc (MinGW-W64) 15.2.0
**      Ejercicios:
**          1. Escribe una función recursiva para calcular el factorial de un número.
**          2. Escribe una función recursiva para calcular la suma de los primeros n números naturales.
**          3. Escribe una función recursiva para calcular la serie de Fibonacci.
**          4. Escribe una función recursiva para invertir un número.
**          5. Escribe una función recursiva para calcular la potencia de un número.
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// PROTOTIPOS DE FUNCIONES
int factorial(int n);
int sumaNumerosNaturales(int n);
int fibonacci(int n);
int invertirNumero(int n);
int potencia(int base, int exponente);

// FUNCIÓN PRINCIPAL
int main(){
    int nFactorial = 0;
    printf("Ingrese un número para calcular su factorial: "); scanf("%d", &nFactorial);
    printf("El factorial de %d es %d\n", nFactorial, factorial(nFactorial));

    int nSuma = 0;
    printf("Ingrese un número para calcular la suma de los primeros n números naturales: "); scanf("%d", &nSuma);
    printf("La suma de los primeros %d números naturales es %d\n", nSuma, sumaNumerosNaturales(nSuma));

    int nFibonacci = 0;
    printf("Ingrese un número para calcular su Fibonacci: "); scanf("%d", &nFibonacci);
    printf("El Fibonacci de %d es %d\n", nFibonacci, fibonacci(nFibonacci));

    int nInvertir = 0;
    printf("Ingrese un número para invertirlo: "); scanf("%d", &nInvertir);
    printf("El número invertido de %d es %d\n", nInvertir, invertirNumero(nInvertir));

    int base = 0, exponente = 0;
    printf("Ingrese la base y el exponente para calcular la potencia (base exponente): "); scanf("%d %d", &base, &exponente);
    printf("%d elevado a la potencia de %d es %d\n", base, exponente, potencia(base, exponente));

    return 0;
}

// DEFINICIÓN DE FUNCIONES
int factorial(int n){
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int sumaNumerosNaturales(int n){
    if (n == 0) return 0;
    return n + sumaNumerosNaturales(n - 1);
}

int fibonacci(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int invertirNumero(int n){
    static int invertido = 0;
    if (n == 0) return invertido;
    invertido = invertido * 10 + n % 10;
    return invertirNumero(n / 10);
}

int potencia(int base, int exponente){
    if (exponente == 0) return 1;
    return base * potencia(base, exponente - 1);
}
