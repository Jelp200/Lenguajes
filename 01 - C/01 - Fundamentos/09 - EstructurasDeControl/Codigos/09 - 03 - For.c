/*
** #########################################################################################
**      Archivo: 09 - 03 - For.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Estructura de control FOR.
**
**          for(inicialización; condición; incremento/decremento){
**              ...
**              Código en C
**              ...
**          }
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){
    // int i = 0;

    // Tambien podemos inicializar la variable dentro del ciclo.
    for (int i = 0; i <= 254; i++){
        printf("%c\n", i);                    // Imprime el código ASCII.
    }
    
    return 0;
}