/*
** #########################################################################################
**  Archivo         :   18 - CalculadoraBasicaDeElectronica.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que pueda rcalcular la resistencia y potencia
**                      dados un V y I.
** #########################################################################################
*/

// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// PROTOTIPO(S) DE FUNCION(ES)
void clear();
void menu();
int opciones(int a);

float Res(float a, float b);
float Pot(float a, float b);

// VARIABLES GLOBALES
int opc = 0;
float R = 0, P = 0, V = 0, I = 0;

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
    clear();
    puts("\n\t\t\tCALCULADORA ELECTRONICA BÁSICA");
    printf("\n\t\t\tV = %.2f | I = %.2f", V, I);
    puts("\n\n\t\t1.- Ingresar voltaje.");
    puts("\t\t2.- Ingresar corriente.");
    puts("\t\t3.- Resistencia.");
    puts("\t\t4.- Potencia.");
    puts("\t\t5.- Salir.");
    printf("\n\t\tDe una opción: "); scanf("%i", &opc);
    opciones(opc);
}

int opciones(int a){
    switch(a){
    case 1:
        clear();
        puts("\n\t\t\tINGRESAR VOLTAJE");
        printf("\n\t\tDe el voltaje: "); scanf("%f", &V);
        return main();
        break;
    case 2:
        clear();
        puts("\n\t\t\tINGRESAR CORRIENTE");
        printf("\n\t\tDe la corriente: "); scanf("%f", &I);
        return main();
        break;
    case 3:
        clear();
        puts("\n\t\t\tRESISTENCIA");
        printf("\n\t\tR = %.2f volts / %.2f amperes = %.2f ohms", V, I, Res(V, I));
        return main();
        break;
    case 4:
        clear();
        puts("\n\t\t\tPOTENCIA");
        printf("\n\t\tI = %.2f volts * %.2f amperes = %.2f watts", V, I, Pot(V, I));
        return main();
        break;
    case 5:
        clear();
        puts("\n\t\tHasta pronto...");
        break;
    default:
        clear();
        puts("\n\t\t\tDE UNA OPCION CORRECTA...");
        return main();
        break;
    }
}

float Res(float a, float b){
    float r = a / b;
    return r;
}

float Pot(float a, float b){
    float p = a * b;
    return p;
}