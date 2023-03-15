/*
** #########################################################################################
**      Archivo: 12 - 01 - OperacionesBasicas.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**              Realizar un programa que a travez de funciones no recursivas pueda realizar
**              operaciones básicas entre dos numeros.
** #########################################################################################
*/

// Directivas de preprocesador
#include <stdio.h>
#include <stdlib.h>

// Variabes globales
float n1, n2;

// Prototipo(s) de funcion(es)
void Suma();
void Resta();
void Producto();
void Cociente();
void Menu();

// Main function
int main(){
    Menu();
    return EXIT_SUCCESS;
}

// Funcion(es)
void Menu(){
    int opc;

    do{
        clear();

        puts("\n\t\t\tOPERACIONES");
        puts("\t\t1.- Suma.");
        puts("\t\t2.- Resta.");
        puts("\t\t3.- Producto.");
        puts("\t\t4.- Cociente.");
        puts("\t\t0.- Salir.");
        printf("\n\t\tDe una opcion: "); scanf("%i", &opc);

        switch(opc){
            case 1:
                Suma();
                puts("\n");
                system("pause");
                break;
            case 2:
                Resta();
                puts("\n");
                system("pause");
                break;
            case 3:
                Producto();
                puts("\n");
                system("pause");
                break;
            case 4:
                Cociente();
                puts("\n");
                system("pause");
                break;
            case 0:
                puts("\t\tHasta la proxima...");
                puts("\n");
                system("pause");
                break;
            default:
                puts("\t\tDe una opcion correcta...");
                puts("\n");
                system("pause");
                break;
        }
    }while(opc != 0);

}

void clear(){
    system("cls");
}

void Suma(){
    float S = 0;
    clear();
    puts("\n\t\t\tSUMA");
    printf("\t\tDe el primer numero: "); scanf("%f", &n1);
    printf("\t\tDe el segundo numero: "); scanf("%f", &n2);

    S = n1 + n2;

    printf("\n\t\t%.2f + %.2f = %.2f", n1, n2, S);
}

void Resta(){
    float R = 0;
    clear();
    puts("\n\t\t\tRESTA");
    printf("\t\tDe el primer numero: "); scanf("%f", &n1);
    printf("\t\tDe el segundo numero: "); scanf("%f", &n2);

    R = n1 - n2;

    printf("\n\t\t%.2f - %.2f = %.2f", n1, n2, R);
}

void Producto(){
    float M = 0;
    clear();
    puts("\n\t\t\tPRODUCTO");
    printf("\t\tDe el primer numero: "); scanf("%f", &n1);
    printf("\t\tDe el segundo numero: "); scanf("%f", &n2);

    M = n1 * n2;

    printf("\n\t\t%.2f * %.2f = %.2f", n1, n2, M);
}

void Cociente(){
    float D = 0;
    clear();
    puts("\n\t\t\tCOCIENTE");
    printf("\t\tDe el primer numero: "); scanf("%f", &n1);
    printf("\t\tDe el segundo numero: "); scanf("%f", &n2);

    D = n1 / n2;

    printf("\n\t\t%.2f / %.2f = %.2f", n1, n2, D);
}