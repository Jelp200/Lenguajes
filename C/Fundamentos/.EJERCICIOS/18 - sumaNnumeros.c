/***********************************************************************
**
**  Archivo         :   18 - sumaNnumeros.c
**  Proyecto        :   Mr.C (Ejercicios)
**  Herramienta(s)  :   Code::Blocks / Visual Studio Code
**  Compilador      :   C/C++ Compiler (Windows)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa donde el usuario solo ingrese
**                      el numero de elementos que quiere sumar y los sume.
**
***********************************************************************/

// Directivas de preprocesador.
#include <stdio.h>

// Funcion principal.
int main(){
    int n, sT = 0, nS;

    printf("De el numero de elementos a sumar: "); scanf("%i", &n);
    for(int i = 1; i <= n; i++){
        system("cls");
        printf("De el %i numero: ", i); scanf("%i", &nS);
        sT += nS;
    }

    system("cls");
    printf("La suma es: %i", sT);

    return 0;
}
