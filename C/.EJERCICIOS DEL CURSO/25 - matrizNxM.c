/*
** #########################################################################################
**  Archivo         :   25 - matrizNxM.c
**  Proyecto        :   Mr.C (Ejercicios)
**  Herramienta(s)  :   Code::Blocks / Visual Studio Code
**  Compilador      :   C/C++ Compiler (Windows)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que visualice en color rojo el 0 en un arreglo
**                      y verde en un numero diferente de 0.
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>

// Funcion principal.
void Menu();
void Entrada();

// Variables globales.
int M, N;
int mat[0][0];

// Main Function
int main(){

    Menu();

    return 0;
}

// Funciones.
void Menu(){
    char opc;

    Entrada();

    do{
        system("cls");
        puts("\n\t\t\tMENU MATRIZ M x N");
        puts("\n\t\t1.- DEFINIR TAMAÑO.");
        puts("\t\t2.- INGRESAR DATOS.");
        puts("\t\t3.- VISUALIZAR MATRIZ.");
        puts("\t\tS.- SALIR.");
        printf("\n\t\tDe una opción: "); scanf("%c", &opc);
        switch (opc){
        case '1':
            system("cls");
            puts("\n\t\t\tDEFINIR TAMAÑO");
            printf("\t\tDe en numero de filas: "); scanf("%i", &M);
            printf("\t\tDe en numero de columnas: "); scanf("%i", &N);
            mat[0][0] = mat[M][N];
            break;
        case '2':
            system("cls");
            puts("\n\t\t\tINGRESAR DATOS");
            printf("\t\tSu matriz es de [%i] x [%i]\n\n", M, N);
            for (int i = 0; i < M; i++){
                for (int j = 0; j < N; j++){
                    printf("\t\tDe el valor para la posicion [%i][%i]: ", i, j); scanf("%i", &mat[i][j]);
                    system("cls");
                }
            }
            break;
        case '3':
            puts("\n\t\t\tVISUALIZAR MATRIZ");
            for (int i = 0; i < M; ++i){                                // Filas
                for(int j = 0; j < N; ++j){                             // Columnas
                    printf("%i\t", mat[i][j]);
                }
                printf("\n\n");
            }
            break;
        case 'S':
            system("cls");
            printf("\t\tSaliendo del sistema...");
            sleep(3);
            break;
        default:
            break;
        }
    } while (opc != 'S');
}

void Entrada(){
    system("cls");
    sleep(3);
    puts("\x1B[1;32mBienvenido al sistema...\x1B[0m");
    sleep(3);
    system("cls");
    sleep(3);
    puts("\n\x1B[1;32mID: JELP 200\x1B[0m");
    sleep(2);
    puts("\nEscuela: ESIME Z");
    sleep(2.5);
    puts("\nPais: Mexico");
    sleep(3);
    puts("\n\033[1;31mTeam: LAWBREAKERS\033[0m");
    sleep(2);
    printf("\n."); sleep(2); printf("."); sleep(4); printf(".");
    sleep(3);
}