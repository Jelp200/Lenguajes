/*
** #########################################################################################
**      Archivo: 11 - Switch.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(){
    //* 1. Escribe un programa que lea un número del 1 al 7 y muestre el día de la semana.
    int dia = 0;
    printf("Ingrese un número del 1 al 7: "); scanf("%d", &dia);
    switch (dia) {
        case 1: printf("Lunes\n"); break;
        case 2: printf("Martes\n"); break;
        case 3: printf("Miércoles\n"); break;
        case 4: printf("Jueves\n"); break;
        case 5: printf("Viernes\n"); break;
        case 6: printf("Sábado\n"); break;
        case 7: printf("Domingo\n"); break;
        default: printf("Número inválido\n"); break;
    }

    //* 2. Usa switch para realizar una calculadora básica (+, -, *, /).
    char operador;
    float num1, num2;
    printf("Ingrese una operación (ejemplo: 5 + 3): "); scanf("%f %c %f", &num1, &operador, &num2);
    switch (operador) {
        case '+': printf("Resultado: %.2f\n", num1 + num2); break;
        case '-': printf("Resultado: %.2f\n", num1 - num2); break;
        case '*': printf("Resultado: %.2f\n", num1 * num2); break;
        case '/': 
            if (num2 != 0) printf("Resultado: %.2f\n", num1 / num2);
            else printf("Error: División por cero\n");
            break;
        default: printf("Operador inválido\n"); break;
    }

    //* 3. Escribe un programa que lea una letra y determine si es vocal o consonante.
    char letra;
    printf("Ingrese una letra: "); scanf(" %c", &letra);
    switch (letra) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("La letra '%c' es una vocal\n", letra); break;
        default: printf("La letra '%c' es una consonante\n", letra); break;
    }

    //* 4. Usa switch para mostrar un mensaje según el mes del año.
    int mes;
    printf("Ingrese un número del 1 al 12 para el mes: "); scanf("%d", &mes);
    switch (mes) {
        case 1: printf("Enero\n"); break;
        case 2: printf("Febrero\n"); break;
        case 3: printf("Marzo\n"); break;
        case 4: printf("Abril\n"); break;
        case 5: printf("Mayo\n"); break;
        case 6: printf("Junio\n"); break;
        case 7: printf("Julio\n"); break;
        case 8: printf("Agosto\n"); break;
        case 9: printf("Septiembre\n"); break;
        case 10: printf("Octubre\n"); break;
        case 11: printf("Noviembre\n"); break;
        case 12: printf("Diciembre\n"); break;
        default: printf("Número de mes inválido\n"); break;
    }

    //* 5. Escribe un programa que lea una opción y ejecute una acción diferente según el valor.
    int opcion;
    printf("Ingrese una opción (1-3): "); scanf("%d", &opcion);
    switch (opcion) {
        case 1: printf("Opción 1 seleccionada\n"); break;
        case 2: printf("Opción 2 seleccionada\n"); break;
        case 3: printf("Opción 3 seleccionada\n"); break;
        default: printf("Opción inválida\n"); break;
    }
    
    return 0;
}