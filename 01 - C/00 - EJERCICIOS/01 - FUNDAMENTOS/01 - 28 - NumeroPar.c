/*
** #########################################################################################
**  Archivo: 01 - 28 - NumeroPar.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code
**  Compilador      :   C/C++ Compiler (Linux)
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**              Realizar un programa que pueda a raiz de funciones con retorno verifique si
**              un numero es par o no.
** #########################################################################################
*/

// DIRECTIVAS DE PREPOCESADOR
#include <stdio.h>
#include <stdlib.h>

// PROTOTIPO(S) DE FUNCION(ES)
int Par();                                      //! FUNCION RECURSIVA TIPO ENTERO SIN PARAMETROS

// FUNCION PRINCIPAL
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

// FUNCION(ES)
int Par(){
    int nP;

    if(nP % 2 == 0)
        return 0;
    else
        return 1;

    //! RETORNAMOS EL VALOR QUE VAYA A TOMAR LA FUNCION PAR
    return Par;
}