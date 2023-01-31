/*
** #########################################################################################
**      Archivo: 06 - 02 -If'sAnidados.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          if(condición){
**              Código en C
**              if(condición 2){
**                  Código en C
**                  if(condición 3){
**                      ...
**                          IF's
**                      ...
**                  }
**              }
**          }
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){
    int n;

    printf("De un numero: "); scanf("%i", &n);

    if (n > 0){
        system("cls");
        puts("Dio un numero mayor a 0.");
        
        printf("De un nuevo numero: "); scanf("%i", &n);
        if (n <= 0){
            printf("Dio un menor mayor a 0 y es: %i", n);
        }
    }
    return 0;
}