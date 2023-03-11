/*
** #########################################################################################
**      Archivo: 07 - 04 - CalculadoraBasicaDeElectronica.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Realizar un programa que pueda calcular la resistencia y potencia dados un V y I.
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Varibales globales.
float V, I, R = 0, P = 0;
int opc;

// Main Function.
int main(){
    system("cls");
    puts("\n\t\t\tCALCULADORA ELECTRONICA BASICA");
    puts("\t\t1.- Ingresar Voltaje.");
    puts("\t\t2.- Ingresar Corriente.");
    puts("\t\t3.- Ver resistencia.");
    puts("\t\t4.- Ver Potencia.");
    puts("\t\t5.- Salir.");
    printf("\n\t\tDe una opcion: "); scanf("%i", &opc);

    switch (opc){
    case 1:
        system("cls");
        puts("\n\t\t\tINGRESAR VOLTAJE");
        printf("\n\t\tDe el voltaje: "); scanf("%f", &V);
        return main();
        break;

    case 2:
        system("cls");
        puts("\n\t\t\tINGRESAR CORRIENTE");
        printf("\n\t\tDe la corriente: "); scanf("%f", &I);
        return main();
        break;

    case 3:
        R = V / I;
        system("cls");
        puts("\n\t\t\tRESISTENCIA");
        printf("\n\t\tR = %.2f Ohms\n\n", R);
        system("pause");
        return main();
        break;

    case 4:
        P = V * I;
        system("cls");
        puts("\n\t\t\tPOTENCIA");
        printf("\n\t\tP = %.2f Watts\n\n", P);
        system("pause");
        return main();
        break;

    case 5:
        puts("\n\t\tHasta pronto...");
        break;

    default:
        system("cls");
        puts("\n\t\t\tDE UNA OPCION CORRECTA...");
        return main();
        break;
    }
}