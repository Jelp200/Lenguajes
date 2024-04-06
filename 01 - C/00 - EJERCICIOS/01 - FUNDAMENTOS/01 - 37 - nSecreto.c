/*
** #########################################################################################
**  Archivo: 01 - 36 - CalcProgram.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**              Realizar un programa en el cual el usuario de un numero y el sistema verifique
**              si el numero dado es el correcto o no.
** #########################################################################################
*/

// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <time.h>

// PROTOTIPO(S) DE FUNCION(ES)
int Random();

// FUNCION PRINCIPAL
int main(){
    int n, aux = 0;

    aux = Random();

    etq1:
    printf("\n\n\tEl numero secreto esta entre %i y %i...", aux + 1, aux - 2);
    printf("\n\tEscriba un numero: "); scanf("%i", &n);
    if(n == aux)
        printf("\n\tHa acertado al numero secreto...");
    else{
        printf("\n\tIntentelo de nuevo, el numero secreto ha cambiado...");
        goto etq1;
    }
    return 0;
}

// FUNCION(ES)
int Random(){
    int n;

    srand(time(NULL));
    n = 0 + rand() % ((15 + 1) - 0);
    
    return n;
}