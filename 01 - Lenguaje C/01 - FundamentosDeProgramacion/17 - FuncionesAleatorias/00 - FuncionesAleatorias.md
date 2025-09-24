# FUNCIONES ALEATORIAS :hourglass:
Dentro del lenguaje de programación C es posible generar números aleatorios gracias a funciones específicas, antes de ver dichas funciones es necesario incluir la librería **_`stdlib.h`_** para poder trabajar con estos números aleatorios.

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <stdlib.h>
```

## Random

La función `rand()` genera un número entero pseudoaleatorio el cual se encuentra entre `0` y `RAND_MAX` (constante igual a 32, 767).

```C
rand();
```

## Seed random

Permite inicializar el generador de números aleatorios con una semilla (seed). Al momento de dar una semilla diferente, `rand()` generará una secuencia diferente de números pseudo aleatorios.

```C
srand(unsigned int seed);
```

Es importante decir que por lo regular al momento de utilizar `srand()` para generar una semilla, es necesario incluir la librería `time.h`.

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
```

Una vez incorporada la librería `time.h`, es posible inicializar el generador de números aleatorios con el tiempo actual, esto se realiza de la siguiente manera:

```C
srand(time(NULL));
```

Y si se desea generar números aleatorios en un rango especifico se tiene:

```C
variable = limInf + rand() % ((limSup + 1) - limInf);
```

El siguiente ejemplo genera números aleatorios en un rango de 1 a 10.

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// PROTOTIPO(S) DE FUNCION(ES)
void fncRand();

// FUNCIÓN PRINCIPAL
int main(){
    fncRand();
    return 0;
}

// FUNCION(ES)
void fncRand(){
    int n;
    srand(time(NULL));
    n = 1 + rand() % ((10 + 1) - 1);
    printf("%d", n);
}
```

Regresar al menú de fundamentos <a href="../../01 - FundamentosDeProgramacion/00 - Fundamentos.md">Click aquí</a>.
