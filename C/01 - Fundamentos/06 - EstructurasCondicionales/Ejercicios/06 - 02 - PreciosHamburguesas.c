/*
** #########################################################################################
**      Archivo: 06 - 01 PasarDeAnho.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          El usuario dara el precio que desea pagar por una hamburguesa y el sistema le
**          indicara que hamburguesa le conviene más.
**
**          Clasica -------- $50
**          Burroburguer --- $70
**          Especial ------- $150
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Varibales globales.
#define Clasica 50
#define Burro   70
#define Specl   150

// Main Function
int main(){
    float P = 0;

    printf("De el precio que desea pagar: "); scanf("%f", &P);

    if (P <= 50){
        puts("\n\nSu hamburguesa indicada es la clasica.");
        if((P > 50) && (P <= 70)){
            puts("\n\nSu hamburguesa indicada es la burroburguer.");
            if ((P > 70) && (P <= 150))
                puts("\n\nSu hamburguesa indicada es la especial");
        }
    }
    return 0;
}