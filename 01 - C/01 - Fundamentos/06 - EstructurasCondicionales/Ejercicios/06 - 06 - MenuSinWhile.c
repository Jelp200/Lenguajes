/*
** #########################################################################################
**      Archivo: 06 - 06 - MenuSinWhile.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Realizar un menú sin utilizar el ciclo while o do-while
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Varibales globales.
int opc;

// Main Function
int main(){
    system("cls");
    puts("\n\t\t\tMENU SIN WHILE/DO-WHILE");
    puts("\t\t1.- Opcion 1");
    puts("\t\t2.- Opcion 2");
    puts("\t\t3.- Salir");
    printf("\n\t\tDe una opcion: "); scanf("%i", &opc);

    if (opc != 3){
        if(opc == 1){
            system("cls");
            puts("\n\t\t\tOPCION 1");
            puts("\t\t1.- Regresar");
            puts("\t\t2.- Salir");
            printf("\n\t\tDe una opcion: "); scanf("%i", &opc);
            if(opc == 1)
                return main();
            else
                goto etqF;
        }else if(opc == 2){
            system("cls");
            puts("\n\t\t\tOPCION 2");
            puts("\t\t1.- Regresar");
            puts("\t\t2.- Salir");
            printf("\n\t\tDe una opcion: "); scanf("%i", &opc);
            if(opc == 1)
                return main();
            else
                goto etqF;
        }else{
            system("cls");
            puts("\t\tDe una opcion correcta");
            return main();
        }
    }

    etqF:
        puts("\n\t\tHasta pronto...");
        return 0;
}