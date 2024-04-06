/*
** #########################################################################################
**  Archivo         :   08 - OperadoresLogcos.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**              Dada las siguientes notas mostrar los siguiente mensajes.
**                  A - Sobresaliente (9 - 10)
**                  B - Notable (7 - 8)
**                  C - Bien (5 - 6)
**                  D y F - Mejorar (0 - 4)
** #########################################################################################
*/
// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// VARIABLES GLOBALES
int calif = 0;

// FUNCIÓN PRINCIPAL
int main(){
    printf("De su calificación: "); scanf("%i", &calif);
    if ((calif > 0) && (calif <= 4)){
        printf("Puede mejorar.");
    }else if((calif >= 5) && (calif <= 6)){
        printf("Bien.");
    }else if((calif >= 7) && (calif <= 8)){
        printf("Notable.");
    }else if((calif >= 9) && (calif <= 10)){
        printf("Sobresaliente.");
    }else{
        printf("De una calificación correcta.");
    }
    
    return 0;
}