/*
** #########################################################################################
**      Archivo: 06 - 01 PasarDeAnho.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Realizar un programa el cual pida 5 calificaciones, si se tienen un promedio
**          a 5 el alumno recursara el año. 
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){
    float C1, C2, C3, C4, C5;
    float P = 0;

    printf("De la primer calificación: "); scanf("%f", &C1);
    printf("De la segunda calificación: "); scanf("%f", &C2);
    printf("De la tercer calificación: "); scanf("%f", &C3);
    printf("De la cuarta calificación: "); scanf("%f", &C4);
    printf("De la quinta calificación: "); scanf("%f", &C5);

    P = (C1 + C2 + C3 + C4 + C5) / 5;

    if (P <= 5)
        puts("\n\nDebes recursar de año.");
    
    return 0;
}