/*
** #########################################################################################
**      Archivo: 13 - 01 - NumeroSecreto.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**              Realizar un programa en el cual el usuario de un numero y el sistema verifique
**              si el numero dado es el correcto o no.
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>
#include <time.h>

// Prototipo(s) de funcion(es)
int Random();

// Main Function
int main(){
    
    int n, aux = 0;
    char opc;

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

// Funcion(es)
int Random(){
    int n;

    srand(time(NULL));
    n = 0 + rand() % ((15 + 1) - 0);
    
    return n;
}