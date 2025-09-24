# POSTINCREMENTO Y PREINCREMENTO EN C :croissant:

El post y pre incremento sirven para poder incrementar el valor de una variable en una unidad, la única diferencia entre ellos es que el **_postincremento_** aumenta el valor de la variable después de que se haya evaluado la expresión, es decir, **_el valor original de la variable se utiliza en la expresión y luego se incrementa_**. Mientras que en el **_preincremento_** aumenta el valor de la variable antes de que se evalué la expresión que la contiene, es decir, **_la variable se incrementa primero y luego se utiliza su nuevo valor en la expresión_**.

A continuación, en el siguiente ejemplo se puede visualizar lo anterior:

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(){
    // PREINCREMENTO
    int a = 0;
    int b = ++a;
    printf("a = %i y b = %i", a, b);

    // POSTINCREMENTO
    int c = 0;
    int d = c++;
    printf("a = %i y b = %i", c, d);
    
    return 0;
}
/*
    En el primer caso a = 1 y b = 1
    En el segundo caso c = 1 y d = 0
*/
```

## Usos

El <a href="./09 - 01 - Preincremento.c">preincremento</a> es utilizado cuando necesitamos el valor actual incrementado en una expresión, mientras que el <a href="./09 - 02 - Postincremento.c">postincremento</a> es utilizado cuando es necesario el valor original en una expresión antes de incrementar la variable.

Regresar al menú de fundamentos <a href="../../01 - FundamentosDeProgramacion/00 - Fundamentos.md">Click aquí</a>.