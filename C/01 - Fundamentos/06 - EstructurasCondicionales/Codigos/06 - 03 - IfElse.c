/*
** #########################################################################################
**      Archivo: 06 - 03 -IfElse.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          if(condición){
**              ...
**              Código si se cumple la condición
**              ...
**         } else {
**              ...
**              Código si no se cumple la condición
**          }
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){
    int n;

    printf("De un numero: "); scanf("%i", &n);

    if (n >= 0) puts("\n\nEl numero es mayor o igual a 0.");
    else puts("\n\nEl numero es menor a 0.");
    
    return 0;
}