# ESTRUCTURAS DE SELECCION :question:

Las estructuras de selección `switch – case` a diferencia se la estructura condicional `if`, son estructuras las cuales tener múltiples casos y de estos múltiples casos poder seleccionar uno que cumpla la condición de dicho caso, una analogía muy utilizada en las estructuras de selección es la de un menú, su diagrama de flujo y declaración están dados de la siguiente manera:

<div> <img src="../../../IMGS/01 - Lenguaje C/01 - FundamentosDeProgramacion/08 - EstructurasDeSeleccion/01 - switchCase.png"> </div>

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(){
    switch(Preparación){
        case 1: // Código case 1;
            break;
        // …
        case n: // Código case n;
            break;
        default: // Código default;
            break;
    }
   return 0;
}
```

Código de ejemplo <a href="08 - 01 - switchCase.c">click aquí</a>.

Regresar al menú de fundamentos <a href="../../01 - FundamentosDeProgramacion/00 - Fundamentos.md">Click aquí</a>.