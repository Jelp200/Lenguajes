/*
** #########################################################################################
**      Archivo: 03-TiposDeDatos.c
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   Code::Blocks
**      Notas:
**          Veremos los tipos de datos basicos en C.
** #########################################################################################
*/

// Directivas de preprocesador.
#include <stdio.h>

// Variable global.
char caracter = 'C';
char string[] = "String";
int entero = 1;
float decimal = 1.2;


// Función principal.
int main(void){

    printf("\n\t\tDato tipo char: %c", caracter);
    printf("\n\t\tDato tipo entero: %i", entero);
    printf("\n\t\tDato tipo decimal: %.1f", decimal);
    printf("\n\t\tDato tipo string: %s", string);

    return 0;
}

/*
De igual manera tenemos:
    %d  ->  Dato de convierte a entero deciaml
    %o  ->  Dato entero se convierte a octal
    %x  ->  Dato entero se convierte a hexadecimal
    %u  ->  Dato entero se convierte a entero sin signo
    %e  ->  El dato de considera tipo flotante (Notacion cientifica de la forma {-} n.mmmmmmE {+/-} dd)
    %g  ->  El dato de considera tipo float (Se convierte según el código %e o %f dependiendo de la representación más corta)
    %lf ->  El dato se considera tipo double
*/