/*
** #########################################################################################
**  Archivo         :   10 - suma.c
**  Proyecto        :   Mr.C (Ejercicios)
**  Herramienta(s)  :   Code::Blocks / Visual Studio Code
**  Compilador      :   C/C++ Compiler (Windows)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que realice sumas seguidas.
** #########################################################################################
*/

// Directivas de preprocesador.
#include <stdio.h>

// Funcion principal.
int main(void){

    int n1, n2, n3, n4, S = 0, R = 0;

    printf("\n\tDe el primer numero: "); scanf("%i", &n1);
    printf("\tDe el segundo numero: "); scanf("%i", &n2);
    printf("\tDe el tercer numero: "); scanf("%i", &n3);

    S = n1 + n2 + n3;

    if(S >= 10){
        printf("\n\tDe el cuarto numero: ", &n4); scanf("%i", &n4);
        S += n4;

        if(S >= 15){
            R = S - 5;
            printf("\n\tEl resultado final es: %i", R);
        }
    }else { printf("\n\t\tNo se cumplen los requisitos..."); }

    return 0;
}
