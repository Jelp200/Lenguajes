# ESTRUCTURAS CONDICIONALES :question:

Dentro de los lenguajes de programación en necesario tomar en cuenta las estructuras condicionales, dichas estructuras proporcionan soluciones para poder llevar a cabo tareas, rutinas u operaciones que se necesitan para dar solución a algún problema.

## <a href="07 - 01 - if.c">If.</a>

La estructura condicional `if` (si) es la estructura condicional principal, esta estructura tiene como significado que, si cumple la condición establecida, el bloque de código o proceso dentro de ella se ejecutara, su diagrama de flujo y declaración están dados de la siguiente manera:

<div> <img src="../../../IMGS/01 - Lenguaje C/01 - FundamentosDeProgramacion/07 - EstructurasCondicionales/01 - if.png"> </div>

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(){
   if(Condición a cumplir){
    // Proceso a realizar si se cumple la condición
   }
   return 0;
}
```

## <a href="07 - 03 - ifA.c">If's anidados.</a>

Un punto versátil que tiene la estructura condicional `if` es que se puede tener anidadas múltiples condiciones entre sí, esto quiere decir que se ejecutará la condición siguiente si se tiene una condición anterior a ella que se haya cumplido, su diagrama de flujo y declaración están dados de la siguiente manera:

<div> <img src="../../../IMGS/01 - Lenguaje C/01 - FundamentosDeProgramacion/07 - EstructurasCondicionales/02 - ifA.png"> </div>

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(){
    if(Condición 1 a cumplir){
        // Proceso a realizar si se cumple la condición 1.
        if(Condición 2 a cumplir){
            if(Condición 3 a cumplir){
                // Proceso a realizar si se cumple la condición
            }
        }
    }
    return 0;
}
```

## <a href="07 - 04 - ifElse.c">If - else.</a>

Está estructura se caracteriza por que al momento de no cumplirse la condición declarada está entrara a un segundo bloque de código que se ejecutara, dicho "sino" ejecutara una instrucción declarada por el programador, su diagrama de flujo y declaración están dados de la siguiente manera:

<div> <img src="../../../IMGS/01 - Lenguaje C/01 - FundamentosDeProgramacion/07 - EstructurasCondicionales/03 - ifElse.png"> </div>

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(){
    if(Condición a cumplir){
        // Proceso a realizar si se cumple la condición
    }else{
        // Proceso a realizar sino se cumple la condición
    }
    return 0;
}
```

## <a href="07 - 05 - ifElseIf.c">If - else - if.</a>

Las estructuras condicionales `if-else-if` o **_"sino si"_**, son aquellas las cuales permiten realizar una condicional y si esta no se cumple entra a otro bloque de código el cual realiza una acción si no se cumple dicha condicional puede tener una segunda condicional, su diagrama de flujo y declaración están dados de la siguiente manera:

<div> <img src="../../../IMGS/01 - Lenguaje C/01 - FundamentosDeProgramacion/07 - EstructurasCondicionales/04 - ifElseIf.png"> </div>

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(){
    if(Condición a cumplir){
        // Proceso a realizar si se cumple la condición
    }else if(Condición a cumplir){
        // Proceso a realizar sino se cumple la condición
    }
    return 0;
}
```

## <a href="07 - 06 - opTernario.c">Operador ternario.</a>

El operador ternario `(?)` no es una estructura de control en sí, sino, es un operador el cual permite traducir de manera más corta la estructura condicional `if-else`, su estructura es la siguiente:

```C
(Condición a cumplir) ? Expresión_1 : Expresión_2;
```

El siguiente ejemplo permite utilizar el operador ternario para comparar dos números:

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(){
    int n = 0;
    printf("De el numero a evaluar: "); scanf("%i", &n);
    (n > 0) ? (puts("n > 0")) : (puts("n < 0"));
    return 0;
}
/*
    De el numero a evaluar: [se ingresa 10]
    n > 0
*/
```

## <a href="07 - 07 - ifEndif.c">#if - #endif.</a>

A diferencia del `if` común, `#IF - #ENDIF` es una directiva de preprocesador las cuales permiten crear bloques condicionales de compilación. Estas directivas permiten controlar la inclusión o exclusión de secciones de código en función de condiciones predefinidas durante el proceso de compilación, su estructura es la siguiente:

```C
#if expresión
    // Proceso a realizar si la expresión es verdadera
#endif
```

De igual manera que en las estructuras condicionales, `#if - #endif` puede integrar `else` utilizando la directiva `#else`, esto puede verse de la siguiente manera:

```C
#if expresión
    // Proceso a realizar si la expresión es verdadera
#else
    // Proceso a realizar si la expresión es falsa
#endif
```

A su vez, también es posible utilizar `if – else - if` con la peculiaridad que la directiva a utilizar es `#elif`.

```C
#if expresión_1
    // Proceso a realizar si la expresión_1 es verdadera
#elif expresión_2
    // Proceso a realizar si la expresión_2 es verdadera
#elif expresión_3
    // Proceso a realizar si la expresión_3 es verdadera
#elif expresión_n
    // Proceso a realizar si la expresión_n es verdadera
#else
    // Proceso a realizar si ninguna expresión es verdadera
#endif
```

De igual forma se tiene `ifdef` y `ifndef` que permiten comprobar si una macro esta o no definida.

```C
#ifdef DEBUG
    // Código que se incluye si DEBUG está definido
#endif

#ifndef RELEASE
    // Código que se incluye si RELEASE no está definido
#endif
```

Por lo regular este tipo de condicionales son utilizadas para archivos tipo header.

Regresar al menú de fundamentos <a href="../../01 - FundamentosDeProgramacion/00 - Fundamentos.md">Click aquí</a>.