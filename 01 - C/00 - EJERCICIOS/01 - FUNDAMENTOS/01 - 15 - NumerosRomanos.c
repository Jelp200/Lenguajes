/*
** #########################################################################################
**  Archivo         :   15 - NumerosRomanos.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que convierta un número entero a su equivalente
**                      en número romano.
** #########################################################################################
*/
// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// VARIABLES GLOBALES
int n = 0;
int U = 0, D = 0, C = 0, M = 0;

// FUNCION PRINCIPAL
int main(){
    printf("\tDe un número a convertir: "); scanf("%i", &n);

    U = n % 10;
    n /= 10;

    D = n % 10;
    n /= 10;

    C = n % 10;
    n /= 10;

    M = n % 10;
    n /= 10;

    switch (M){
        case 1: printf("M");        break;
        case 2: printf("MM");       break;
        case 3: printf("MMM");      break;
        case 4: printf("/IV");      break;
        case 5: printf("/V");       break;
        case 6: printf("/VI");      break;
        case 7: printf("/VII");     break;
        case 8: printf("/VIII");    break;
        case 9: printf("/IX");      break;
    }

    switch (C){
        case 1: printf("C");       break;
        case 2: printf("CC");      break;
        case 3: printf("CCC");     break;
        case 4: printf("CD");      break;
        case 5: printf("D");       break;
        case 6: printf("DC");      break;
        case 7: printf("DCC");     break;
        case 8: printf("DCCC");    break;
        case 9: printf("CM");      break;
    }

    switch (D){
        case 1: printf("X");       break;
        case 2: printf("XX");      break;
        case 3: printf("XXX");     break;
        case 4: printf("XL");      break;
        case 5: printf("L");       break;
        case 6: printf("LX");      break;
        case 7: printf("LXX");     break;
        case 8: printf("LXXX");    break;
        case 9: printf("XC");      break;
    }

    switch (U){
        case 1: printf("I");       break;
        case 2: printf("II");      break;
        case 3: printf("III");     break;
        case 4: printf("IV");      break;
        case 5: printf("V");       break;
        case 6: printf("VI");      break;
        case 7: printf("VII");     break;
        case 8: printf("VIII");    break;
        case 9: printf("IV");      break;
    }
    return 0;
}