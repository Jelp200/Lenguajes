# POSTINCREMENTO Y PREINCREMENTO EN C :croissant:
El postincremento y preincremento son operadores los cuales son muy utilizados para aumentar el valor de una variable en 1. Estos operadores son comunes
en los lenguajes de programación tales como C/C++, Java, etc. La diferencia principal entre ellos es cuándo se realiza el incremento en relación con la
evaluación de la expresión.

### <a href="09 - 01 - Codigos/09 - 01 - 01 - Preincremento.c">Preincremento</a>
El preincremento(++variable) nos da la oportunidad de incrementar la variable en 1 antes de que se evalue la expresión en la que se encuentra. Es decir,
primero se aumenta la variable y luego se utiliza el nuevo valor.
```C
int x = 5;
int y = ++x; // "x" pasa a ser 6 y luego se le asigna el valor
/*
x -> 5 + 1 -> 6
x -> y
*/
```

### <a href="09 - 01 - Codigos/09 - 01 - 02 - Postincremento.c">Postincremento</a>
El postincremento(variable++) nos da la oportunidad de incrementar de igual manera la variable en 1 después de que se evalue la expresión en la que se
encuentra. Es decir, primero se utiliza el valor actual de la variable y luego se aumenta.
```C
int x = 5;
int y = x++; // "x" se asigna a "y" y luego se incrementa "x" a 6
/*
x -> y 
x -> 5 + 1 -> 6
*/
```

### Usos
El preincremento es utilizado cuando necesitamos el valor actual incrementado en una expresión, mientras que el postincremento es utilizado cuando es
necesario el valor original en una expresión antes de incrementar la variable.
