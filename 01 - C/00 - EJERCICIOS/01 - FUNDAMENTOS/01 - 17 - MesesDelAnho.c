/*
** #########################################################################################
**  Archivo         :   17 - Cajero.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que pueda visualizar los meses del año a traves
**                      de un número que digite el usuario.
** #########################################################################################
*/

// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// PROTOTIPO(S) DE FUNCION(ES)
void clear();
int meses(int a);

// VARIABLES GLOBALES
int opc = 0;

// FUNCION PRINCIPAL
int main(){
    puts("\n\t\t\tMESES DEL AÑO");
    printf("\n\t\tDe un número: "); scanf("%i", &opc);
    meses(opc);
    return 0;
}

// FUNCION(ES)
void clear(){
    system("cls || clear");
}

int meses(int a){
    switch(a){
    case 1:
        clear();
        puts("\n\t\t\tENERO");
        break;
    case 2:
        clear();
        puts("\n\t\t\tFEBRERO");
        break;
    case 3:
        clear();
        puts("\n\t\t\tMARZO");
        break;
    case 4:
        clear();
        puts("\n\t\t\tABRIL");
        break;
    case 5:
        clear();
        puts("\n\t\t\tMAYO");
        break;
    case 6:
        clear();
        puts("\n\t\t\tJUNIO");
        break;
    case 7:
        clear();
        puts("\n\t\t\tJULIO");
        break;
    case 8:
        clear();
        puts("\n\t\t\tAGOSTO");
        break;
    case 9:
        clear();
        puts("\n\t\t\tSEPTIEMBRE");
        break;
    case 10:
        clear();
        puts("\n\t\t\tOCTUBRE");
        break;
    case 11:
        clear();
        puts("\n\t\t\tNOVIEMBRE");
        break;
    case 12:
        clear();
        puts("\n\t\t\tDICIEMBRE");
        break;
    default:
        return main();
        break;
    }
}