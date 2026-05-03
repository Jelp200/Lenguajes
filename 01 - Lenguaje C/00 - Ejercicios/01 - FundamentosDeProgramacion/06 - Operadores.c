/*
** #########################################################################################
**      Archivo: 06 - Operadores.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(){
    //* 1. Escribe un programa que sume, reste, multiplique y divida dos números.
    int a = 10, b = 5;
    printf("Suma: %d + %d = %d\n", a, b, a + b);
    printf("Resta: %d - %d = %d\n", a, b, a - b);
    printf("Multiplicación: %d * %d = %d\n", a, b, a * b);
    if (b != 0) printf("División: %d / %d = %.2f\n", a, b, (float)a / b);
    else printf("División por cero no es permitida.\n");

    //* 2. Calcula el residuo de la división de dos números.
    printf("Residuo: %d %% %d = %d\n", a, b, a % b);

    //* 3. Usa operadores de incremento y decremento en una variable y muestra los resultados.
    int c = a;
    printf("Incremento: %d++ = %d\n", c, c++);
    printf("Decremento: %d-- = %d\n", c, c--);

    //* 4. Realiza operaciones lógicas (&&, ||, !) y muestra los resultados.
    int x = 1, y = 0;
    printf("Operador lógico AND: %d && %d = %d\n", x, y, x && y);
    printf("Operador lógico OR: %d || %d = %d\n", x, y, x || y);
    printf("Operador lógico NOT: !%d = %d\n", x, !x);

    //* 5. Usa operadores de asignación compuesta (+=, -=, *=, /=) y muestra los resultados.
    int d = 10;
    d += 5; printf("Asignación compuesta +=: %d\n", d);
    d -= 3; printf("Asignación compuesta -=: %d\n", d);
    d *= 2; printf("Asignación compuesta *=: %d\n", d);
    if (d != 0) {
        d /= 4; printf("Asignación compuesta /=: %d\n", d);
    } else {
        printf("División por cero no es permitida.\n");
    }

    return 0;
}