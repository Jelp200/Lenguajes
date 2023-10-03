/*
** #########################################################################################
**  Archivo         :   24 - MenuBC.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que tenga un menú el cual implemente el break y
**                      continue en sus opciones.
** #########################################################################################
*/

// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// PROTOTIPO(S) DE FUNCION(ES)
void clear(){
    system("cls || clear");
}
void pause(){
    fflush(stdout);
    system("read -p '\n\t\tPresione enter para continuar...' t");       // Código en bash
}

void Menu();
int opciones(int a);
int Break(int a);
int Continue(int a);

// VARIABLES GLOBALES
int n, opc;

// FUNCION PRINCIPAL
int main(){
    do{
        Menu();
    }while(opc != 0);
    return 0;
}

// FUNCION(ES)
void Menu(){
    pause();
    clear();
    puts("\t\t\tBREAK & CONTINUE MENÚ");
    puts("\t\t1.- Uso del break.");
    puts("\t\t2.- Uso del continue.");
    puts("\t\t0.- Salir.");
    printf("\n\t\tDe una opción: "); scanf("%i", &opc);
    opciones(opc);
}

int opciones(int a){
    switch (a){
        case 1:
        clear();
            puts("\t\t\tUSO DEL BREAK");
            printf("\n\t\tDe el número donde se rompera la cuenta: "); scanf("%i", &n);
            Break(n);
            break;
        case 2:
            clear();
            puts("\t\t\tUSO DEL CONTINUE");
            printf("\n\t\tDe el número a ignorar: "); scanf("%i", &n);
            Continue(n);
            break;
        case 0:
            clear();
            printf("\n\t\tHasta la proxima...");
            break;
        default:
            clear();
            printf("\n\t\tDe una opción correcta...\n");
            break;
    }
}

int Break(int a){
    for(int i = 0; i < 100; i++){
        if(i == a)
            break;
        printf("%i.\n", i);
    }
}

int Continue(int a){
    for(int i = 0; i <= 20; i++){
        if(i == a)
            continue;
        printf("%i.\n", i);
    }
}