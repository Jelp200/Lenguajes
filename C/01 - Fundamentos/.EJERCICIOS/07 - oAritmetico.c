/*
** #########################################################################################
**  Archivo         :   07 - oAritmeticos.c
**  Proyecto        :   Mr.C (Ejercicios)
**  Herramienta(s)  :   Code::Blocks / Visual Studio Code
**  Compilador      :   C/C++ Compiler (Windows)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que haga las operaciones
**                      aritmeticas.
** #########################################################################################
*/

// Directivas de preprocesador.
#include <stdio.h>

// Funcion principal.
int main(void){

    int n1, n2;
    int S = 0,
        R = 0,
        P = 0,
        I = 0,
        D = 0;
    float C = 0, M = 0;

    printf("\tDe el primer numero: "); scanf("%i", &n1);
    printf("\tDe el segundo numero: "); scanf("%i", &n2);

    S = n1 + n2;
    R = n1 - n2;
    P = n1 * n2;
    C = n1 / n2;
    M = n1 % n2;

    system("cls");

    printf("\tLa suma de \"%i\" y \"%i\" es: %i", n1, n2, S);
    printf("\n\tLa resta de \"%i\" y \"%i\" es: %i", n1, n2, R);
    printf("\n\tEl producto de \"%i\" y \"%i\" es: %i", n1, n2, P);
    printf("\n\tEl cociente de \"%i\" y \"%i\" es: %.2f", n1, n2, C);
    printf("\n\tEl modulo de \"%i\" y \"%i\" es: %.2f", n1, n2, M);

    system("pause");

    return 0;
}
