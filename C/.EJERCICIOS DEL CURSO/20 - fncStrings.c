/*
** #########################################################################################
**  Archivo         :   20 - fncString.c
**  Proyecto        :   Mr.C (Ejercicios)
**  Herramienta(s)  :   Code::Blocks / Visual Studio Code
**  Compilador      :   C/C++ Compiler (Windows)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que implemente las funciones strings.
** #########################################################################################
*/

// Directivas de preprocesador.
#include <stdio.h>
#include <string.h>

// Funcion principal.
int main(){

    char opc;
    char stringCpy[50], destino[50];
    char C1[50], C2[50], cFinal[100];
    char stringLen[100],
         stringLower[100], 
         stringUper[100],
         stringRchr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", corte,
         stringRev[100];

    do{
        puts("\n\t\t\t FUNCIONES STRING");
        puts("\t\t1.- String copy.");
        puts("\t\t2.- String cat.");
        puts("\t\t3.- String comparision.");
        puts("\t\t4.- String length.");
        puts("\t\t5.- String lower.");
        puts("\t\t6.- String uper.");
        puts("\t\t7.- String remaining character.");
        puts("\t\t8.- String reverse.");
        puts("\t\tS.- Salir.");
        printf("\n\t\tSeleccione una opcion: "); scanf("%c", &opc);
        switch (opc)
        {
        case '1':
            puts("\n\t\t\tSTRING COPY");
            printf("\n\t\tDe una cadena de caracteres: "); fflush(stdin); gets(stringCpy);
            
            strcpy(stringCpy, destino);
            
            printf("\t\tLa cadena que se copea en el destino es \'%s\' y la cadena original es \'%s\'\n\n", destino, stringCpy);
            
            system("PAUSE");
            system("cls");
            break;
        case '2':
            puts("\n\t\t\tSTRING CAT");
            printf("\n\t\tDe la primer cadena de caracteres: "); fflush(stdin); gets(C1);
            printf("\t\tDe la segunda cadena de caracteres: "); fflush(stdin); gets(C2);
            
            strcat(cFinal, C1);
            strcat(cFinal, C2);
            
            printf("\t\tLa suma de las cadenas es \'%s\'\n\n", cFinal);
            system("PAUSE");
            system("cls");
            break;
        case '3':
            puts("\n\t\t\tSTRING COMPARISION");
            printf("\n\t\tDe la primer cadena a comparar: "); fflush(stdin); gets(C1);
            printf("\t\tDe la segunda cadena a comparar: "); fflush(stdin); gets(C2);
            
            if (strcmp(C1, C2) == 0){
                printf("%s y %s son iguales.\n\n", C1, C2);
            }else{
                printf("\t\tLa cadena %s y %s son diferentes.\n\n", C1, C2);
            }
            
            system("PAUSE");
            system("cls");
            break;
        case '4':
            puts("\n\t\t\tSTRING LENGTH");
            printf("\n\t\tDe una cadena: "); fflush(stdin); gets(stringLen);
            printf("\t\tLa longitud de la cadena dada es: %i.\n\n", strlen(stringLen));
            break;
        case '5':
            puts("\n\t\t\tSTRING LOWER");
            printf("\n\t\tEscriba un texto en mayusculas: "); fflush(stdin); gets(stringLower);

            strlwr(stringLower);

            printf("\n\t\tEl nuevo texto es: %s\n\n", stringLower);
            system("PAUSE");
            system("cls");
            break;
        case '6':
            puts("\n\t\t\tSTRING UPER");
            printf("\n\t\tEscriba un texto en minusculas: "); fflush(stdin); gets(stringUper);

            strlwr(stringUper);

            printf("\n\t\tEl nuevo texto es: %s\n\n", stringUper);
            system("PAUSE");
            system("cls");
            break;
        case '7':
            puts("\n\t\t\tSTRING REMAINING CHARACTER");
            printf("\n\t\tDe la lentra donde se cortara el ABCDario: "); scanf("%c", &corte);

            printf("\n%s\n\n", strrchr(stringRchr, corte));
            system("PAUSE");
            system("cls");
            break;
        case '8':
            puts("\n\t\t\tSTRING REVERSE");
            printf("\n\t\tDe la cadena a invertir: "); gets(stringRev);

            strrev(stringRev);

            printf("Cadena invertida: %s\n\n", stringRev);
            system("PAUSE");
            system("cls");
            break;
        case 'S':
            puts("\n\t\tHasta la proxima...");
            break;
        default:
            puts("\n\t\tDe una opcion correcta");
            break;
        }
    }while(opc != 'S');

    return 0;
}