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

    int cuenta, salir = 10;
    int indice = -1;
    int arregloUD[3] = {};

    system("cls");
    printf("\n\tEl primer valor inicial de la primer posicion es: \033[1;31m%i\033[0m", arregloUD[0]);
    printf("\n\tEl segundo valor inicial de la segunda posicion es: \033[1;31m%i\033[0m", arregloUD[1]);
    printf("\n\tEl tercer valor inicial de la tercer posicion es: \033[1;31m%i\033[0m", arregloUD[2]);
    do{
        Wait();

        for (int i = 0; i < 3; i++){
            fflush(stdin);
            printf("\n\tEscriba el valor para el indice [%i]: ", i); scanf("%i", &arregloUD[i]);
        }

        Wait();                                                                                                                                        // 0 1 2

        if(((arregloUD[0] && arregloUD[1]) == 0) && (arregloUD[2] != 0)){                                                                              // R R V
            printf("\n\tEl valor del array[0] es: \033[1;31m%i\033[0m", arregloUD[0]);
            printf("\n\tEl valor del array[1] es: \033[1;31m%i\033[0m", arregloUD[1]);
            printf("\n\tEl valor del array[2] es: \033[1;32m%i\033[0m", arregloUD[2]);
        }else if(((arregloUD[0] && arregloUD[2]) == 0) && (arregloUD[1] != 0)){                                                                        // R V R
            printf("\n\tEl valor del array[0] es: \033[1;31m%i\033[0m", arregloUD[0]);
            printf("\n\tEl valor del array[1] es: \033[1;32m%i\033[0m", arregloUD[1]);
            printf("\n\tEl valor del array[2] es: \033[1;31m%i\033[0m", arregloUD[2]);
        //! VERIFICAR
        /*}else if((arregloUD[0] == 0) && (arregloUD[1] && arregloUD[2] != 0)){                                                                        // R V V
            printf("\n\tEl valor del array[0] es: \033[1;31m%i\033[0m", arregloUD[0]);
            printf("\n\tEl valor del array[1] es: \033[1;32m%i\033[0m", arregloUD[1]);
            printf("\n\tEl valor del array[2] es: \033[1;32m%i\033[0m", arregloUD[2]);*/
        }else if(((arregloUD[1] && arregloUD[2]) == 0) && (arregloUD[0] != 0)){                                                                        // V R R
            printf("\n\tEl valor del array[0] es: \033[1;32m%i\033[0m", arregloUD[0]);
            printf("\n\tEl valor del array[1] es: \033[1;31m%i\033[0m", arregloUD[1]);
            printf("\n\tEl valor del array[2] es: \033[1;31m%i\033[0m", arregloUD[2]);
        //! VERIFICAR
        /*}else if(((arregloUD[0] && arregloUD[2]) != 0) && (arregloUD[1] == 0)){                                                                      // V R V
            printf("\n\tEl valor del array[0] es: \033[1;32m%i\033[0m", arregloUD[0]);
            printf("\n\tEl valor del array[1] es: \033[1;31m%i\033[0m", arregloUD[1]);
            printf("\n\tEl valor del array[2] es: \033[1;32m%i\033[0m", arregloUD[2]);
        }else if(((arregloUD[0] && arregloUD[1]) != 0) && (arregloUD[2] == 0)){                                                                        // V V R
            printf("\n\tEl valor del array[0] es: \033[1;32m%i\033[0m", arregloUD[0]);
            printf("\n\tEl valor del array[1] es: \033[1;32m%i\033[0m", arregloUD[1]);
            printf("\n\tEl valor del array[2] es: \033[1;31m%i\033[0m", arregloUD[2]);*/
        }else if((arregloUD[0] && arregloUD[1] && arregloUD[2]) != 0){                                                                                 // V V V
            printf("\n\tEl valor del array[0] es: \033[1;32m%i\033[0m", arregloUD[0]);
            printf("\n\tEl valor del array[1] es: \033[1;32m%i\033[0m", arregloUD[1]);
            printf("\n\tEl valor del array[2] es: \033[1;32m%i\033[0m", arregloUD[2]);
        }else{
            while (++indice < 3){                                                                                                                      // R R R
                printf("\n\tEl valor del array[%i] es: \033[1;31m%i\033[0m", indice, arregloUD[indice]);
            }
        }
        salir -= 1;
    }while(salir != 0);

    return EXIT_SUCCESS;
}

// Funcion.
void Wait(){
    puts("\n");
    system("PAUSE");
    system("cls");
}