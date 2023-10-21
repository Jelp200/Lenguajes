/*
** #########################################################################################
**      Archivo: 07 - 01 - 04 - ifElseIf.c
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCION PRINCIPAL
int main(){
    int PSWRD = 12345,
        PSWRDUsr,
        USR = 12345,
        USR2 = 123456,
        USRUsr;

    printf("De un usuario: "); scanf("%i", &USRUsr);

    if (USRUsr == USR){
        printf("De su password: "); scanf("%i", &PSWRDUsr);
        if (PSWRDUsr == PSWRD)
            printf("\nBienvenido al sistema %i", USRUsr); 
    }else if(USRUsr == USR2){
        printf("De su password: "); scanf("%i", &PSWRDUsr);
        if (PSWRDUsr == PSWRD)
            printf("\nBienvenido al sistema %i", USRUsr);
    }else printf("De el usuario correcto...");
    return 0;
}