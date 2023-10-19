# VARIABLES EN C :croissant:
En C como en cualquier otro lenguaje de programación las variables son una parte muy importante para poder programar, dichas variables nos permiten guardar
valores en ellas, para poder declarar variables de manera correcta es necesario no incluir simbolos tales como "!", "?", "#", etc., para ello veamos como
poder declarar variables de con una sintaxis correcta.

### Declaración de variables.
- Manera correcta: "miVariable", "Mi_Variable2", "miVariable3", "MiVariable4".
- Manera incorrecta: "m!Variabl3", "Mi Variable2", "M1_Variabl 3", "#M1Variab13".

### Tipos de variables.
En C como en C++ tenemos tres tipos de declaración de variables, estas son:
- Defines: Estos defines nos permiten tener definir una variable la cual no cambiara su valor en el transcurso del programa.
- Variables globales: Dichas variables globales nos permitiran asignarles valores en cualquier parte del programa.
- Variables locales: Las variables locales como su nombre nos dice, son aquellas variables las cuales solo se usaran de manera local.
Veamos estos tres tipos de variables ya en C:
```C
/*
** #########################################################################################
**      Archivo: 02 - Variables.md
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
**      Notas:
**          Veremos como poder declarar variables en C.
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// DEFINES
#define DEFINE "Define"

// VARIABLE GLOBAL
char variableGlobal[] = "Variable global";

// FUNCION PRINCIPAL
int main(void){
    char vairableLocal[] = "Variable local";
    /*
        ...
        Código en C
        ...
    */
    return 0;
}
```
