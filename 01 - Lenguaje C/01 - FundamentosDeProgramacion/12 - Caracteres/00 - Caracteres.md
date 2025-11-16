# CARACTERES :croissant:

Dentro del lenguaje de programación C se tienen funciones las cuales permiten manejar y manipular caracteres, para ello es importante incluir la librería `ctype.h` de la siguiente forma:

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <ctype.h>
```

Una vez incorporada la librería es posible ahora si manejar diferentes funciones de trabajo para los caracteres.

## [`isalpha`](./12%20-%2001%20-%20isalpha.c)

Verifica si un carácter es una letra del alfabeto.

```c
char c = 'C';

if (isalpha(c))
    printf("\'%c\' es una letra.", c);
else
    printf("\'%c\' no es una letra.", c);
```

## [`isdigit`](./12%20-%2002%20-%20isdigit.c)

Verifica si un carácter es un digito numérico.

```c
char c = '4';
    
if (isdigit(c))
    printf("\'%c\' es un digito.", c);
else
    printf("\'%c\' no es un digito.", c);
```

## [`isalnum`](./12%20-%2003%20-%20isalnum.c)

Verifica si un carácter es una letra de alfabeto o un digito.

```c
char c = '9';

if (isalnum(c)) {
    printf("'%c' es un carácter alfanumérico.\n", c);
else
    printf("'%c' no es un carácter alfanumérico.\n", c);
```

## [`isupper`](./12%20-%2004%20-%20isupper.c)

Verifica si un carácter está en mayúscula.

```c
char c = 'C';

if (isupper(c)) {
    printf("'%c' está en mayúscula.\n", c);
else
    printf("'%c' no está en mayúscula.\n", c);
```

## [`islower`](./12%20-%2005%20-%20islower.c)

Verifica si un carácter está en minúsculas.

```c
char c = 'c';

if (islower(c)) {
    printf("'%c' está en minúscula.\n", c);
else
    printf("'%c' no está en minúscula.\n", c);
```

## [`toupper`](./12%20-%2006%20-%20toupper.c)

Convierte un carácter en minúscula a mayúscula.

```c
char c = 'c'; char upper = toupper(c);

printf("%c antes del \'toupper()\' | %c despues del \'toupper()\'", c, upper);
```

## [`tolower`](./12%20-%2007%20-%20tolower.c)

Convierte un carácter en mayúscula a minúscula.

```c
char c = 'C'; char lower = tolower(c);

printf("%c antes del \'tolower()\' | %c despues del \'tolower()\'", c, lower);
```

## [`isspace`](./12%20-%2008%20-%20isspace.c)

Verifica si un carácter es un espacio en blanco (espacio, tabulación, etc.).

```c
char c = ' ';

if (isspace(c)) {
    printf("El carácter es un espacio en blanco.\n");
else
    printf("El carácter no es un espacio en blanco.\n");
```

## [`ispunct`](./12%20-%2009%20-%20ispunct.c)

Verifica si un carácter es un signo de puntuación.

```c
char c = '.';

if (ispunct(c)) {
    printf("'%c' es un signo de puntuación.\n", c);
else
    printf("'%c' no es un signo de puntuación.\n", c);
```

## [`isxdigit`](./12%20-%2010%20-%20isxdigit.c)

Verifica si un carácter es un dígito hexadecimal.

```c
char c = 'A';

if (isxdigit(c)) {
    printf("'%c' es un dígito hexadecimal.\n", c);
else
    printf("'%c' no es un dígito hexadecimal.\n", c);
```

Regresar al menú anterior [click aquí](../00%20-%20Fundamentos.md).

Regresar al inicio [click aquí](../../Inicio.md).

