/*
** #########################################################################################
**  Archivo         :   23 - calculadoraBasica.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Code::Blocks / Visual Studio Code
**  Compilador      :   C/C++ Compiler (Windows)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que implemente un menu con funciones.
** #########################################################################################
*/

// Directivas de preprocesador.
#include <stdio.h>
#include <stdlib.h>

// Prototipo(s) de funcion(es).
void Menu();
void Case();
void Wait(){
    puts("\n");
    system("PAUSE");
    system("cls");
}

// Funcion principal.
int main(void){

    Menu();

    return 0;
}

// Funcion(es);
void Menu(){
    int opc;
    do{
        puts("\n\t\t\tMENU EN FUNCIONES");
        puts("\t\t1.- Case 1.");
        puts("\t\t2.- Case 2.");
        puts("\t\t3.- Case 3.");
        puts("\t\t4.- Case 4.");
        puts("\t\t0.- Salir.");
        printf("\n\t\tDe una opcion: "); scanf("%i", &opc);
        system("cls");

        switch (opc)
        {
        case 1:
            Case();
            Wait();
            break;
        case 2:
            Case();
            Wait();
            break;
        case 3:
            Case();
            Wait();
            break;
        case 4:
            Case();
            Wait();
            break;
        case 0:
            puts("\n\t\tHa salido...");
            break;
        default:
            puts("De una opcion correcta.");
            break;
        }
    } while (opc != 0);
    
}

void Case(){
    puts("\n\t\tDentro del case.\n\n");
}