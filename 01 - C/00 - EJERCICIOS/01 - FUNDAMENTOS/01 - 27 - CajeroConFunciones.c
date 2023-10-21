/*
** #########################################################################################
**      Archivo: 12 - 03 - CajeroFunciones.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que pueda realizar depositos y retiros de un 
**                      cajero basico con funciones sin retorno.
** #########################################################################################
*/

// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <string.h>
#include <unistd.h>

// VARIABLES GLOBALES
char usr[10], psw[10];
int opc;

// DEFINE(S)
#define USRD    "Jelp200"
#define PSWD    "123456789"

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

void Saludo();
void Ingreso();
void Menu();

// FUNCION PRINCIPAL
int main(){
    Saludo();
    return 0;
}

// FUNCION(ES)
void Saludo(){
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
    Ingreso();
}

void Ingreso(){
    int intentos = 3;

    do{
        clear();
        puts("\n\t\t\tBANCO POLITECNICO | ESIME Z");
        printf("\t\tUsuario: "); gets(usr);
        printf("\t\tContrasenha: "); gets(psw);

        if((strcmp(USRD, usr) == 0) && (strcmp(PSWD, psw) == 0)){
            clear();
            Menu();
        }else{
            clear();
            intentos--;
            puts("\t\tUsuario o contrasenha incorrecta...");
            printf("\n\t\tLe quedan %i intentos.", intentos);
            pausa();
        }
    }while(intentos >= 0);
}

void Menu(){
    float Saldo = 0, nSaldo;
    do{
        clear();
        puts("\n\t\t\tBANCO POLITECNICO | ESIME Z");
        printf("\t\t\t\t\t$%.2f", Saldo);
        puts("\n\t\t1.- Ingresar saldo.");
        puts("\t\t2.- Retirar saldo.");
        puts("\t\t0.- Salir de la cuenta.");
        printf("\n\t\tDe una opcion: "); scanf("%i", &opc);

        switch (opc){
        case 1:
            clear();
            puts("\n\t\t\tBANCO POLITECNICO | ESIME Z");
            printf("\t\tCuanto desea depositar?: "); scanf("%f", &nSaldo);
            Saldo += nSaldo;
            printf("\n\t\tDeposito realizado...");
            pausa();
            break;
        case 2:
            clear();
            puts("\n\t\t\tBANCO POLITECNICO | ESIME Z");
            printf("\t\tCuanto desea retirar?: "); scanf("%f", &nSaldo);
            if(nSaldo > Saldo)
                printf("\n\t\tNo puede retirar mas de lo que tiene...");
            else{
                Saldo -= nSaldo;
                printf("\n\t\tRetiro realizado...");
            }
                
            pausa();
            break;
        case 0:
            clear();
            puts("\n\t\t\tBANCO POLITECNICO | ESIME Z");
            puts("\t\tSaliendo del sistema...");
            pausa();
            break;
        
        default:
            puts("\n\t\t\tBANCO POLITECNICO | ESIME Z");
            puts("\t\tDe una opcion correcta...");
            pausa();
            break;
        }
    }while(opc != 0);

    return Ingreso();
}