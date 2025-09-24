# FUNCIONES STRING :chains:

Las funciones de tipo string (str) permiten realizar operaciones para el manejo de cadenas de caracteres en el lenguaje C, por ello es importante incluir la librería **_`string.h`_** de la siguiente manera:

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <string.h>
```

Una vez incorporada la librería es posible ahora si manejar las siguientes funciones de trabajo para las cadenas de caracteres:

## <a href="13 - 01 - strcpy.c">String copy</a>

Permite copiar una cadena de caracteres en otra, para ello es necesario considerar que la dimensión del arreglo de destino debe ser igual o mayor que el arreglo de origen, y que, además, sobrescribe el contenido del destino (de existir).

```C
strcpy(Destino, Origen);
```

### <a href="13 - 02 - strcat.c">String concatenate</a>

Concatena (agrega/suma) la cadena fuente en el destino, se debe considerar que la cadena de destino debe tener un tamaño tal que pueda albergar la cadena resultante.

```C
strcpy(Destino, Origen);
```

La fuente no solamente puede ser un arreglo que tenga un dato preestablecido, sino también, algún carácter o alguna cadena de caracteres dados por el usuario.

## <a href="13 - 03 - strcmp.c">String comparision</a>

Permite comparar dos cadenas de texto carácter por carácter, está función se denomina “case sensitive” debido a que la comparación hecha es sensible a mayúsculas y minúsculas.
Al momento en el cual la función encuentra una diferencia, dicha función devuelve un valor entero ya sea positivo o negativo correspondiente a una diferencia (resta) en valor decimal según el código ASCII el cuál es correspondiente a la siguiente tabla:

| **Si la cadena "1" es:** | **Devuelve** |
|--------------------------|--------------|
|   == que la cadena "2"   |       0      |
|    > que la cadena "2"   |     n > 0    |
|    < que la cadena "2"   |     n < 0    |

```C
strcmp(Cadena_1, Cadena_2);
```

## <a href="13 - 04 - strlen.c">String length</a>

Devuelve un número entero que representa la longitud de una cádena de texto (Incluyendo espacios en blanco, pero excluyendo el carácter `NULL`).

```C
strlen(Cadena);
```

## <a href="13 - 05 - strlu.c">String lower y upper</a>

Permiten convertir cadenas de caracteres de minúsculas a mayúsculas y viceversa.
```C
strlwr(Cadena);
strupr(Cadena);
```

## <a href="13 - 06 - strrch.c">String remaining character</a>

Regresa el restante de la cadena a partir de la primera aparición del carácter indicado.

```C
strrch(Cadena, Caracter);
```

## <a href="13 - 07 - strrev.c">String reverse</a>

Toma la cadena de origen y revierte dicha cadena.

```C
strrev(Cadena, Caracter);
```

Regresar al menú de fundamentos <a href="../../01 - FundamentosDeProgramacion/00 - Fundamentos.md">Click aquí</a>.
