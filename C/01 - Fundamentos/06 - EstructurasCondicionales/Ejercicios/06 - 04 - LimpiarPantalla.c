/*
** #########################################################################################
**      Archivo: 06 - 03 - MenorDeDosNumeros.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Limpiar la pantalla si el número dado es 0 con el operador ternario.
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>
#include <stdlib.h>

// Main Function
int main(){
    float opc;

    puts("\t\tLIMPIAR PANTALLA");
    puts("\t0.- Limpiar");
    puts("\t1.- Salir");
    printf("\n\tDe una opcion: "); scanf("%f", &opc);

    (opc == 0) ? (system("cls")) : (printf("\n\nAdios..."));

    return 0;
}