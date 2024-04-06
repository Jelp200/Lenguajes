/*
** #########################################################################################
**      Archivo: 03 - 03 - Strcmp.md
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
**      Notas:
**          Esta comparación se hace con numeros enteros, por ejemplo.
**              Si la Cad1 = Cad2 nos devolvera un 0
**              Si la Cad1 > Cad2 nos devolvera un n > 0
**              Si la Cad1 < Cad2 nos devolvera un n < 0
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <string.h>

// FUNCIÓN PRINCIPAL
int main(void){
    char Pswrd[] = "Password";
    char PswrdUsr[10];
    int iRest = 3;

    do{
        printf("Escriba el password: "); fflush(stdin); gets(PswrdUsr);

        if (strcmp(Pswrd, PswrdUsr) == 0){
            printf("Bienvenido al sistema...");
            break;
        }else{
            iRest--;
            printf("\n\nPassword incorrecto, le quedan %i intentos...\n", iRest);
            system("PAUSE");
            system("cls");
        }
    } while (iRest > 0);

    return 0;
}

/*
FUNCIONAMIENTO DEL PROGRAMA

Lo que hace nuestro programa es comparar dos cadenas para así saber si estas son iguales, mayores o menores.

El programa pide al usuario que digite un paswword, si este es igual al password guardado en el sistema, el mismo
sietema dara acceso al usuario, pero si no, el sistema le dira al usuario que digite un nuevo password y el conteto
de intentos se ira reduciendo hasta que cuando sea 0 el sistema saca al usuario del mismo.
*/