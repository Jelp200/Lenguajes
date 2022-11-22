/*
** #########################################################################################
**  Archivo         :   22 - menuFnc.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Code::Blocks / Visual Studio Code
**  Compilador      :   C/C++ Compiler (Windows)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que implemente un menu y iperaciones básicas
**                      con funciones.
** #########################################################################################
*/

// Directivas de preprocesador.
#include <stdio.h>
#include <stdlib.h>

// Protitopo(s) de funcion(es).
void Menu();
int SUMA(int n1, int n2);
int RESTA(int n1, int n2);
int PRODUCTO(int n1, int n2);
float COCIENTE(float n1, float n2);

// Variable(s) global(es).
int N1, N2;

// Funcion principal.
int main(void){
    Menu();
    return EXIT_SUCCESS;
}

// Funcion(es).
void Menu(){
    int opc;

    do{
        CLS();
        puts("\n\t\t\tCALCULADORA BASICA");
        puts("\t\t1.- Suma");
        puts("\t\t2.- Resta");
        puts("\t\t3.- Multiplicacion");
        puts("\t\t4.- Division");
        puts("\t\t0.- Salir");
        printf("\n\t\tDe una opcion: "); scanf("%i", &opc);
        switch (opc){
        case 1:
            CLS();
            puts("\n\t\t\tSUMA");
            printf("\n\t\tDe el primer numero: "); scanf("%i", &N1);
            printf("\t\tDe el segundo numero: "); scanf("%i", &N2);
            printf("\n\t\tLa suma es: %i", SUMA(N1, N2));
            Wait();
            break;

        case 2:
            CLS();
            puts("\n\t\t\tRESTA");
            printf("\n\t\tDe el primer numero: "); scanf("%i", &N1);
            printf("\t\tDe el segundo numero: "); scanf("%i", &N2);
            printf("\n\t\tLa resta es: %i", RESTA(N1, N2));
            Wait();
            break;

        case 3:
            CLS();
            puts("\n\t\t\tPRODUCTO");
            printf("\n\t\tDe el primer numero: "); scanf("%i", &N1);
            printf("\t\tDe el segundo numero: "); scanf("%i", &N2);
            printf("\n\t\tEl producto es: %i", PRODUCTO(N1, N2));
            Wait();
            break;

        case 4:
            CLS();
            puts("\n\t\t\tCOCIENTE");
            printf("\n\t\tDe el primer numero: "); scanf("%i", &N1);
            printf("\t\tDe el segundo numero: "); scanf("%i", &N2);

            if (N2 != 0) printf("\n\t\tEl cociente es: %.2f", COCIENTE(N1, N2));
            else printf("\n\t\tEl cociente no puede realizarse.");
            
            Wait();
            break;

        case 0:
            puts("\n\t\t\tSaliendo del sistema...");
            break;
        default:
            break;
        }
    } while (opc != 0);
}

int SUMA(int n1, int n2){
    int S = 0;

    S = n1 + n2;

    return S;

}

int RESTA(int n1, int n2){
    int R = 0;

    R = n1 - n2;

    return R;

}

int PRODUCTO(int n1, int n2){
    int P = 0;

    P = n1 * n2;

    return P;

}

float COCIENTE(float n1, float n2){
    float C = 0;

    C = n1 / n2;

    return C;

}

void Wait(){
    puts("\n");
    system("PAUSE");
    system("CLS");
}

void CLS(){
    system("CLS");
}