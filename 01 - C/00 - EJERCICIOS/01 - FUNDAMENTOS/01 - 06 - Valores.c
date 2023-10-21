/*
** #########################################################################################
**  Archivo         :   06 - Valores.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que visualize la siguiente
**                      informacion en consola.
**                          Char  : [Char ingresado]
**                          String: [String ingresado]
**                          Int   : [Int ingresado]
**                          Float : [Float ingresado]
**                          Double : [Double ingresado]
** #########################################################################################
*/
// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// PROTOTIPO(S) DE FUNCION(ES)
void clear();
void fin();
void cin();

// VARIABLES GLOBALES
char buffer[100];

char cadena[50];
unsigned char c;
short int n = 0;
float f = 0;
double d = 0;

// FUNCION PRINCIPAL
int main(){
    printf("\n\tDe un caracter: ");
    cin();
    sscanf(buffer, "%c", &c);
    clear();

    printf("\n\tDe una cadena de caracter: "); gets(cadena);
    clear();

    printf("\n\tDe un numero entero: "); scanf("%i", &n);
    clear();

    printf("\n\tDe un numero con decmal: "); scanf("%f", &f);
    clear();

    printf("\n\tDe un numero grande: "); scanf("%lf", &d);
    clear();

    printf("\n\tChar: %c\n\tString: %s\n\tInt: %i\n\tFloat: %.2f\n\tDouble: %.2lf\n", c, cadena, n, f, d);
    fin();
    return 0;
}

// FUNCIONES
void clear(){
    system("cls || clear");
}

void fin(){
    puts("\n\n\tFin del programa...");
    getchar();
}

void cin(){
    fgets(buffer, sizeof(buffer), stdin);
}