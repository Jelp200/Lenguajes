/*
** #########################################################################################
**  Archivo: 01 - 29 - ConvTemp.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**              Realizar un programa que pueda a raiz de funciones con retorno realice la
**              conversion de temperatura de Celsius a Kelvin y Farenheit.
**
**              °K = 275 + °C
**              °F = (°C * 1.8) + 32
** #########################################################################################
*/

// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// VARIABLES GLOBALES
int opc;
float Celcius = 0;

// PROTOTIPO(S) DE FUNCION(ES)
void clear(){
    system("cls || clear");
}
void pausa(){
    fflush(stdout);
    system("read -p '\n\t\tPresione enter para continuar...' t");       // Código en bash
}

float Kelvin(float C);
float Farenheit(float C);

void Menu();

// FUNCION PRINCIPAL
int main(){
    Menu();

    return EXIT_SUCCESS;
}

// FUNCION(ES)
void Menu(){
    do{
        clear();
        puts("\n\t\t\tCALCULADORA TEMPERATURAS");
        puts("\t\t1.- Ingresar grados celcius.");
        puts("\t\t2.- Grados Kelvin.");
        puts("\t\t3.- Grados Farenheit.");
        puts("\t\t0.- Salir.");
        printf("\n\t\tDe una opcion: "); scanf("%i", &opc);

        switch(opc){
            case 1:
                clear();
                puts("\n\t\t\tCALCULADORA TEMPERATURAS");
                printf("\n\t\t°C: "); scanf("%f", &Celcius);
                pausa();
                break;
            case 2:
                clear();
                puts("\n\t\t\tCALCULADORA TEMPERATURAS");
                printf("\n\t\t°C = %.2f", Celcius);
                printf("\n\t\t°K = %.2f", Kelvin(Celcius));
                pausa();
                break;
            case 3:
                clear();
                puts("\n\t\t\tCALCULADORA TEMPERATURAS");
                printf("\n\t\t°C = %.2f", Celcius);
                printf("\n\t\t°F = %.2f", Farenheit(Celcius));
                pausa();
                break;
            case 0:
                puts("\n\t\tSaliendo del sistema...");
                pausa();
                break;
            default:
                puts("\n\t\tDe una opcion correcta...");
                pausa();
                break;
        }
    }while(opc != 0);
}

float Kelvin(float C){
    float K = 0;
    K = 275 + C;
    return K;
}

float Farenheit(float C){
    float F = 0;
    F = (C * 1.8) + 32;
    return F;
}