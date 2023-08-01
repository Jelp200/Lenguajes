/*
** #########################################################################################
**      Archivo: 12 - 04 - NumeroPar.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**              Realizar un programa que pueda a raiz de funciones con retorno verifique si
**              un numero es par o no.
** #########################################################################################
*/

// Directivas de prerpocesador
#include <stdio.h>
#include <stdlib.h>

// Prototipo(s) de funcion(es)
int Par();                                      //! FUNCION RECURSIVA TIPO ENTERO SIN PARAMETROS

// Main function
int main(){
    int n, aux;

    printf("\n\t\tDe un numero: "); scanf("%i", &n);

    /* ASIGNAMOS EL VALOR DE LA FUNCIÓN PAR A NUESTRA VARIABLE AUXILIAR */
    //! Nota: Necesitamos pasar el valor pedido al usuario a nuestra funcion, todo ello debido a
    //! que la operacion realizada en la funcion necesita de un valor procporcionado.
    aux = Par(n);

    if(aux == 0)
        puts("\n\t\tEl valor dado es par...");
    else
        puts("\n\t\tEl valor dado no es par...");

    return EXIT_SUCCESS;
}

// Funcion(es)
int Par(){
    int nP;

    if(nP % 2 == 0)
        return 0;
    else
        return 1;

    //! RETORNAMOS EL VALOR QUE VAYA A TOMAR LA FUNCION PAR
    return Par;
}