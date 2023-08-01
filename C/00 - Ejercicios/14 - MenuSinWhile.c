/*
** #########################################################################################
**  Archivo         :   08 - OperadoresLogcos.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**              Realizar un menú sin utilizar el ciclo while o do-while
** #########################################################################################
*/
// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// PROTOTIPO(S) DE FUNCION(ES)
void clear();
void menu();

// VARIABLES GLOBALES
int opc = 0;

// FUNCION PRINCIPAL
int main(){
    menu();
    return 0;
}

// FUNCION(ES)
void clear(){
    system("cls || clear");
}

void menu(){
    puts("\n\t\t\tMENU SIN WHILE O DO-WHLE");
    puts("\t\t1. Opcion 1");
    puts("\t\t2. Opcion 2");
    puts("\t\t3. Opcion 3");
    puts("\t\t4. Salir");
    printf("\n\t\tDe una opcion: "); scanf("%i", &opc);
    if(opc == 1){
        ETQ1:
            clear();
            puts("\n\t\t\tOPCION 1");
            puts("\t\t1. Opcion 1");
            puts("\t\t2. Regresar");
            printf("\n\t\tDe una opcion: "); scanf("%i", &opc);
            if(opc == 1){
                clear();
                puts("\n\t\t\tOPCION 1");
                printf("\n\t\tPresione una tecla...");
                getchar();
                goto ETQ1;
            }else
                main();
    }else if(opc == 2){
        ETQ2:
            clear();
            puts("\n\t\t\tOPCION 2");
            puts("\t\t1. Opcion 1");
            puts("\t\t2. Opcion 2");
            puts("\t\t3. Regresar");
            printf("\n\t\tDe una opcion: "); scanf("%i", &opc);
            if(opc == 1){
                clear();
                puts("\n\t\t\tOPCION 1");
                printf("\n\t\tPresione una tecla...");
                getchar();
                goto ETQ2;
            }else if(opc == 2){
                clear();
                puts("\n\t\t\tOPCION 2");
                printf("\n\t\tPresione una tecla...");
                getchar();
                goto ETQ2;
            }else
                main();
    }else if(opc == 3){
        ETQ3:
            clear();
            puts("\n\t\t\tOPCION 3");
            puts("\t\t1. Opcion 1");
            puts("\t\t2. Regresar");
            printf("\n\t\tDe una opcion: "); scanf("%i", &opc);
            if(opc == 1){
                clear();
                puts("\n\t\t\tOPCION 1");
                printf("\n\t\tPresione una tecla...");
                getchar();
                goto ETQ3;
            }else
                main();
    }else if(opc == 4){
        clear();
        puts("\n\t\tHasta la proxima");
    }else{
        puts("\n\t\tDe una opcion correcta...");
    }
}