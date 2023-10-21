/*
** #########################################################################################
**  Archivo         :   08 - OperadoresLogcos.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**              Realizar un programa el cual pida 5 calificaciones, si se tienen un promedio
**              mayor a 5 el alumno recursara el año. 
** #########################################################################################
*/
// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// PROTOTIPO(S) DE FUNCION(ES)
void calif();

// FUNCION PRINCIPAL
int main(){
    calif();
    return 0;
}

// FUNCION(ES)
void calif(){
    float n, sP = 0, P = 0;
    for(int i = 0; i < 5; i++){
        printf("\n\t\tDe la calificación %i: ", i + 1);
        scanf("%f", &n);
        sP += n;
    }
    P = sP / 5;
    printf("\n\t\tEl promedio es: %.2f", P);

    if (P >= 5)
        printf("\n\n\t\tEl alumno pasara de año.");
    else
        printf("\n\n\t\tEl alumno no pasara de año.");
}