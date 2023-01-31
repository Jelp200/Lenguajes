/*
** #########################################################################################
**  Archivo         :   09 - acceso.c
**  Proyecto        :   Mr.C (Ejercicios)
**  Herramienta(s)  :   Code::Blocks / Visual Studio Code
**  Compilador      :   C/C++ Compiler (Windows)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                      Realizar un programa que de acceso a un usuario
**                      al ingresar un usuario y contrase�a concreto.
** #########################################################################################
*/

// Directivas de preprocesador.
#include <stdio.h>
#include <string.h>

// Defines.
#define usr "JELP 200"
#define pswrd "ESIME Z 69"

// Funcion principal.
int main(void){

    char usrIn[20], pswrdIn[20];
    int intentos = 3;

    do{
        system("cls");

        puts("\n\t\t\tMR.C");
        printf("\t\tUsuario: "); gets(usrIn);
        printf("\t\tContrasenha: "); gets(pswrdIn);

        if((strcmp(usr, usrIn) && strcmp(pswrd, pswrdIn)) == 0){
            system("cls");
            printf("\n\t\t\tBienvenido al sistema %s", usrIn);
            break;
        }else{
            intentos--;
            printf("\n\t\tContrasenha incorrecta, le quedan %i intentos\n\n\n", intentos);
            system("PAUSE");
        }

    }while(intentos > 0);

    return 0;
}
