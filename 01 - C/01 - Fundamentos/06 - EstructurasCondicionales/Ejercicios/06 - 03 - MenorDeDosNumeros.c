/*
** #########################################################################################
**      Archivo: 06 - 03 - MenorDeDosNumeros.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Calcular el numero menor de dos números con el operador ternario.
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){
    float N1, N2;

    printf("De el primer numero a evaluar: "); scanf("%f", &N1);
    printf("De el segundo numero a evaluar: "); scanf("%f", &N2);

    (N1 > N2) ? (printf("%.2f es mayor a %.2f", N1, N2)) : (printf("%.2f es mayor a %.2f", N2, N1));

    return 0;
}