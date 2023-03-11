/*
** #########################################################################################
**      Archivo: 07 - 01 - NumerosRomanos.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Hacer un programa que convierta numeros enteros a numeros romanos
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Varibales globales.
int n, U, D, C, M, MM;

// Main Function
int main(){

    printf("\tDe un numero: "); scanf("%i", &n);

    //! CONVERSION UNIDADES
    U = n % 10;                                 // Las unidades se establecen gracias al modulo/residuo de la division del numero / 10.
    n = n / 10;                                 // Actualizamos el numero para realizar la siguiente operación.

    //! CONVERSION DECENAS
    D = n % 10;                                 // Las decenas se establecen gracias al modulo/residuo de la division del numero / 10.
    n = n / 10;                                 // Actualizamos el numero para realizar la siguiente operación.

    //! CONVERSION CENTENAS
    C = n % 10;                                 // Las centenas se establecen gracias al modulo/residuo de la division del numero / 10.
    n = n / 10;                                 // Actualizamos el numero para realizar la siguiente operación.

    //! CONVERSION MILLARES
    M = n % 10;                                 // Los millares se establecen gracias al modulo/residuo de la division del numero / 10.
    n = n / 10;                                 // Actualizamos el numero para realizar la siguiente operación.

    //! IMPRIMIMOS LOS MILLARES
    switch(M){
        case 1: printf("M");    break;
        case 2: printf("MM");   break;
        case 3: printf("MMM");  break;
        case 4: printf("/IV");  break;
        case 5: printf("/V");    break;
        case 6: printf("/VI");   break;
        case 7: printf("/VII");  break;
        case 8: printf("/VIII"); break;
        case 9: printf("/IX");   break;
    }

    //! IMPRIMIMOS LAS CENTENEAS
    switch(C){
        case 1: printf("C");    break;
        case 2: printf("CC");   break;
        case 3: printf("CCC");  break;
        case 4: printf("CD");   break;
        case 5: printf("D");    break;
        case 6: printf("DC");   break;
        case 7: printf("DCC");  break;
        case 8: printf("DCCC"); break;
        case 9: printf("CM");   break;
    }

    //! IMPRIMIMOS LAS DECENAS
    switch(D){
        case 1: printf("X");    break;
        case 2: printf("XX");   break;
        case 3: printf("XXX");  break;
        case 4: printf("XL");   break;
        case 5: printf("L");    break;
        case 6: printf("LX");   break;
        case 7: printf("LXX");  break;
        case 8: printf("LXXX"); break;
        case 9: printf("XC");   break;
    }

    //! IMPRIMIMOS LAS UNIDADES
    switch(U){
        case 1: printf("I");    break;
        case 2: printf("II");   break;
        case 3: printf("III");  break;
        case 4: printf("IV");   break;
        case 5: printf("V");    break;
        case 6: printf("VI");   break;
        case 7: printf("VII");  break;
        case 8: printf("VIII"); break;
        case 9: printf("IX");   break;
    }
	return 0;
}