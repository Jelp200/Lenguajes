/*
** #########################################################################################
**      Archivo: 07 - 01 - Switch.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Estructura de selección SWITCH.
**
**          switch(selección){
**              case 1:
**                  ...
**                  Código en C
**                  ...
**                  break;
**              case 'n':
**                  ...
**                  Código en C
**                  ...
**                  break;
**              default:
**                  ...
**                  Código en C
**                  ...
**                  break;
**          }
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){
    int n;

    printf("\n\t\tDe un número del 1 - 3: "); scanf("%i", &n);

    switch(n){
        case 1: printf("\n\t\tEligio el numero %i.", n); break;
        case 2: printf("\n\t\tEligio el numero %i.", n); break;
        case 3: printf("\n\t\tEligio el numero %i.", n); break;
        default: puts("\n\t\tNo dio un numero del 1 al 3"); break;
    }

    return 0;
}