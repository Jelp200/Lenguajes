/*
** #########################################################################################
**  Archivo         :   22 - Menu.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que a travez de un menú el usuario pueda ya sea
**                      visualizar un arbol hecho de asteriscos, imprimir el abecedario, la
**                      serie de Fibonacci y el código ASCII.
** #########################################################################################
*/

// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// PROTOTIPO(S) DE FUNCION(ES)
void menu();

void clear(){
    system("cls || clear");
}

void pause(){
    fflush(stdout);
    system("read -p '\n\t\tPresione enter para continuar...' t");       // Código en bash
}

void despedida(){
    clear();
    puts("\n\t\tHasta la proxima...");
    pause();
}

void ASCII();
void Abcdario();
void Arbol();
void Fibonacci();

// VARIABLES GLOBALES
char t;
int opc, n, nFilas = 0;
int x = 0, y = 1, z = 1;

// FUNCION PRINCIPAL
int main(){
    menu();
    return 0;
}

// FUNCION(ES)
void menu(){
    do{
        clear();
        puts("\n\t\t\tMENÚ");
        puts("\t\t1.- ASCII");
        puts("\t\t2.- Abcdario");
        puts("\t\t3.- Arbol");
        puts("\t\t4.- Fibonacci");
        puts("\t\t5.- Salir");
        printf("\n\t\tDe una opción: "); scanf("%i", &opc);
        
        switch (opc){
            case 1:
                ASCII();
                break;
            
            case 2:
                Abcdario();
                break;
            
            case 3:
                Arbol();
                break;

            case 4:
                Fibonacci();
                break;
            case 5:
                despedida();
                break;

            default:
                clear();
                pause();
                break;
        }
    }while (opc != 5);
    
}

void ASCII(){
    clear();
    puts("\n\t\t\tASCII");
    for(int i = 0; i <= 254; i++)
        printf("%c\n", i);
    puts("\n");
    pause();
}

void Abcdario(){
    clear();
    puts("\n\t\t\tABCDARIO");
    for(int i = 65; i <= 90; i++)
        printf("%c\n", i);
    for(int i = 95; i <= 121; i++)
        printf("%c\n", i);
    puts("\n");
    pause();
}

void Arbol(){
    clear();
    puts("\n\t\t\tARBOL");
    printf("\n\t\tEscribe el numero de filas: "); scanf("%i", &nFilas);
    for(int i = 0; i < nFilas; ++i){
        for(int j = 0; j <= i; ++j)
            printf("*");
        printf("\n");
    }
    puts("\n");
    pause();
}

void Fibonacci(){
    clear();
    puts("\n\t\t\tFIBONACCI");
    printf("\n\t\tEscribe el numero de elementos: "); scanf("%i", &n);
    // Caso base
    printf("\n\t\t0, 1");
    for(int i = 1; i < n; ++i){
        z = x + y;
        x = y;
        y = z;
        printf(", %i", z);
    }
    puts("\n");
    pause();
}