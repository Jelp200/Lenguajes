/*
** #########################################################################################
**  Archivo: 01 - 36 - CalcProgram.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**              Realizar un programa en el cual el usuario pueda jugar en un casino virtual.
**
**                              EL CASINO DEL ESIMIO
**                                  $ [Saldo usuario]
**                      1.- Jugar a los dados.
**                      2.- Jugar a la moneda.
**                      3.- Ponle la cola al burro.
**                      4.- Ingresar saldo.
**                      5.- Retirar dinero.
**                      0.- Salir.
**  Nota:
**              Arreglar perdidas.
** #########################################################################################
*/

// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

// VARIABLES GLOBALES
char Usr[20], Pssw[15];
int intentos = 3;

int opc;

float sldo = 0, nSldo;

int mnda, ddo, aux = 0;

// DEFINE(S)
#define DATABASEU   "El cochino"
#define DATABASEP   "123456789"

// PROTOTIPO(S) DE FUNCION(ES)
void clear(){
    system("cls || clear");
}
void pausa(){
    fflush(stdout);
    system("read -p '\n\t\tPresione enter para continuar...' t");       // Código en bash
}

void Ingreso();
void Menu();

int Dado();
void dadoDibujo(int n);

// FUNCION PRINCIPAL
int main(){
    Ingreso();
    return EXIT_SUCCESS;
}

// FUNCION(ES)
void Ingreso(){
    do{
        clear();
        printf("\n\t\tUsuario: "); fflush(stdin); gets(Usr);
        printf("\n\t\tContrasenha: "); fflush(stdin); gets(Pssw);
        if((strcmp(DATABASEU, Usr) == 0) && (strcmp(DATABASEP, Pssw) == 0))
            Menu();
        else{
            intentos--;
            printf("\n\t\t\tUsuario o contrasenha incorrectos, le quedan %i intentos...", intentos);
            pausa();
        }
    }while(intentos != 0);
}

void Menu(){
    do{
        clear();
        printf("\n\t\t\t\t$ %.2f", sldo);
        puts("\n\n\t\t1.- Jugar a los dados.");
        puts("\t\t2.- Jugar a la moneda.");
        puts("\t\t3.- Ponle la cola al burro.");
        puts("\t\t4.- Ingresar saldo.");
        puts("\t\t5.- Retirar saldo.");
        puts("\t\t0.- Salir.");
        printf("\n\t\tDe una opcion: "); scanf("%i", &opc);

        switch(opc){
            case 1:
                clear();
                printf("\n\n\t\tHaga una apuesta: "); scanf("%f", &nSldo);
                aux = Dado();
                printf("\n\t\tDe un numero: "); scanf("%i", &ddo);
                dadoDibujo(aux);
                if(aux == ddo){
                    sldo = (nSldo * 1.20) + sldo;
                    printf("\n\t\tFelicidades ha ganado, ahora tiene $%.2f", sldo);
                }else{
                    sldo = (nSldo * 1.20) - sldo;
                    printf("\n\t\tHa perdido, ahora tiene $%.2f", sldo);
                }
                pausa();
                break;
            case 2:
                clear();
                printf("\n\n\t\tHaga una apuesta: "); scanf("%f", &nSldo);
                aux = Moneda();
                printf("\n\t\tSol (1) o aguila (2): "); scanf("%i", &mnda);
                switch(aux){
                    case 1: printf("\n\t\tSol"); break;
                    case 2: printf("\n\t\tAguila"); break;
                }
                if(aux == mnda){
                    sldo = (nSldo * 1.05) + sldo;
                    printf("\n\t\tFelicidades ha ganado, ahora tiene $%.2f", sldo);
                }else{
                    sldo = (nSldo * 1.05) - sldo;
                    printf("\n\t\tHa perdido, ahora tiene $%.2f", sldo);
                }
                pausa();
                break;
            case 3:
                clear();
                break;
            case 4:
                clear();
                printf("\n\n\t\tDe el monto a depositar: "); scanf("%f", &nSldo);
                sldo += nSldo;
                pausa();
                break;
            case 5:
                clear();
                printf("\n\n\t\tDe el monto a retirar: "); scanf("%f", &nSldo);
                if(nSldo > sldo)
                    printf("\n\t\tNo puede retirar mas de lo que tiene...");
                else
                    sldo -= nSldo;
                pausa();
                break;
            case 0:
                puts("\n\t\tHasta la proxima...");
                return 0;
                break;
        }
    }while(opc != 0);
}

int Dado(){
    int n;
    srand(time(NULL));

    n = 1 + rand() % ((6 + 1) - 1);

    return n;
}

void dadoDibujo(int n){
    switch(n){
        case 1:
            puts("\n\t\t ------- ");
            puts("\t\t|       |");
            puts("\t\t|   *   |");
            puts("\t\t|       |");
            puts("\t\t ------- ");
            break;
        case 2:
            puts("\n\t\t ------- ");
            puts("\t\t| *     |");
            puts("\t\t|       |");
            puts("\t\t|     * |");
            puts("\t\t ------- ");
            break;
        case 3:
            puts("\n\t\t ------- ");
            puts("\t\t| *     |");
            puts("\t\t|   *   |");
            puts("\t\t|     * |");
            puts("\t\t ------- ");
            break;
        case 4:
            puts("\n\t\t ------- ");
            puts("\t\t| *   * |");
            puts("\t\t|       |");
            puts("\t\t| *   * |");
            puts("\t\t ------- ");
            break;
        case 5:
            puts("\n\t\t ------- ");
            puts("\t\t| *   * |");
            puts("\t\t|   *   |");
            puts("\t\t| *   * |");
            puts("\t\t ------- ");
            break;
        case 6:
            puts("\n\t\t ------- ");
            puts("\t\t| *   * |");
            puts("\t\t| *   * |");
            puts("\t\t| *   * |");
            puts("\t\t ------- ");
            break;
    }
}

int Moneda(){
    int n;
    srand(time(NULL));

    n = 1 + rand() % ((2 + 1) - 1);

    return n;
}