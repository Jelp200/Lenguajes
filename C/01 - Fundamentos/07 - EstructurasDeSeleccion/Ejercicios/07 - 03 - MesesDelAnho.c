/*
** #########################################################################################
**      Archivo: 07 - 03 - MesesDelAnho.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Realizar un programa que pueda visualizar los meses del año a traves de un
**          número que digite el usuario.
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Varibales globales.
int n;

// Main Function
int main(){
    system("cls");
    puts("\n\t\t\tMESES DEL ANHO");
    printf("\n\t\tDe un numero: "); scanf("%i", &n);

    switch (n){
    case 1:
        system("cls");
        puts("\n\t\t\tENERO");
        break;

    case 2:
        system("cls");
        puts("\n\t\t\tFEBRERO");
        break;

    case 3:
        system("cls");
        puts("\n\t\t\tMARZO");
        break;
    
    case 4:
        system("cls");
        puts("\n\t\t\tABRIL");
        break;
    
    case 5:
        system("cls");
        puts("\n\t\t\tMAYO");
        break;

    case 6:
        system("cls");
        puts("\n\t\t\tJUNIO");
        break;

    case 7:
        system("cls");
        puts("\n\t\t\tJULIO");
        break;

    case 8:
        system("cls");
        puts("\n\t\t\tAGOSTO");
        break;

    case 9:
        system("cls");
        puts("\n\t\t\tSEPTIEMBRE");
        break;

    case 10:
        system("cls");
        puts("\n\t\t\tOCTUBRE");
        break;

    case 11:
        system("cls");
        puts("\n\t\t\tNOVIEMBRE");
        break;

    case 12:
        system("cls");
        puts("\n\t\t\tDICIEMBRE");
        break;
    
    default:
        return main();
        break;
    }

    return 0;
}