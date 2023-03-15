/*
** #########################################################################################
**      Archivo: 12 - 03 - CajeroFunciones.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**              Realizar un programa que pueda realizar depositos y retiros de un cajero
**              basico con funciones sin retorno.
** #########################################################################################
*/

// Directivas de preprocesador
#include <stdio.h>
#include <string.h>

// Variables globales
#define DATABASEU   "El cochino"
#define DATABASEP   "123456789"

char Usuario[15], Contrasenha[10];

int opc;

// Prototipo(s) de funcion(es)
void Ingreso();
void Menu();

// Main function
int main(){

    Ingreso();

    return 0;
}

// Funcion(es)
void clear(){
    system("cls");
}

void wit(){
    puts("\n");
    system("pause");
}

void Ingreso(){
    int intentos = 3;

    do{
        clear();
        puts("\n\t\t\tBANCO POLITECNICO | ESIME Z");
        printf("\t\tUsuario: "); gets(Usuario);
        printf("\t\tContrasenha: "); gets(Contrasenha);

        if((strcmp(DATABASEU, Usuario) == 0) && (strcmp(DATABASEP, Contrasenha) == 0)){
            clear();
            Menu();
        }else{
            clear();
            intentos--;
            puts("\t\tUsuario o contrasenha incorrecta...");
            printf("\n\t\tLe quedan %i intentos.", intentos);
            wit();
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
            wit();
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
                
            wit();
            break;
        case 0:
            clear();
            puts("\n\t\t\tBANCO POLITECNICO | ESIME Z");
            puts("\t\tSaliendo del sistema...");
            wit();
            break;
        
        default:
            puts("\n\t\t\tBANCO POLITECNICO | ESIME Z");
            puts("\t\tDe una opcion correcta...");
            wit();
            break;
        }
    }while(opc != 0);

    return Ingreso();
}