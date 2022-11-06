/***********************************************************************
**
**  Archivo         :   11 - mayorEdad.c
**  Proyecto        :   Mr.C (Ejercicios)
**  Herramienta(s)  :   Code::Blocks / Visual Studio Code
**  Compilador      :   C/C++ Compiler (Windows)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa donde el usuario de un numero
**                      del 0 - 10 y este se visualice en binario.
**
***********************************************************************/

// Directivas de preprocesador.
#include <stdio.h>

// Defines.
#define CERO    "0000"
#define UNO     "0001"
#define DOS     "0010"
#define TRES    "0011"
#define CUATRO  "0100"
#define CINCO   "0101"
#define SEIS    "0110"
#define SIETE   "0111"
#define OCHO    "1000"
#define NUEVE   "1001"
#define DIEZ    "1010"

// Variables globales.
unsigned short int n;

// Funcion principal.
int main(void){

    printf("De el número a convertir: "); scanf("%i", &n);

    if((n >= 0) || (n <= 10)){
        switch(n){
            case 0:
                system("cls");
                printf("\n0 en binario es: %s\n", CERO);
                break;
            case 1:
                system("cls");
                printf("\n1 en binario es: %s\n", UNO);
                break;
            case 2:
                system("cls");
                printf("\n2 en binario es: %s\n", DOS);
                break;
            case 3:
                system("cls");
                printf("\n3 en binario es: %s\n", TRES);
                break;
            case 4:
                system("cls");
                printf("\n4 en binario es: %s\n", CUATRO);
                break;
            case 5:
                system("cls");
                printf("\n5 en binario es: %s\n", CINCO);
                break;
            case 6:
                system("cls");
                printf("\n6 en binario es: %s\n", SEIS);
                break;
            case 7:
                system("cls");
                printf("\n7 en binario es: %s\n", SIETE);
                break;
            case 8:
                system("cls");
                printf("\n8 en binario es: %s\n", OCHO);
                break;
            case 9:
                system("cls");
                printf("\n9 en binario es: %s\n", NUEVE);
                break;
            case 10:
                system("cls");
                printf("\n10 en binario es: %s\n", DIEZ);
                break;
            default:
                system("cls");
                printf("\nDe un valor acertado...\n");
                break;
        }
    }

    return 0;
}
