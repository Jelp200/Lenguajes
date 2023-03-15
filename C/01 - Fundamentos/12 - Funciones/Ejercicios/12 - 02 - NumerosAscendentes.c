/*
** #########################################################################################
**      Archivo: 12 - 02 - NumerosAscendentes.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**              Realizar un programa que a travez de funciones no recursivas pueda realizar
**              un ordenamiento de tres numeros de forma ascendente.
** #########################################################################################
*/

// Directivas de preprocesador
#include <stdio.h>

// Prototipo(s) de funcion(es)
void Ordenamiento(int a, int b, int c);

// Main function
int main(){
    // DECLARAMOS LAS VARIABLES LOCALES A UTILIZAR
    //! Nota: No importa si tienen el mismo nombre de las variables declaradas en la funcion.
    int a, b, c;

    // INGRESAMOS LOS DATOS
    printf("\n\t\tDe el primer numero: "); scanf("%i", &a);
    printf("\n\t\tDe el segundo numero: "); scanf("%i", &b);
    printf("\n\t\tDe el tercer numero: "); scanf("%i", &c);

    //! LLAMAMOS A LA FUNCION Y PASAMOS LOS VALORES YA INGRESADOS
    Ordenamiento(a, b, c);

    return 0;
}

// Funcion(es)
void Ordenamiento(int a, int b, int c){
    if(a >= b && a >= c){
        if(b >= c)
            printf("\n\t\tPrimer if: %i, %i, %i", c, b, a);
        else
            printf("\n\t\tPrimer else: %i, %i, %i", b, c, a);
    }

    if(b >= a && b >= c){
        if(a >= c)
            printf("\n\t\tSegundo if: %i, %i, %i", c, a, b);
        else
            printf("\n\t\tSegundo else: %i, %i, %i", a, c, b);
    }

    if(c >= b && c >= a){
        if(b >= a)
            printf("\n\t\tTercer if: %i, %i, %i", a, b, c);
        else
            printf("\n\t\tTercer else: %i, %i, %i", b, a, a);
    }
}