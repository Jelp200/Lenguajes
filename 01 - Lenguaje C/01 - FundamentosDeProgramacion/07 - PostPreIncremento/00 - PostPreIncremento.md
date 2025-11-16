# POSTINCREMENTO Y PREINCREMENTO EN C :croissant:

El post y pre incremento sirven para poder incrementar el valor de una variable en una unidad, la única diferencia entre ellos es que el ***postincremento*** aumenta el valor de la variable después de que se haya evaluado la expresión, es decir, ***el valor original de la variable se utiliza en la expresión y luego se incrementa***. Mientras que en el ***preincremento*** aumenta el valor de la variable antes de que se evalué la expresión que la contiene, es decir, ***la variable se incrementa primero y luego se utiliza su nuevo valor en la expresión***.

A continuación, en el siguiente ejemplo se puede visualizar lo anterior:

```C
// PREINCREMENTO
int a = 0;
int b = ++a;
printf("a = %i y b = %i", a, b);

// POSTINCREMENTO
int c = 0;
int d = c++;
printf("a = %i y b = %i", c, d);

/*
En el primer caso a = 1 y b = 1
En el segundo caso c = 1 y d = 0
*/
```

## Usos

El [preincremento](./07%20-%2001%20-%20Preincremento.c) es utilizado cuando necesitamos el valor actual incrementado en una expresión, mientras que el [postincremento](./07%20-%2002%20-%20Postincremento.c) es utilizado cuando es necesario el valor original en una expresión antes de incrementar la variable.

Regresar al menú anterior [click auí](../00%20-%20Fundamentos.md).

Regresar al inicio [click auí](../../Inicio.md).
