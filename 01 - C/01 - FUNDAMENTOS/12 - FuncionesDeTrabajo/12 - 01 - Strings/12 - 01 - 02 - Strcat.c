/*
** #########################################################################################
**      Archivo: 12 - 01 - 02 - Strcat.md
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <string.h>

// FUNCIÓN PRINCIPAL
int main(void){
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