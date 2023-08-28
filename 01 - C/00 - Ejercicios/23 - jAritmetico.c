/*
** #########################################################################################
**  Archivo         :   23 - jAritmetico.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que presente diferentes retos aritmeticos al
**                      usuario, el usuario comienza con 5 vidas y por cada reto que no
**                      conteste bien se le quita una vida hasta perder.
** #########################################################################################
*/

// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// PROTOTIPO(S) DE FUNCION(ES)
void clear(){
    system("cls || clear");
}
void pause(){
    fflush(stdout);
    system("read -p '\n\t\tPresione enter para continuar...' t");       // Código en bash
}

int nR();
void Menu();
void Juego();

// VARIABLES GLOBALES
char USR[30];
int vidas = 5;

float S = 10, R = 36, M = 500, D = 2, E = 1000000;
int resp = 0;
int cont = 0;

// FUNCION PRINCIPAL
int main(){
    Menu();
    return 0;
}

// FUNCION(ES)
int nR(){
    int n;
    srand(time(NULL));
    n = 1 + rand() % ((5 + 1) - 1);
    return n;
}

void Menu(){
    puts("\t\t\tJUEGO ARITMETICO");
    printf("\n\t\tDe su usuario: "); fflush(stdin); gets(USR);
    clear();
    Juego();
}

void Juego(){
    do{
        clear();
        puts("\t\t\tJUEGO ARITMETICO");
        printf("\n\t\tUsuario: %s | Vidas: %i | Buenas: %i\n\n", USR, vidas, cont);
        pause();
        switch (nR()){
            case 1:
                clear();
                puts("\t\t\tPREGUNTA 1");
                puts("\n\t\t¿Cuánto es 5 + 5?");
                printf("\n\t\tRespuesta: "); scanf("%i", &resp);
                if(resp == S){
                    cont++;
                    clear();
                    printf("\n\t\tRespuesta correcta...");
                    pause();
                }else{
                    vidas--;
                    printf("\n\t\tRespuesta incorrecta...");
                    pause();
                }
                break;
            case 2:
                clear();
                puts("\t\t\tPREGUNTA 2");
                puts("\n\t\t¿Cuánto es 100 - 64?");
                printf("\n\t\tRespuesta: "); scanf("%i", &resp);
                if(resp == R){
                    cont++;
                    clear();
                    printf("\n\t\tRespuesta correcta...");
                    pause();
                }else{
                    vidas--;
                    printf("\n\t\tRespuesta incorrecta...");
                    pause();
                }
                break;
            case 3:
                clear();
                puts("\t\t\tPREGUNTA 3");
                puts("\n\t\t¿Cuánto es 100³?");
                printf("\n\t\tRespuesta: "); scanf("%i", &resp);
                if(resp == E){
                    cont++;
                    clear();
                    printf("\n\t\tRespuesta correcta...");
                    pause();
                }else{
                    vidas--;
                    printf("\n\t\tRespuesta incorrecta...");
                    pause();
                }
                break;
            case 4:
                clear();
                puts("\t\t\tPREGUNTA 4");
                puts("\n\t\t¿Cuánto es 10 * 50?");
                printf("\n\t\tRespuesta: "); scanf("%i", &resp);
                if(resp == M){
                    cont++;
                    clear();
                    printf("\n\t\tRespuesta correcta...");
                    pause();
                }else{
                    vidas--;
                    printf("\n\t\tRespuesta incorrecta...");
                    pause();
                }
                break;
            case 5:
                clear();
                puts("\t\t\tPREGUNTA 5");
                puts("\n\t\t¿Cuánto es 400 / 200?");
                printf("\n\t\tRespuesta: "); scanf("%i", &resp);
                if(resp == D){
                    cont++;
                    clear();
                    printf("\n\t\tRespuesta correcta...");
                    pause();
                }else{
                    vidas--;
                    printf("\n\t\tRespuesta incorrecta...");
                    pause();
                }
                break;
            }
    }while(vidas > 0);
    clear();
    printf("\n\t\tSu puntaje fue de: %i pts", cont);
}