/*
** #########################################################################################
**      Archivo: 02 - 03 - ifAnidados.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCION PRINCIPAL
int main(){
    int n = 0;

    printf("De un numero: "); scanf("%i", &n);

    if (n > 0){
        system("cls || clear");
        puts("Dio un numero mayor a 0.");
        printf("De un nuevo numero: "); scanf("%i", &n);
        if (n <= 0)
            printf("Dio un menor mayor a 0 y es: %i", n);
    }
    return 0;
}