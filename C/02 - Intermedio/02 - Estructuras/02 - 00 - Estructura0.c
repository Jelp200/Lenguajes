/*
** #########################################################################################
**      Archivo: 02 - 00 - Estructuras0.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Main Function
int main(){

    // Definimos un nuevo tipo llamado "miTipoDeDato"
    typedef int miTipoDeDato;

    // Ahora podemos crear variables del tipo "miTipoDeDato"
    miTipoDeDato Var1;

    // Pero de igual manera podemos seguir usando int
    int Var2;

    printf("Escriba dos numeros entero: "); scanf("%d %i", &Var1, &Var2);
    printf("\nLos numeros dados son: %d, %i", Var1, Var2);

    return 0;
}