/*
** #########################################################################################
**      Archivo: 12 - 05 - ConversionTemp.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**              Realizar un programa que pueda a raiz de funciones recursivas realizar la
**              conversion de temperatura de Celsius a Kelvin y Farenheit.
**
**              °K = 275 + °C
**              °F = (°C * 1.8) + 32
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>
#include <stdlib.h>

// Prototipo(s) de funcion(es)
float Kelvin(float C);
float Farenheit(float C);

void Menu();

// Variables globales
int opc;
float Celcius = 0;

// Main function
int main(){

    Menu();

    return EXIT_SUCCESS;
}

// Funcion(es)
void clear(){
    system("cls");
}

void wit(){
    puts("\n");
    system("pause");
}

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
                wit();
                break;
            case 2:
                clear();
                puts("\n\t\t\tCALCULADORA TEMPERATURAS");
                printf("\n\t\t°C = %.2f", Celcius);
                printf("\n\t\t°K = %.2f", Kelvin(Celcius));
                wit();
                break;
            case 3:
                clear();
                puts("\n\t\t\tCALCULADORA TEMPERATURAS");
                printf("\n\t\t°C = %.2f", Celcius);
                printf("\n\t\t°F = %.2f", Farenheit(Celcius));
                wit();
                break;
            case 0:
                puts("\n\t\tSaliendo del sistema...");
                wit();
                break;
            default:
                puts("\n\t\tDe una opcion correcta...");
                wit();
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