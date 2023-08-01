/*
** #########################################################################################
**  Archivo         :   08 - OperadoresLogcos.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**              El usuario dara el precio que desea pagar por una hamburguesa y el sistema le
**              indicara que hamburguesa le conviene más.
**
**              Clasica -------- $50
**              Burroburguer --- $70
**              Especial ------- $150
** #########################################################################################
*/
// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// DEFINES
#define CLASICA 50
#define BURROBU 70
#define ESPCIAL 150

// FUNCIÓN PRINCIPAL
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
