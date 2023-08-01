/*
** #########################################################################################
**  Archivo         :   08 - OperadoresLogcos.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**              Limpiar la pantalla si el número dado es 0 con el operador ternario.
** #########################################################################################
*/
// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// PROTOTIPO(S) DE FUNCION(ES)
void clear();

// FUNCIÓN PRINCIPAL
int main(){
    int opc = 0;
    clear();
    printf("\n\t\t\tMENU");
    printf("\n\t\t0. Limpiar");
    printf("\n\t\t1. Salir");
    printf("\n\n\t\tDe una opcion: "); scanf("%i", &opc);
    (opc == 0) ? (clear()) : ((opc == 1) ? (printf("\n\t\tHasta la proxima...")) : (main()));
    return 0;
}

// FUNCIONES
void clear(){
    system("cls || clear");
}
