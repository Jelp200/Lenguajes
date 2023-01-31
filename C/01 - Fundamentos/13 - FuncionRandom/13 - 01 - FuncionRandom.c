/*
** #########################################################################################
**      Archivo: 13 - 01 - FuncionRandom.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
** #########################################################################################
*/

// Directivas de preprocesador
#include <stdio.h>
#include <time.h>

// Prototipo de funciones
void menu();
void dado();
void nR();

// Función principal
int main(){
    
    menu();

    return 0;
}

// Funciones
void menu(){
    int opc;

    do{
        system("cls");
        puts("\n\t\t\tFUNCION RANDOM");
        printf("\t\t1.- Tirar dados");
        printf("\n\t\t2.- Numero random");
        printf("\n\t\t3.- Salir");
        printf("\n\n\t\tSeleccione una opcion: "); scanf("%i", &opc);
        switch(opc){
            case 1: dado(); break;
            case 2: nR(); break;
            case 3:
                puts("\n\t\tHasta la proxima...");
                break;
            default:
                puts("\n\t\tDe una opcion correcta...");
                Wait();
                break;
        }
    }while(opc != 3);
}

void nR(){
    int n;
    srand(time(NULL));

    n = 1 + rand() % ((999 + 1) - 1);
    printf("\n\t\tEl numero aleatorio es: %d", n);
    Wait();
}

void dado(){
    int n;
    srand(time(NULL));

    n = 1 + rand() % ((6 + 1) - 1);

    switch(n){
        case 1:
            puts("\n\t\t ------- ");
            puts("\t\t|       |");
            puts("\t\t|   *   |");
            puts("\t\t|       |");
            puts("\t\t ------- ");
            Wait();
            break;
        case 2:
            puts("\n\t\t ------- ");
            puts("\t\t| *     |");
            puts("\t\t|       |");
            puts("\t\t|     * |");
            puts("\t\t ------- ");
            Wait();
            break;
        case 3:
            puts("\n\t\t ------- ");
            puts("\t\t| *     |");
            puts("\t\t|   *   |");
            puts("\t\t|     * |");
            puts("\t\t ------- ");
            Wait();
            break;
        case 4:
            puts("\n\t\t ------- ");
            puts("\t\t| *   * |");
            puts("\t\t|       |");
            puts("\t\t| *   * |");
            puts("\t\t ------- ");
            Wait();
            break;
        case 5:
            puts("\n\t\t ------- ");
            puts("\t\t| *   * |");
            puts("\t\t|   *   |");
            puts("\t\t| *   * |");
            puts("\t\t ------- ");
            Wait();
            break;
        case 6:
            puts("\n\t\t ------- ");
            puts("\t\t| *   * |");
            puts("\t\t| *   * |");
            puts("\t\t| *   * |");
            puts("\t\t ------- ");
            Wait();
            break;
    }
}

void Wait(){
    printf("\n\n");
    system("pause");
}