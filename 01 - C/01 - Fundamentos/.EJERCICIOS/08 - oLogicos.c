/*
** #########################################################################################
**  Archivo         :   08 - oLogicos.c
**  Proyecto        :   Mr.C (Ejercicios)
**  Herramienta(s)  :   Code::Blocks / Visual Studio Code
**  Compilador      :   C/C++ Compiler (Windows)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que haga las operaciones
**                      logicas.
** #########################################################################################
*/

// Directivas de preprocesador.
#include <stdio.h>

// Funcion principal.
int main(void){

    int A, B;

    printf("De el primer estado (0 o 1): "); scanf("%i", &A);
    printf("De el segundo estado (0 o 1): "); scanf("%i", &B);

    if(((A == 0) || (A == 1)) && (B == 0) || (B == 1)){

        system("cls");

        puts("\t\t\tOPERADOR 'AND'");
        if ((A && B) == 1) { printf("\nOUT = TRUE\n\n"); }
        else { printf("\nOUT = FALSE\n\n"); }

        system("PAUSE");
        system("cls");

        puts("\t\t\tOPERADOR 'OR'");
        if ((A || B) == 0) { printf("\nOUT = FALSE\n\n"); }
        else { printf("\nOUT = TRUE\n\n"); }

        system("PAUSE");
        system("cls");

        puts("\t\t\tOPERADOR 'NOT'");
        if (A == 0) {
            A = 1;
            printf("\nOUT = %i\n\n", A);
        } else { printf("\nOUT = 0\n\n"); }
        if (B == 0) {
            B = 1;
            printf("\nOUT = %i\n\n", B);
        } else { printf("\nOUT = 0\n\n"); }
    }else{
        printf("\n\n\tDe valores aceptables (0 o 1)...\n");
    }

    return 0;
}
