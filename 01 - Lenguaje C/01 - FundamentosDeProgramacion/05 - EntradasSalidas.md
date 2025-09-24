# ENTRADAS Y SALIDAS EN C :croissant:

Las entradas y salidas de datos son más que importantes debido a que con ellas se tendrá la visualización e ingreso de datos a los programas codificados que se realizarán. Para poder ingresar o visualizar estos datos, se utilizarán palabras reservadas, las palabras reservadas para las entradas y salidas son:

```C
// ENTRADAS
scanf("%tipoDato", &variable);

// SALIDAS
printf("Texto %tipoDato", variable);
puts("Cadena de caracteres");
```

El siguiente ejemplo de código permite al usuario ingresar datos para su posterior visualización en consola.

```C
/*
** #########################################################################################
**      Archivo: 05 - EntradasSalidas.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCION PRINCIPAL
int main(void){
    // Variables locales.
    int n = 0; char c;
    puts("Por favor de un número y una letra: "); scanf("%i %c", &n, &c);
    printf("El numero es %i y la letra es %c", n, c);
    return 0;
}
/*
Por favor de un numero y una letra:
El numero es (numero dado) y la letra es (letra dada).
*/
```

Regresar al menú de fundamentos <a href="../01 - FundamentosDeProgramacion/00 - Fundamentos.md">Click aquí</a>.