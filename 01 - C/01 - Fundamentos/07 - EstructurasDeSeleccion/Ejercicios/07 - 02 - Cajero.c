/*
** #########################################################################################
**      Archivo: 07 - 02 - Cajero.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Realizar un programa que pueda realizar depositos y retiros de un cajero basico.
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Varibales globales.
int opc;
int nSaldo = 0, saldo = 300;

// Main Function
int main(){
    system("cls");
    puts("\n\t\t\tCAJERO BASICO");
    puts("\t\t1.- Visualizar saldo.");
    puts("\t\t2.- Ingresar saldo.");
    puts("\t\t3.- Retirar saldo.");
    puts("\t\t4.- Salir.");
    printf("\n\t\tDe una opcion: "); scanf("%i", &opc);

    switch (opc){
    case 1:
        system("cls");
        puts("\n\t\t\tVISUALIZAR SALDO");
        printf("\n\t\tSaldo: $%i", saldo);
        puts("\n\t\t1.- Regresar.");
        puts("\t\t2.- Salir.");
        printf("\n\t\tDe una opcion: "); scanf("%i", &opc);
        if(opc == 1)
            return main();
        else
            goto etqF;
        break;

    case 2:
        system("cls");
        puts("\n\t\t\tINGRESAR SALDO");
        printf("\n\t\tDe el saldo a ingresar: "); scanf("%i", &nSaldo);

        saldo += nSaldo;

        puts("\n\t\t1.- Regresar.");
        puts("\t\t2.- Salir.");
        printf("\n\t\tDe una opcion: "); scanf("%i", &opc);
        if(opc == 1)
            return main();
        else
            goto etqF;
        break;

    case 3:
        system("cls");
        puts("\n\t\t\tRETIRAR SALDO");
        printf("\n\t\tDe el saldo a retirar: "); scanf("%i", &nSaldo);

        if(nSaldo > saldo)
            puts("\n\t\tNo puede retirar mas de lo que tiene");
            
        saldo -= nSaldo;

        puts("\n\t\t1.- Regresar.");
        puts("\t\t2.- Salir.");
        printf("\n\t\tDe una opcion: "); scanf("%i", &opc);
        if(opc == 1)
            return main();
        else
            goto etqF;
        break;

    case 4:
        system("cls");
        printf("\n\t\tHasta luego...");
        break;

    default:
        system("cls");
        printf("\n\t\tDe una opcion correcta");
        return main();
        break;
    }

    etqF:
        return 0;
}