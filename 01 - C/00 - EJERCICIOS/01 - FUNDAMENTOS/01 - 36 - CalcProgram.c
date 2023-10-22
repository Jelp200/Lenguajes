/*
** #########################################################################################
**  Archivo: 01 - 36 - CalcProgram.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**              Realizar un programa que implemente la recursividad en funciones y así
**              pueda realizar operaciones de convercion entre numeros enteros, binarios
**              octales y hexadecimales.
**
**                          CALCULADORA PROGRAMADOR
**              
**              1.- Binario.
**              2.- Octal.
**              3.- Hexadecimal.
**              0.- Salir.
** #########################################################################################
*/

// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// VARIABLES GLOBALES
int opc, n;

// DEFINE(S)
#define RESET   "\x1B[0m"
#define CVERDE  "\x1B[32m"
#define CBLANCO "\x1B[37m"
#define CROJO "\x1B[31m"
#define NEGRITAS "\x1B[1m"

// PROTOTIPO(S) DE FUNCION(ES)
void clear(){
    system("cls || clear");
}
void pausa(){
    fflush(stdout);
    system("read -p '\n\t\tPresione enter para continuar...' t");       // Código en bash
}

void Entrada();
void Menu();
void Binario();
void Octal();
void Hexa();

int calcBinario(int n);
int calcOctal(int n);
int calcHexa(int n);

// FUNCION PRINCIPAL
int main(){
    Entrada();
    return EXIT_SUCCESS;
}

// FUNCION(ES)
int calcBinario(int n){
    if(n > 1)
        calcBinario(n / 2);
    printf("%i", n % 2);
}

int calcOctal(int n){
    if(n > 1)
        calcOctal(n / 8);
    printf("%i", n % 8);
}

int calcHexa(int n){
    char hexDigitos[] = "0123456789ABCDEF";
    if(n < 16)
        printf("%c", hexDigitos[n]);
    else{
        calcHexa(n / 16);
        printf("%c", hexDigitos[n % 16]);
    }
}

void Entrada(){
    puts(CVERDE "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣤⡄");
    puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣿⠿⠓");
    puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⣿⡟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀");
    puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⠃⠀⠀⠀⠀⠀⠀⠀⠀⣸⣿⣿⡟⠀⢀⡆⠀⠀⠀⠀⠀⠀⢀");
    puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⠀⠅⠀⠀⠀⠀⢀⡄⠀⠀⠀⣿⣿⣿⣗⣠⣾⡇⠀⠀⠀⠀⢠⠆");
    puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠀⠀⠀⢸⣆⠀⠀⢰⣿⣿⣿⣿⣿⣯⠀⢀⣴⠆⠀⠻⠂");
    puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⣷⠀⠀⠀⠀⠀⠀⢸⣿⠀⢀⣾⣿⣿⣿⣿⣿⡿⣥⣾⡟");
    puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⡆⠀⠀⣀⣴⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⢹⣿⠀⠀⠀⣴⠃⠀⣠⡆⢀");
    puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠱⣄⠀⠀⠀⠀⠈⣿⡇⠀⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃⠀⠘⠁⠀⠀⣰⣿⠀⢰⠟⠀⣤");
    puts("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⠀⠀⠙⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⢀⠁⠀⢀⣰⣿⣿⡿⠆⠈⠀⣰⣷⡄");
    puts("⠀⠀⠀⠀⠀⠘⢿⣦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⡾⣧⡜⠀⣠⣿⣿⣿⣿⡿⠋⣹⣿⣿⣿⠟⢸⣿⣦⣴⣿⣿⣿⡿⠁⠀⠀⣾⣿⣿⠁");
    puts("⠀⠀⠀⠀⢀⠀⠀⢹⣿⣧⠀⠀⠀⠀⡀⢀⣾⢀⣿⣿⣿⣾⣿⣿⣿⣿⠛⠁⢠⠿⠟⠉⠁⠀⢸⣹⣿⣿⠛⠻⣯⠁⠀⠀⣀⣿⠿⠁⠀⠀⠀⣆⢹");
    puts("⠀⠀⠰⣄⠸⣷⡄⠀⢿⣟⠀⠀⠀⠀⣷⡀⣇⠀⣿⣿⠿⣿⠛⣿⠏⠀⠀⡄⠀⢀⣴⡾⠁⠀⣼⣿⡿⠏⠀⠐⣿⡄⠀⣰⠋⠀⠀⣺⠀⠀⠀⢹⣘");
    puts("⠀⠀⠠⣽⣶⡿⠇⠀⠀⢉⠀⠶⠒⠀⠘⢷⣿⣥⠈⠿⠀⠘⢆⠘⠀⢠⣿⡁⠀⣾⣿⠃⠀⣸⢿⣿⣇⣀⠀⢀⣿⡇⠀⡘⠀⠀⠸⣿⠀⠀⠀⢸⠁");
    puts("⠀⠀⠀⠘⠋⢀⠀⣄⠀⣆⠁⣾⣿⣧⠀⠘⣿⣿⣦⢸⣦⠀⠈⣤⣼⣿⣿⣿⣾⡿⠁⠀⠈⣠⣾⣿⣿⣿⣿⣿⣿⡇⢀⣧⠀⠲⣀⣿⡆⠀⠐");
    puts("⠀⠀⠀⠀⡶⢠⣾⡿⠷⠿⢷⣿⣿⣿⠇⠀⠋⢹⣿⣶⣿⣷⣶⣿⣿⣿⠋⠉⣿⠃⠀⢀⣾⣿⣿⣿⣿⡿⠻⠙⠿⡇⠈⣿⠁⠀⣿⠏");
    puts("⠀⠀⠀⠀⡀⠙⡁"CBLANCO"⠶⣿⡿⢒⣠⠀⡤⠀⢐⠀"CVERDE"⠸⣿⣿⣿⣿⣿⡟⠉⢿⠀⢸⣿⡀⠀⢸⣿⣿⣿⠟⠁⠀⠀⠀⠀⢱⠀⠎⠠⠔⠁");
    puts("⠀⠀⣶⠀⡇"CBLANCO"⢄⠘⠲⣦⠰⠟⠉⠒⠲⡄⠀⠁"CVERDE"⢸⣿⠟⠁⢸⠟⢣⠀⠻⡀⠘⢿⣿⣿⣿⣿⣿⠏⠀⠀⠀⠀⠀⠀⠘⡆⠀⣶⠃⣰⡆");
    puts("⠂⠀⣿⣦⠈"CBLANCO"⠈⠛⢶⣦⠀⡸⡀⠀⠀⡸"CVERDE"⠀⠀⠈⠁⠀⠰⠃⠀⢸⣄⠀⠘⠂⡀⢻⣿⡿⠟⠀⢤⠀⠀⠀⠀⠀⠀⢰⠗⢠⡯⢰⣿⠁");
    puts("⠀⣼⣿⡿⠁⠀"CBLANCO"⠈⢀⣄⠀⠷⣬⣑⡨⣴⡇⣴"CVERDE"⠀⢀⣄⣠⣤⣴⣿⣾⣷⢄⡀⠀⠈⠀⠀⠈⠓⠋⠀⠀⠀⠀⢀⣼⠏⠀⣸⡇⢨⡏");
    puts("⠀⢫⣿⡃⠀⢰⣿⣦⣅⡀"CBLANCO"⠛⠶⠶⠶⠌⠁"CVERDE"⠀⠀⠀⠀⠉⠉⣿⣹⣿⠉⠙⣌⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⡞⠁⠀⣰⢫⡇⠈                    "CROJO NEGRITAS"2023       /       ESIME ZACATENCO       /       ICE"RESET);
    puts(CVERDE"⠀⠀⠈⠇⠘⠘⢿⣥⣀⠉⠛⣿⣷⣶⣿⣿⡟⢀⣴⠂⠀⠀⠀⠹⣿⣧⡀⠀⠙⢦⡀⠀⠀⢦⣄⣤⣨⣭⣤⣠⠴⠋⠀⠸⠁⠀"CBLANCO"⢦⡀");
    puts(CVERDE"⠀⠀⠀⠀⠀⠀⠀⣬⣙⡛⠓⠒⢒⢀⣤⠀⣄⠻⣿⣄⠀⠀⠀⢀⣿⣿⣽⣦⡀⠀⠀⠳⣄⡀⠀⠈⠛⠛⠛⠁⠀⡠⠞⠁⠀"CBLANCO"⠻⣦⡹⣦⡐⢄");
    puts(CVERDE"⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⣻⠟⣛⣃⣸⣿⡇⣹⣿⡷⠀⣠⠟⢻⣿⢿⠛⠋⠃⡄⠀⠈⢿⣶⣶⠦⢶⡖⠆"CBLANCO"⢁⣄⠐⢿⣷⣄⠈⠻⣌⢻⣆⠡⡀                       "NEGRITAS"  _                                 _  "RESET);
    puts(CVERDE"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⢋⣼⣿⣿⡿⠙⢁⣾⣿⡇⠀⠀⣠⣾⣿⠀⠀⠀⣴⠃⠀⣀⣀⡈⠉⠛⢷⣾⠀"CBLANCO"⠻⣿⣷⣄⠙⠛⣡⣄⡹⣧⠹⡇⢱                      "NEGRITAS"  | |                               | |  "RESET);
    puts(CVERDE"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠘⠗⣠⣌⠛⠀⠹⠿⠿⣇⠀⠀⠻⠿⠋⠀⠀⠋⠁⡔⠚⠉⣉⡋⠐⠀⠀⢟⠀⠀"CBLANCO"⠈⠻⣿⠇⣀⠈⠛⢛⣿⡗⢃⡌             "NEGRITAS"  ___ _   _""| |__   ___ _ __ _ __  _   _ _ __ | | __  "RESET);
    puts(CVERDE"⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⢛⣴⣿⣿⣧⠰⣷⢰⡆⣶⢠⠀⠰⣦⣤⣤⣴⠶⠉⠀⢰⣾⣿⣿⣦⠈⠀⠀⠀⠀⠀⠀"CBLANCO"⠨⡘⢿⣿⣿⣿⣿⠇⡼             "NEGRITAS"  / __| | | | '_ \\ / _ \\ '__| '_ \\| | | | '_ \\| |/ /  "RESET);
    puts(CVERDE"⠀⠀⠀⠀⢀⣀⣤⠶⢟⣫⣴⣿⣿⣿⣿⠏⠰⣤⡤⠔⠀⠀⠀⠀⠉⠉⠉⠁⠀⠀⠀⠈⠻⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀"CBLANCO"⠈⠒⠦⠭⠭⠥⠚             "NEGRITAS"  | (__| |_| | |_) |  __/ |  | |_) | |_| | | | |   <  "RESET);
    puts(CVERDE"⠀⠀⠴⠞⣛⣭⣴⣾⣿⣿⣿⣿⠿⠛⣡⢸⣷⣌⠓⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠀⣦⠐⣌⠻⢿⣿⣿⣷⣦⣬⣓⡒⠤⠤                    "CBLANCO NEGRITAS"  \\___|\\__, |_.__/ \\___|_|  | .__/ \\__,_|_| |_|_|\\_\\  "RESET);
    puts(CVERDE"⠀⠀⠤⣭⣭⣭⣭⣭⣭⣭⣭⠐⢶⡃⠉⠘⠿⠿⠈⡁⣠⣾⣿⣿⢿⣷⣶⣄⡙⠂⢾⣿⠀⠟⣡⣤⣍⡛⠻⢿⣿⣿⣿⡿⠶⢒                         "CBLANCO NEGRITAS"  __/ |               | |"RESET);
    puts(CVERDE"⠀⠀⠀⠀⠀⠈⠉⠁⠀⠀⠀⠀⠈⢿⣤⣀⣀⣦⠿⠛⠉⢁⡀⠀⢀⣀⡀⠙⠹⠿⣷⣦⣤⣞⣿⣿⠟⠀⠘⠓⠲⠶⠶⠒⠋⠁                        "CBLANCO NEGRITAS"  |___/                |_|"RESET);
    puts(CVERDE"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠓⠋⣡⡴⢁⣴⣿⣿⣦⣶⣿⣷⣄⠀⢶⣤⣭⠍⠛⠛⠁                               ");
    puts(CVERDE"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢁⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⠄⠛⠁                                    ");
    puts(CVERDE"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠿⠿⠟⠻⠿⠿⠟⠋" RESET);
    sleep(10);
    Menu();
}

void Menu(){
    do{
        clear();
        puts("\n\t\t\tCALCULADORA PROGRAMADOR");
        printf("\n\t\t1.- Binario.");
        printf("\n\t\t2.- Octal.");
        printf("\n\t\t3.- Hexadecimal.");
        printf("\n\t\t0.- Salir.");
        printf("\n\t\tDe una opcion: "); scanf("%i", &opc);
        switch (opc){
        case 0:
            clear();
            puts("\n\t\t\tHasta la proxima...");
            pausa();
            break;
        case 1:
            Binario();
            break;
        case 2:
            Octal();
            break;
        case 3:
            Hexa();
            break;
        default:
            clear();
            printf("\t\tDe una opcion correcta...");
            pausa();
            break;
        }
    }while(opc != 0);
}

void Binario(){
    clear();
    puts("\n\t\t\tDECIMAL A BINARIO");
    printf("\n\t\tDe el numero decimal a convertir: "); scanf("%i", &n);
    if(n >= 0){
        printf("\n\t\tEl numero binaio es: ");
        calcBinario(n);
        pausa();
    }else{
        printf("\n\t\tDe un numero positivo...\n");
        pausa();
    }
}

void Octal(){
    clear();
    puts("\n\t\t\tDECIMAL A OCTAL");
    printf("\n\t\tDe el numero decimal a convertir: "); scanf("%i", &n);
    if(n >= 0){
        printf("\n\t\tEl numero octal es: ");
        calcOctal(n);
        pausa();
    }else{
        printf("\n\t\tDe un numero positivo...\n");
        pausa();
    }
}

void Hexa(){
    clear();
    puts("\n\t\t\tDECIMAL A HEXADECIMAL");
    printf("\n\t\tDe el numero decimal a convertir: "); scanf("%i", &n);
    if(n >= 0){
        printf("\n\t\tEl numero hexadecimal es: ");
        calcHexa(n);
        pausa();
    }else{
        printf("\n\t\tDe un numero positivo...\n");
        pausa();
    }
}