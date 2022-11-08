/*
** #########################################################################################
**      Archivo: 11 - 03 - Strcmp.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          String comparation (Strcmp) se declara de la siguiente manera:
**              strcmp(Cadena1, Cadena2);
**
**          Lo que hace está función es comparar dos cadenas, esta comparación se hace con
**          numeros enteros, por ejemplo.
**              Si la Cad1 = Cad2 nos devolvera un 0
**              Si la Cad1 > Cad2 nos devolvera un n > 0
**              Si la Cad1 < Cad2 nos devolvera un n < 0
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>
#include <string.h>

// Main Function
int main(){
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