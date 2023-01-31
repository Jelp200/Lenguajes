/*
** #########################################################################################
**  Archivo         :   16 - nSecreto.c
**  Proyecto        :   Mr.C (Ejercicios)
**  Herramienta(s)  :   Code::Blocks / Visual Studio Code
**  Compilador      :   C/C++ Compiler (Windows)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa donde el usuario adivine el
**                      numero secreto.
** #########################################################################################
*/

// Directivas de preprocesador.
#include <stdio.h>

// Variable global.
int nRandom = 5;

// Funcion principal.
int main(){
    int opc, intento = 3;

    while (intento != 0){
        puts("\n\t\tNUMERO SECRETO.");
        printf("\n\t\tDe el numero secreto: "); scanf("%i", &opc);
        if(opc == nRandom){
            printf("\n\t\tAcerto al numero secreto...");
            break;

        }else{
            printf("\n\t\tIntentelo otra vez, el numero secreto esta entre 0 y 5...");

            intento -= 1;
            printf("\n\t\tLe quedan %i intentos.\n\n\n", intento);

            system("PAUSE");
            system("cls");
        }
    }
    return 0;
}
