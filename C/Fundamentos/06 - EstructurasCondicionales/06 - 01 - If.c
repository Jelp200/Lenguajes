/*
** #########################################################################################
**      Archivo: 06 - 01 -IF.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          if(condición){
**              ...
**              Código en C
**              ..
**          }
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){
    int n;

    printf("De un numero: "); scanf("%i", &n);

    if (n >= 0){
        puts("\n\nEl numero es mayor o igual a 0.");
    }
    
    return 0;
}