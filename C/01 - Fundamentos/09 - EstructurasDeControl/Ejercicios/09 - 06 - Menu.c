/*
** #########################################################################################
**      Archivo: 09 - 06 - Menu.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**         Realizar un programa que a travez de un menu el usuario pueda ya sea visualizar
**         un arbol hecho de asteriscos, imprima el abecedario, la serie de fibonacci y
**          el código ASCII.
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>

// Variables globales.
int opc, nFilas, n;
int x = 0, y = 1, z = 1;

// Main Function.
int main(){
    
    do{
        system("cls");
        puts("\n\t\t\tMENU");
        puts("\t\t1.- Arbol.");
        puts("\t\t2.- Abecedario.");
        puts("\t\t3.- Fibonacci.");
        puts("\t\t4.- ASCII.");
        puts("\t\t0.- Salir.");

        printf("\n\t\tDe una opcion: "); scanf("%i", &opc);

        switch (opc){
            case 1:
                system("cls");
                puts("\n\t\t\tARBOL");
                printf("\n\t\tEscribe el numero de filas: "); scanf("%i", &nFilas);
                for(int i = 0; i < nFilas; ++i){
                    for(int j = 0; j <= i; ++j)
                        printf("*");
                    printf("\n");
                }
                puts("\n");
                system("pause");
                break;

            case 2:
                system("cls");
                puts("\n\t\t\tABECEDARIO");
                for(int i = 65; i <= 90; i++)
                    printf("%c\n", i);
                for(int i = 97; i <= 121; i++)
                    printf("%c\n", i);
                puts("\n");
                system("pause");
                break;

            case 3:
                system("cls");
                puts("\n\t\t\tFIBONACCI");
                printf("\n\t\tEscribe el numero de elementos: "); scanf("%i", &n);
                // Caso base
                printf("\n\t\t0, 1");

                for(int i = 1; i < n; ++i){
                    z = x + y;
                    x = y;
                    y = z;

                    printf(", %i", z);
                }
                puts("\n");
                system("pause");
                break;

            case 4:
                system("cls");
                puts("\n\t\t\tASCII");
                for(int i = 0; i <= 254; i++)
                    printf("%c\n", i);
                puts("\n");
                system("pause");
                break;

            case 0:
                system("cls");
                printf("\n\t\tHasta la proxima...");
                puts("\n");
                system("pause");
                break;

            default:
                system("cls");
                printf("\n\t\tDe una opcion correcta...");
                puts("\n");
                system("pause");
                break;
        }
    }while(opc != 0);

    return 0;
}