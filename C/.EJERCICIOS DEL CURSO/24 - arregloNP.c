/*
** #########################################################################################
**  Archivo         :   24 - arregloNP.c
**  Proyecto        :   Mr.C (Ejercicios)
**  Herramienta(s)  :   Code::Blocks / Visual Studio Code
**  Compilador      :   C/C++ Compiler (Windows)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que visualice en color rojo el 0 en un arreglo
**                      y verde en un numero diferente de 0.
** #########################################################################################
*/

// Directivas de preprocesador.
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Funcion principal.
int main(void){
    int indice = -1;
    int arregloUD[3] = {};

    system("cls");
    printf("\n\tEl primer valor inicial de la primer posicion es: \033[1;31m%i\033[0m", arregloUD[0]);
    printf("\n\tEl segundo valor inicial de la segunda posicion es: \033[1;31m%i\033[0m", arregloUD[1]);
    printf("\n\tEl tercer valor inicial de la tercer posicion es: \033[1;31m%i\033[0m", arregloUD[2]);

    Wait();
    for (int i = 0; i < 3; i++){
        printf("\n\tEscriba el valor para el indice [%i]: ", i); scanf("%i", &arregloUD[i]);
    }

    Wait();
    if (((arregloUD[0]) && (arregloUD[1]) && (arregloUD[2]))== 0){
        while (++indice < 3){
        printf("\n\tEl valor del array[%i] es: \033[1;31m%i\033[0m", indice, arregloUD[indice]);
        }
    }else{
        while (++indice < 3){
        printf("\n\tEl valor del array[%i] es: \x1B[1;32m%i\x1B[0m", indice, arregloUD[indice]);
        }
    }
    
    
    return EXIT_SUCCESS;
}

// Funcion.
void Wait(){
    puts("\n");
    system("PAUSE");
    system("cls");
}