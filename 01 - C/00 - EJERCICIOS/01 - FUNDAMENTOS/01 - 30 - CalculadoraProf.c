/*
** #########################################################################################
**  Archivo: 01 - 30 - CalculadoraProf.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**              Realizar un programa que a travez de funciones con retorno pueda realizar
**              operaciones básicas y avanzadas.
** #########################################################################################
*/

// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// VARIABLES GLOBALES
int opc;
int ele, n1, n2;
int aux = 0;

float n, e;

// PROTOTIPO(S) DE FUNCION(ES)
void clear(){
    system("cls || clear");
}
void pausa(){
    fflush(stdout);
    system("read -p '\n\t\tPresione enter para continuar...' t");       // Código en bash
}

void mainMenu();
void despedida();

void basicMenu();
float Suma(float n);
float Resta(float n);
float Producto(float n);
float Cociente(float n1, float n2);

void advanceMenu();
float Ceil(float n);
float Floor(float n);
float Pow(float n, float e);
float Fabs(float n);
float Sqrt(float n);

// FUNCION PRINCIPAL
int main(){
    mainMenu();

    return EXIT_SUCCESS;
}

// FUNCION(ES)
void mainMenu(){
    do{
        clear();
        puts("\t\t1.- Operaciones basicas.");
        puts("\t\t2.- Operaciones avanzadas.");
        puts("\t\t0.- Salir.");
        printf("\n\t\tDe una opcion: "); scanf("%i", &opc);
        switch(opc){
        case 1:
            basicMenu();
            break;
        case 2:
            advanceMenu();
            break;
        case 0:
            despedida();
            break;
        default:
            puts("\t\tDe una opcion correcta...");
            pausa();
            break;
        }
        
    }while(opc != 0);
}

void basicMenu(){
    do{
        clear();
        puts("\t\t1.- Suma.");
        puts("\t\t2.- Resta.");
        puts("\t\t3.- Producto.");
        puts("\t\t4.- Cociente.");
        puts("\t\t5.- Regresar.");
        printf("\n\t\tDe una opcion: "); scanf("%i", &opc);

        switch(opc){
            case 1:
                clear();
                printf("\n\t\tDe el numero de elementos a sumar: "); scanf("%i", &ele);
                printf("\n\t\tEl resultado es: %.2f", Suma(ele));
                pausa();
                break;
            case 2:
                clear();
                printf("\n\t\tDe el numero de elementos a restar: "); scanf("%i", &ele);
                printf("\n\t\tEl resultado es: %.2f", Resta(ele));
                pausa();
                break;
            case 3:
                clear();
                printf("\n\t\tDe el numero de elementos a del producto: "); scanf("%i", &ele);
                printf("\n\t\tEl resultado es: %.2f", Producto(ele));
                pausa();
                break;
            case 4:
                clear();
                printf("\n\t\tDe el numerador: "); scanf("%i", &n1);
                printf("\n\t\tDe el denominador: "); scanf("%i", &n2);
                printf("\n\t\tEl resultado entre %.2f y %.2f es: %.2f", n1, n2, Cociente(n1, n2));
                pausa();
                break;
            case 5:
                puts("\n\t\tRegresando al menu anterior...");
                pausa();
                break;
            default:
                puts("\t\tDe una opcion correcta...");
                pausa();
                break;
        }
    }while(opc != 5);
}

float Suma(float n){
    float S = 0, nE;

    for(int i = 1; i <= n; i++){
        clear();
        printf("\t\tDe el %i elemento: ", i); scanf("%f", &nE);
        S += nE;
    }
    return S;
}

float Resta(float n){
    float R = 0, nE;

    for(int i = 1; i <= n; i++){
        clear();
        printf("\t\tDe el %i elemento: ", i); scanf("%f", &nE);
        R = nE - R;
    }
    return R;
}

float Producto(float n){
    float P = 1, nE;

    for(int i = 1; i <= n; i++){
        clear();
        printf("\t\tDe el %i elemento: ", i); scanf("%f", &nE);
        P *= nE;
    }
    return P;
}

float Cociente(float n1, float n2){
    float C = 0;
    C = n1 /  n2;
    return C;
}

void advanceMenu(){
    do{
        clear();
        puts("\t\t1.- Redondeo int >.");
        puts("\t\t2.- Redondeo int <.");
        puts("\t\t3.- Potencia.");
        puts("\t\t4.- Valor absoluto.");
        puts("\t\t5.- Raiz cuadrada.");
        puts("\t\t6.- Regresar.");
        printf("\n\t\tDe una opcion: "); scanf("%i", &opc);

        switch(opc){
            case 1:
                clear();
                printf("\n\t\tDe el numero a redondear: "); scanf("%f", &n);
                printf("\n\t\tEl redondeo de %.4f al entero mayor mas cercano es: %.2f", n, Ceil(n));
                pausa();
                break;
            case 2:
                clear();
                printf("\n\t\tDe el numero a redondear: "); scanf("%f", &n);
                printf("\n\t\tEl redondeo de %.4f al entero menor mas cercano es: %.2f", n, Floor(n));
                pausa();
                break;
            case 3:
                clear();
                printf("\n\t\tDe un numero: "); scanf("%f", &n);
                printf("\t\tDe la potencia: "); scanf("%f", &e);
                printf("\n\t\t\t%.2f a la %.2f es: %.2f", n, e, Pow(n, e));
                pausa();
                break;
            case 4:
                clear();
                printf("\n\t\tDe un numero: "); scanf("%f", &n);
                printf("\n\t\tEl |%.2f| es: %.2f", n, Fabs(n));
                pausa();
                break;
            case 5:
                clear();
                printf("\n\t\tDe un numero: "); scanf("%f", &n);
                printf("\n\t\tLa raiz cuadrada de %.2f es: %.2f", n, Sqrt(n));
                pausa();
                break;
            case 6:
                puts("\n\t\tRegresando al menu anterior...");
                pausa();
                break;
            default:
                puts("\t\tDe una opcion correcta...");
                pausa();
                break;
        }
    }while(opc != 6);
}

float Ceil(float n){
    int aux = 0;
    aux = ceil(n);
    return aux;
}

float Floor(float n){
    int aux = 0;
    aux = floor(n);
    return aux;
}

float Pow(float n, float e){
    float aux = 0;
    aux = pow(n, e);
    return aux;
}

float Fabs(float n){
    float aux = 0;
    aux = fabs(n);
    return aux;
}

float Sqrt(float n){
    float aux = 0;
    aux = sqrt(n);
    return aux;
}

void despedida(){
    clear();
    puts("\n\t\tHasta pronto...");
    pausa();
}