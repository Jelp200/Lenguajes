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

    printf("\n\t\tDe un número del 1 - 10: "); scanf("%i", &n);

    switch(n){
        case 1: printf("\n\t\tEligio el numero %i.", n); break;
        case 2: printf("\n\t\tEligio el numero %i.", n); break;
        case 3: printf("\n\t\tEligio el numero %i.", n); break;
        case 4: printf("\n\t\tEligio el numero %i.", n); break;
        case 5: printf("\n\t\tEligio el numero %i.", n); break;
        case 6: printf("\n\t\tEligio el numero %i.", n); break;
        case 7: printf("\n\t\tEligio el numero %i.", n); break;
        case 8: printf("\n\t\tEligio el numero %i.", n); break;
        case 9: printf("\n\t\tEligio el numero %i.", n); break;
        case 10: printf("E\n\t\tligio el numero %i.", n); break;
        default: puts("\n\t\tNo dio un número del 1 al 10"); break;
    }

    return 0;
}