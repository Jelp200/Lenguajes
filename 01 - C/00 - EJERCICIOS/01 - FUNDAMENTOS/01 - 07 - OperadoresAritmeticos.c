/*
** #########################################################################################
**  Archivo         :   07 - OperadoresAritmeticos.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que haga las operaciones
**                      aritmeticas entre dos numeros.
** #########################################################################################
*/
// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// PROTOTIPO(S) DE FUNCION(ES)
void clear();
void fin();

void menu();

float suma(float n1, float n2);
float resta(float n1, float n2);
float producto(float n1, float n2);
float cociente(float n1, float n2);
int modulo(int n1, int n2);

// VARIABLES GLOBALES
int opc = 0;
float a = 0, b = 0;
int a1 = 0, b1 = 0;

// FUNCIÓN PRINCIPAL
int main(){
    menu();
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

float suma(float n1, float n2){
    float S = 0;
    S = n1 + n2;
    return S;
}

float resta(float n1, float n2){
    float R = 0;
    R = n1 - n2;
    return R;
}

float producto(float n1, float n2){
    float P = 0;
    P = n1 * n2;
    return P;
}

float cociente(float n1, float n2){
    float C = 0;
    C = n1 / n2;
    return C;
}

int modulo(int n1, int n2){
    int M = 0;
    M = n1 % n2;
    return M;
}

void menu(){
    do{
        puts("\n\t\t\tMENU DE OPCIONES");
        puts("\t\t1. Suma.");
        puts("\t\t2. Resta.");
        puts("\t\t3. Producto.");
        puts("\t\t4. Cociente.");
        puts("\t\t5. Modulo.");
        puts("\t\t6. Salir.");
        printf("\n\t\tDe una opcion: "); scanf("%i", &opc);

        switch (opc){
        case 1:
            clear();
            puts("\n\t\t\tSUMA");
            printf("\n\t\tDe el 1er numero: "); scanf("%f", &a);
            printf("\n\t\tDe el 2do numero: "); scanf("%f", &b);
            printf("\n\t\t%.2f + %.2f = %.2f", a, b, suma(a, b));
            break;
        
        case 2:
            clear();
            puts("\n\t\t\tRESTA");
            printf("\n\t\tDe el 1er numero: "); scanf("%f", &a);
            printf("\n\t\tDe el 2do numero: "); scanf("%f", &b);
            printf("\n\t\t%.2f - %.2f = %.2f", a, b, resta(a, b));
            break;

        case 3:
            clear();
            puts("\n\t\t\tPRODUCTO");
            printf("\n\t\tDe el 1er numero: "); scanf("%f", &a);
            printf("\n\t\tDe el 2do numero: "); scanf("%f", &b);
            printf("\n\t\t%.2f * %.2f = %.2f", a, b, producto(a, b));
            break;

        case 4:
            clear();
            puts("\n\t\t\tCOCENTE");
            printf("\n\t\tDe el 1er numero: "); scanf("%f", &a);
            printf("\n\t\tDe el 2do numero: "); scanf("%f", &b);
            printf("\n\t\t%.2f / %.2f = %.2f", a, b, cociente(a, b));
            break;

        case 5:
            clear();
            puts("\n\t\t\tMODULO");
            printf("\n\t\tDe el 1er numero: "); scanf("%i", &a1);
            printf("\n\t\tDe el 2do numero: "); scanf("%i", &b1);
            printf("\n\t\t%i mod %i = i", a, b, modulo(a, b));
            break;

        case 6:
            clear();
            fin();
            break;

        default:
            puts("\n\t\tDe una opción correcta...");
            break;
        }
    }while(opc != 6);
}