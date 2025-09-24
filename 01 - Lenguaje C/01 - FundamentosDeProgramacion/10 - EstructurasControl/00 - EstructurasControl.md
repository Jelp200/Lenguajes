# ESTRUCTURAS DE CONTROL :military_helmet:

Las estructuras de control como su nombre lo dice, son estructuras que permiten realizar un control de una parte o bloques de código siempre y cuando se cumplan ciertas condiciones.

## <a href="10 - 01 - while.c">While.</a>

La estructura de control `while` (mientras) permite realizar una acción mientras se cumpla su condición inicial, su diagrama de flujo y declaración son:

<div> <img src="../../../imgs/01 - Lenguaje C/01 - FundamentosDeProgramacion/10 - EstructurasControl/01 - while.png"> </div>

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(){
   while(Condición a cumplir){
    // Proceso ciclico a realizar si se cumple la condición
   }
   return 0;
}
```

## <a href="10 - 02 - while.c">Do - while.</a>

La estructura de control `do – while` (hacer mientras) a diferencia de la estructura de control `while`, realiza un bucle el cual se rompe si una condición dada por el programador o el usuario se cumple, su diagrama de flujo y declaración están dados de la siguiente manera:

<div> <img src="../../../imgs/01 - Lenguaje C/01 - FundamentosDeProgramacion/10 - EstructurasControl/02 - doWhile.png"> </div>

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(){
   do{
    // Proceso ciclico a realizar si se cumple la condición
   }while(Condición a cumplir);
   return 0;
}
```

## <a href="10 - 03 - for.c">For.</a>

El ciclo `for` (para) es un bucle el cual permite realizar un código para ciertas condiciones iniciales declaradas "n" número de veces.

Algo importante que destacar es que estos ciclos `for` permiten ingresar datos dentro de un arreglo de tamaño "n", por lo cual para poder llenar dicho arreglo lo que se hace es que el ciclo o bucle recorre cada elemento del arreglo para poder llenarlo con su respectivo dato, su diagrama de flujo y declaración están dados de la siguiente manera:

<div> <img src="../../../imgs/01 - Lenguaje C/01 - FundamentosDeProgramacion/10 - EstructurasControl/03 - for.png"> </div>

Se puede observar que para poder utilizar un ciclo al menos en el lenguaje de programación C/C++ es necesario tener una variable la cual permite controlar dicho ciclo, la mayoría de las veces por convicción esta variable es llamada `i`, está `i` comenzara desde algún lugar y llega a otro, y siempre dará ciertos pasos, ya sea hacía atrás o hacía adelante.

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(){
    for(Inicialización; Condición; Pasos){
        // ...
        // Código a ejecutarse dentro del ciclo
        // ...
    }
   return 0;
}
```

## <a href="10 - 04 - forA.c">For anidados.</a>

Al igual que las estructuras condicionales `if`, los ciclos `for` de igual manera pueden ser anidados, su diagrama de flujo y declaración están dados de la siguiente manera:

<div> <img src="../../../imgs/01 - Lenguaje C/01 - FundamentosDeProgramacion/10 - EstructurasControl/04 - forA.png"> </div>

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(){
    for(Inicialización_1; Condición_1; Pasos){
        for(Inicialización_2; Condición_2; Pasos){
            for(Inicialización_n; Condición_n; Pasos){
                // Código a ejecutarse dentro del ciclo “n”
            }
            // Código a ejecutarse dentro del ciclo 2
        }
        // Código a ejecutarse dentro del ciclo 2
    }
   return 0;
}
```
Algo importante a denotar es que por convicción después de utilizar la variable `i` dentro de un ciclo se utilizara las siguientes letras del abecedario para poder utilizarlas en los otros ciclos (`j`, `k`, etc.).

Regresar al menú de fundamentos <a href="../../01 - FundamentosDeProgramacion/00 - Fundamentos.md">Click aquí</a>.