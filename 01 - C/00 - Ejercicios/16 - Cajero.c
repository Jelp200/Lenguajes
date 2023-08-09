/*
** #########################################################################################
**  Archivo         :   16 - Cajero.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que pueda realizar despositos y retiros de un
**                      cajero básico.
** #########################################################################################
*/

// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// PROTOTIPO(S) DE FUNCION(ES)
void clear();
void menu();
int opciones(int a);

// VARIABLES GLOBALES
int opc = 0;
float saldo = 100, nSaldo = 0, rSaldo = 0;

// FUNCION PRINCIPAL
int main(){
    menu();
    return 0;
}

// FUNCION(ES)
void clear(){
    system("cls || clear");
}

void menu(){
    clear();
    puts("\n\t\t\tCAJERO BÁSICO");
    printf("\n\t\t\tSaldo: $%.2f", saldo);
    puts("\n\n\t\t1.- Ingresar saldo.");
    puts("\t\t2.- Retirar saldo.");
    puts("\t\t3.- Salir.");
    printf("\n\t\tIngrese una opción: "); scanf("%i", &opc);
    opciones(opc);
}

int opciones(int a){
    switch (a){
    case 1:
        clear();
        puts("\n\t\t\tINGRESAR SALDO");
        printf("\n\t\tDe el saldo a ingresar: "); scanf("%f", &nSaldo);
        
        saldo += nSaldo;

        puts("\n\t\t1.- Regresar.");
        puts("\t\t2.- Salir.");
        printf("\n\t\tDe una opcion: "); scanf("%i", &opc);

        if (opc == 1)
            return main();
        else
            goto etqF;
        break;
    
    case 2:
        clear();
        puts("\n\t\t\tRETIRAR SALDO");
        printf("\n\t\tDe el saldo a retirar: "); scanf("%f", &rSaldo);
        
        saldo -= rSaldo;

        puts("\n\t\t1.- Regresar.");
        puts("\t\t2.- Salir.");
        printf("\n\t\tDe una opcion: "); scanf("%i", &opc);

        if (opc == 1)
            return main();
        else
            goto etqF;
        break;

    case 3:
        clear();
        printf("\n\t\tHasta luego...");
        break;

    default:
        clear();
        printf("\n\t\tDe una opcion correcta");
        return main();
        break;
    }

    etqF:
        clear();
        printf("\n\t\tHasta luego...");
        return 0;
}