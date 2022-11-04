/*
** #########################################################################################
**      Archivo: 06 - 04 -IfElseIf.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          if(condición){
**              ...
**              Código si se cumple la condición
**              ...
**         } else if{
**              ...
**              Código si no se cumple la condición
**          }
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){
    int PSWRD = 12345,
        PSWRDUsr,
        USR = 12345,
        USR2 = 123456,
        USRUsr;

    printf("De un usuario: "); scanf("%i", &USRUsr);

    if (USRUsr == USR){
        printf("De su password: "); scanf("%i", &PSWRDUsr);
        if (PSWRDUsr == PSWRD){
            printf("\nBienvenido al sistema %i", USRUsr);
        } 
    }else if(USRUsr == USR2){
        printf("De su password: "); scanf("%i", &PSWRDUsr);
        if (PSWRDUsr == PSWRD){
            printf("\nBienvenido al sistema %i", USRUsr);
        }
    } else printf("De el usuario correcto...");
    
    return 0;
}