/*
** #########################################################################################
**      Archivo: 11 - 09 - Ejercicio.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**         Realizar un programa que a travez de un menu el usuario pueda manejrar las
**         funciones básicas de cadenas.
** #########################################################################################
*/

// Directivas de preprocesador
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Variables globales
int opc;

char a[100], aF[100];
char a1[100], a2[100], aFC[200];
char ABCDario[] = "abcdefghijklmnopqrstuvwxyz", corte;

// Main function
int main(){
    do{
        system("cls");
        puts("\n\t\t\tFUNCIONES STRING");
        puts("\n\t\t1.- Copiar");
        puts("\t\t2.- Concatenacion");
        puts("\t\t3.- Comparacion");
        puts("\t\t4.- Corte");
        puts("\t\t5.- Minusculas");
        puts("\t\t6.- Mayusculas");
        puts("\t\t7.- Longitud");
        puts("\t\t8.- Reversion");
        puts("\t\t0.- Salir");
        printf("\n\t\tDe una opción: "); scanf("%i", &opc);

        switch(opc){
            case 1:
                system("cls");
                puts("\n\t\t\tCOPIAR");
                printf("\t\tDe la cadena a copiar: "); fflush(stdin); gets(a);
                //! strcpy(Destino, Fuente);
                strcpy(aF, a);
                printf("\n\t\tLa cadena fuente es: %s", a);
                printf("\n\t\tLa cadena copiada es: %s", a);
                puts("\n");
                system("pause");
                break;
            case 2:
                system("cls");
                puts("\n\t\t\tCONCATENACON");
                printf("\t\tDe la primer cadena: "); fflush(stdin); gets(a1);
                printf("\t\tDe la segunda cadena: "); fflush(stdin); gets(a2);
                //! strcat(Destino, Fuente);
                strcat(aFC, a1);
                strcat(aFC, a2);
                printf("\n\t\tLa cadena final es: %s", aFC);
                puts("\n");
                system("pause");
                break;
            case 3:
                system("cls");
                puts("\n\t\t\tCOMPARACION");
                printf("\t\tDe la primer cadena: "); fflush(stdin); gets(a1);
                printf("\t\tDe la segunda cadena: "); fflush(stdin); gets(a2);
                //! strcmp(Cadena 1, Cadena 2);
                if(strcmp(a1, a2) == 0)
                    printf("\n\t\tLas cadenas son iguales");
                else
                    printf("\n\t\tLas cadenas no son iguales");
                puts("\n");
                system("pause");
                break;
            case 4:
                system("cls");
                puts("\n\t\t\tCORTE");
                printf("\t\tEl abecedario es: %s", ABCDario);
                printf("\n\t\tDe la lentra donde se cortara el ABCDario: "); scanf("%c", &corte);
                //! strrchr(Cadena, Corte);
                printf("\n\t\t%s", strrchr(ABCDario, corte));
                puts("\n");
                system("pause");
                break;
            case 5:
                system("cls");
                puts("\n\t\t\tMINUSCULAS");
                printf("\t\tDe la cadena en mayusculas a convertir: "); fflush(stdin); gets(a1);
                //! strlwr(Cadena);
                strlwr(a1);
                printf("\t\tLa nueva cadena es: %s", a1);
                puts("\n");
                system("pause");
                break;
            case 6:
                system("cls");
                puts("\n\t\t\tMAYUSCULAS");
                printf("\t\tDe la cadena en minusculas a convertir: "); fflush(stdin); gets(a1);
                //! strlwr(Cadena);
                strupr(a1);
                printf("\t\tLa nueva cadena es: %s", a1);
                puts("\n");
                system("pause");
                break;
            case 7:
                system("cls");
                puts("\n\t\t\tLONGITUD");
                printf("\t\tDe una cadena: "); fflush(stdin); gets(a1);
                //! strlen(Cadena);
                printf("\t\tLa longitud de la cadena es: %i", strlen(a1));
                puts("\n");
                system("pause");
                break;
            case 8:
                system("cls");
                puts("\n\t\t\tREVERSION");
                printf("\t\tDe una cadena: "); fflush(stdin); gets(a1);
                //! strrev(Cadena);
                printf("\t\tLa cadena invertida es: %s", strrev(a1));
                puts("\n");
                system("pause");
                break;
            case 0:
                system("cls");
                puts("\t\tHasta luego...");
                puts("\n");
                system("pause");
                break;
            default:
                system("cls");
                puts("\t\tDe una opcion correcta...");
                puts("\n");
                system("pause");
                break;
        }

    }while(opc != 0);
    
    return EXIT_SUCCESS;
}