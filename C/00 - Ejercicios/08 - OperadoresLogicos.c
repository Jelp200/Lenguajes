/*
** #########################################################################################
**  Archivo         :   08 - OperadoresLogcos.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que haga las operaciones
**                      logicas.
** #########################################################################################
*/
// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// PROTOTIPO(S) DE FUNCION(ES)
void clear();
void fin();

void menu();

int AND(int E1, int E2);
int OR(int E1, int E2);
int NOT(int E1, int E2);

// VARIABLES GLOBALES
int opc = 0,
    A = 0, B = 0;

// FUNCIÓN PRINCIPAL
int main(){
    menu();
    return 0;
}
// FUNCIONES
void clear(){
    system("cls || clear");
}

void fin(){
    puts("\n\n\tFin del programa...");
    getchar();
}

int AND(int E1, int E2){
    if((E1 && E2) == 1)
        printf("\n\t\tSalida = Verdadero");
    else
        printf("\n\t\tSalida = Falso");
}

int OR(int E1, int E2){
    if((E1 || E2) == 0)
        printf("\n\t\tSalida = Falso");
    else
        printf("\n\t\tSalida = Verdadero");
}

int NOT(int E1, int E2){
    if(E1 == 0){
        E1 = 1;
        printf("\n\t\tSalida A = %i", E1);
    }else
        printf("\n\t\tSalida A = 0");
    if(E2 == 0){
        E2 = 1;
        printf("\n\t\tSalida B = %i", E2);
    }else
        printf("\n\t\tSalida B = 0");
}

void menu(){
    do{
        puts("\n\t\t\tMENU DE OPCIONES");
        puts("\t\t1. AND.");
        puts("\t\t2. OR.");
        puts("\t\t3. NOT.");
        puts("\t\t4. Salir.");
        printf("\n\t\tDe una opcion: "); scanf("%i", &opc);

        switch (opc){
        case 1:
            clear();
            puts("\n\t\t\tAND");
            printf("\n\t\tDe el 1er estado (0 o 1): "); scanf("%i", &A);
            printf("\n\t\tDe el 2do estado (0 o 1): "); scanf("%i", &B);
            AND(A, B);
            break;
        
        case 2:
            clear();
            puts("\n\t\t\tOR");
            printf("\n\t\tDe el 1er estado (0 o 1): "); scanf("%i", &A);
            printf("\n\t\tDe el 2do estado (0 o 1): "); scanf("%i", &B);
            OR(A, B);
            break;

        case 3:
            clear();
            puts("\n\t\t\tNOT");
            printf("\n\t\tDe el 1er estado (0 o 1): "); scanf("%i", &A);
            printf("\n\t\tDe el 2do estado (0 o 1): "); scanf("%i", &B);
            NOT(A, B);
            break;

        case 4:
            clear();
            fin();
            break;

        default:
            puts("\n\t\tDe una opción correcta...");
            break;
        }
    }while(opc != 4);
}