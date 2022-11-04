/*
** #########################################################################################
**      Archivo: 03-TiposDeDatos.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Entradas y salidas en C.
** #########################################################################################
*/

// Directivas de preprocesador.
#include <stdio.h>

// Variable global.
char string[50];
int n;


// Función principal.
int main(void){

    puts("\n\t\t\tSALIDAS EN CONSOLA");
    printf("\t\tSalida con \'printf\'");
    puts("\t\tSalida con \'puts\'");

    system("PAUSE");
    system("cls");

    puts("\n\t\t\tENTRADAS EN CONSOLA");
    printf("\t\tEntrada com \'gets\', de una cadena de texto: "); gets(string);
    printf("\t\tLo ingresado es: %s", string);
    printf("\n\n\t\tEntrada con \'scanf\', de una numero: "); scanf("%i", &n);
    printf("\t\tLo ingresado es: %i", n);

    return 0;
}