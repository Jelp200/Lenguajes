/***********************************************************************
**
**  Archivo         :   17 - menuAvanzado.c
**  Proyecto        :   Mr.C (Ejercicios)
**  Herramienta(s)  :   Code::Blocks / Visual Studio Code
**  Compilador      :   C/C++ Compiler (Windows)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa donde el usuario adivine el
**                      numero secreto.
**
***********************************************************************/

// Directivas de preprocesador.
#include <stdio.h>
#include <math.h>

// Funcion principal.
int main(){
    int n1, n2;
    int S = 0,
        R = 0,
        M = 0,
        Mod = 0;
    int opc;

    float D = 0;

    do{
        system("cls");

        puts("\n\t\t\tCALCULADORA");
        puts("\t\t1.- Suma");
        puts("\t\t2.- Resta");
        puts("\t\t3.- Multiplicacion");
        puts("\t\t4.- Division");
        puts("\t\t5.- Mod");
        puts("\t\t6.- Salir");
        printf("\n\t\tDe una opcion: "); scanf("%i", &opc);

        switch(opc){
            case 1:
                system("cls");

                puts("\n\t\t\tSUMA");
                printf("\n\t\tDe el primer numero: "); scanf("%i", &n1);
                printf("\n\t\tDe el primer segundo: "); scanf("%i", &n2);

                S = n1 + n2;

                printf("\n\t\tEl resultado es: %i\n\n\t", S);

                system("PAUSE");
                break;
            case 2:
                system("cls");

                puts("\n\t\t\tRESTA");
                printf("\n\t\tDe el primer numero: "); scanf("%i", &n1);
                printf("\n\t\tDe el primer segundo: "); scanf("%i", &n2);

                R = n1 - n2;

                printf("\n\t\tEl resultado es: %i\n\n\t", R);

                system("PAUSE");
                break;
            case 3:
                system("cls");

                puts("\n\t\t\tMULTIPLICACION");
                printf("\n\t\tDe el primer numero: "); scanf("%i", &n1);
                printf("\n\t\tDe el primer segundo: "); scanf("%i", &n2);

                M = n1 * n2;

                printf("\n\t\tEl resultado es: %i\n\n\t", M);

                system("PAUSE");
                break;
            case 4:
                system("cls");

                puts("\n\t\t\tDIVISION");
                printf("\n\t\tDe el primer numero: "); scanf("%i", &n1);
                printf("\n\t\tDe el primer segundo: "); scanf("%i", &n2);

                D = n1 / n2;

                printf("\n\t\tEl resultado es: %.2f\n\n\t", D);

                system("PAUSE");
                break;
            case 5:
                system("cls");

                puts("\n\t\t\tMOD");
                printf("\n\t\tDe el primer numero: "); scanf("%i", &n1);
                printf("\n\t\tDe el primer segundo: "); scanf("%i", &n2);

                Mod = n1 % n2;

                printf("\n\t\tEl resultado es: %i\n\n\t", Mod);

                system("PAUSE");
                break;
            case 6:
                system("cls");
                printf("\n\t\tHasta la proxima...");
                break;
        }
    }while(opc != 6);

    return 0;
}
