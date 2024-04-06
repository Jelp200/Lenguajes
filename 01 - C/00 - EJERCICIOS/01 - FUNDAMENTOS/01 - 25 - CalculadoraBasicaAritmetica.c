/*
** #########################################################################################
**  Archivo         :   25 - CalculadoraBasicaAritmetica.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que permita realizar las operaciones básicas
**                      comunes gracias a funciones no recursivas.
** #########################################################################################
*/

// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>                                                     // Libreria Unix

// PROTOTIPO(S) DE FUNCION(ES)
void clear(){
    system("cls || clear");
}
void pausa(){
    fflush(stdout);
    system("read -p '\n\t\tPresione enter para continuar...' t");       // Código en bash
}

void Entrada();
void Menu();
int Opciones(int a);

void Suma();
void Resta();
void Producto();
void Cociente();

// VARIABLES GLOBALES
int opc, nE = 0;
float n = 0, S = 0, R = 0, M = 0, num = 0, den = 0, D = 0;

// DEFINE(S)
#define RESET   "\x1B[0m"
#define FVERDE  "\x1B[42m"
#define FBLANCO "\x1B[47m"
#define FROJO   "\x1B[41m"
#define ROJO    "\x1B[31m"
#define NEGRITA   "\x1B[1m"

// FUNCION PRINCIPAL
int main(){
    Entrada();
    return 0;
}

// FUNCION(ES)
void Entrada(){
    clear();
    printf(FVERDE "          " FBLANCO "          " FROJO "          \n" RESET);
    printf(FVERDE "          " FBLANCO "          " FROJO "          " RESET "\tAUTOR: Jelp200\n");
    printf(FVERDE "          " FBLANCO "          " FROJO "          \n" RESET);
    printf(FVERDE "          " FBLANCO "    " RESET "  " FBLANCO "    " FROJO "          " RESET "\tESCUELA: ESIME Z\n");
    printf(FVERDE "          " FBLANCO "          " FROJO "          \n" RESET);
    printf(FVERDE "          " FBLANCO "          " FROJO "          " RESET "\tCARRERA: ICE\n");
    printf(FVERDE "          " FBLANCO "          " FROJO "          \n" RESET);
    sleep(3);
    do{
        Menu();
    }while(opc != 0);
}

void Menu(){
    pausa();
    clear();
    puts("\n\t\t\tCALCULADORA BÁSICA ARITMETICA");
    puts("\t\t1.- Suma.");
    puts("\t\t2.- Resta.");
    puts("\t\t3.- Producto.");
    puts("\t\t4.- Cociente.");
    puts("\t\t0.- Salir.");
    printf("\n\t\tDe una opción: "); scanf("%i", &opc);
    Opciones(opc);
}

int Opciones(int a){
    switch (a){
        case 1:
            Suma();
            break;
        
        case 2:
            Resta();
            break;
        
        case 3:
            Producto();
            break;

        case 4:
            Cociente();
            break;
        
        case 0:
            clear();
            puts(ROJO NEGRITA "\t\tHasta la proxima..." RESET);
            break;

        default:
            break;
    }
}

void Suma(){
    clear();
    puts("\n\t\t\tSUMA");
    printf("\n\t\tDe el número de elementos a sumar: "); scanf("%i", &nE);
    for(int i = 0; i < nE; i++){
        printf("\n\t\tDe el %i numero: ", i + 1); scanf("%f", &n);
        S += n;
    }
    printf("\n\n\t\tLa suma total es: %.2f", S);
}

void Resta(){
    clear();
    puts("\n\t\t\tResta");
    printf("\n\t\tDe el número de elementos a restar: "); scanf("%i", &nE);
    for(int i = 0; i < nE; i++){
        printf("\n\t\tDe el %i numero: ", i + 1); scanf("%f", &n);
        R -= n;
    }
    printf("\n\n\t\tLa resta total es: %.2f", R);
}

void Producto(){
    clear();
    puts("\n\t\t\tProducto");
    printf("\n\t\tDe el número de elementos a multiplicar: "); scanf("%i", &nE);
    for(int i = 0; i < nE; i++){
        printf("\n\t\tDe el %i numero: ", i + 1); scanf("%f", &n);
        M *= n;
    }
    printf("\n\n\t\tLa resta total es: %.2f", M);
}

void Cociente(){
    clear();
    puts("\n\t\t\tCociente");
    printf("\n\t\tDe el numerador: "); scanf("%i", &num);
    printf("\n\t\tDe el denominador: "); scanf("%i", &den);
    if(den == 0)
        printf("\n\n\t\tNo se puede realizar la operación seleccionada");    
    else{
        D = num / den;
        printf("\n\n\t\tLa división es: %.2f", D);
    }
}