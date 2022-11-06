/***********************************************************************
**
**  Archivo         :   14 - menuOpciones.c
**  Proyecto        :   Mr.C (Ejercicios)
**  Herramienta(s)  :   Code::Blocks / Visual Studio Code
**  Compilador      :   C/C++ Compiler (Windows)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que tenga un menpu de
**                      opciones.
**
***********************************************************************/

// Directivas de preprocesador.
#include <stdio.h>

// Funcion principal.
int main(){
    int opc = 1;

    while (opc != 0){
        puts("\t\tOpcion 1.");
        puts("\t\tOpcion 2.");
        puts("\t\tOpcion 3.");
        puts("\t\tOpcion 4.");
        puts("\t\tOpcion 5.");
        puts("\t\tSalir (0).");
        printf("\n\t\tDe una opcion a hacer: "); scanf("%i", &opc);

        switch (opc){
            case 1: printf("\nOpcion %i dentro de un menu.\n", opc); break;
            case 2: printf("\nOpcion %i dentro de un menu.\n", opc); break;
            case 3: printf("\nOpcion %i dentro de un menu.\n", opc); break;
            case 4: printf("\nOpcion %i dentro de un menu.\n", opc); break;
            case 5: printf("\nOpcion %i dentro de un menu.\n", opc); break;
            case 0: break;
            default: printf("\nDe una opción correcta..."); break;
        }
    }

    return 0;
}
