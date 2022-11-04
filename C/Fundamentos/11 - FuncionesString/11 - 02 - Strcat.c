/*
** #########################################################################################
**      Archivo: 11 - 02 - Strcat.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          (Strcat) se declara de la siguiente manera:
**              strcat(Destino, Fuente);
**
**          Lo que hace está función es concatenar la cadena fuente a la de destino.
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>
#include <string.h>

// Main Function
int main(){
    char Cadena1[] = "Jelp200", Cadena2[] = "ICE 4 Dummies";
    char CadFinal[50];

    // Concatenamos
    strcat(CadFinal, Cadena1);
    strcat(CadFinal, " and ");
    strcat(CadFinal, Cadena2);
    printf("%s.", CadFinal);

    return 0;
}

/*
FUNCIONAMIENTO DEL PROGRAMA

Lo que hace nuestro programa es concatenar parte por parte las cadenas que están en nuestro programa.

En primera estancia pasa esto:
    CadFinal = "Jelp200"
    CadFinal = "Jelp200 + and"
    CadFinal = "Jelp200 + and + ICE 4 Dummies"
    
    Por lo cual se imprimira lo siguiente:

    CadFinal = "Jelp200 and ICE 4 Dummies"
*/