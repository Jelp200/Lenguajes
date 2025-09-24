# ENTRADAS Y SALIDAS ESTÁNDAR EN C :infinity:

## Introducción

Cuando se programa en C se cree que las entradas y salidas son algo que vienen implícito en dicho lenguaje, pero esto no es así. Sin embargo, los programas interactúan con su medio ambiente en formas mucho más complicadas.
La biblioteca **_`stdio.h`_** consiste en un modelo simple de entrada y salida de texto. Un flujo de texto consiste en una secuencia de líneas, el cual cada una termina con un carácter de nueva línea `\n`. Si el sistema operativo (SO) no opera de este modo, la biblioteca hace lo pertinente para simular que así funciona.
El mecanismo de entrada más simple es leer un carácter a la vez de la entrada estándar, normalmente el teclado, son:

```C
int getchar(void);
```

`getchar` regresa el siguiente carácter de la entrada cada vez que se invoca, o `EOF` (End of the file). Es importante recalcar que EOF está definida en la biblioteca **_`stdio.h`_** y su valor típicamente es -1.
Algunas veces un archivo puede tomar el lugar del teclado empleando la conversión `<` para redireccionamiento de entrada: si un programa usa `getchar`, entonces la línea de ordenes sería:

```C
programa < archivo_entrada;
```

Esto provoca que el programa lea caracteres del archivo. El cambio de la entrada se realiza de manera en la cual el programa mismo es ajeno al cambio; en particular; la cadena `< archivo_entrada` no está incluida entre los argumentos de la línea de órdenes `argv`. El cambio de la entrada es también invisible si la entrada viene de otro programa vía un mecanismo de interconexión (pipe): en algunos sistemas, la línea de órdenes ejecuta tanto el programa `otro_progama` como a `programa`, e interconecta a la salida estándar de `otro_progama` con la entrada estándar para `programa`.
Ahora bien, la siguiente función:

```C
int putchar(void);
```

Es empleada para la salida en donde `putchar(c)` coloca el carácter `c` en la salida estándar, que por omisión es la pantalla; `putchar` regresa el carácter escrito, o `EOF` si ocurre algún error. La salida puede ser dirigida hacia algún archivo con `< nombre_archivo`, si `programa` utiliza `putchar` escribira la salida estándar hacia `archivo_salida`.

```C
programa < archivo_salida;
```

La salida producida por `printf` también encuentra su camino hacia la salida estándar. Las llamadas a `putchar` y `printf` suelen estar traslapadas.
Es importante decir que cada archivo fuente que se refiera a una función de biblioteca de E/S debe contener la directiva de preprocesador **_`stdio.h`_**.
Antes de la primera referencia. Cuando un nombre está delimitado por`<` y `>` se realiza una búsqueda del `header` en algunos lugares estándar, regularmente en los sistemas UNIX es el directorio `/usr/include`.
Varios programas leen solo el flujo de entrada y escriben solo el de salida; para dichos programas la entrada y salida con `getchar`, `putchar` y `printf`, pueden ser totalmente adecuada y en realidad es suficiente en un comienzo. Esto es totalmente cierto si se emplea la redirección para conectar la salida de un programa a la entrada de otro. Ejemplo, considere un programa que permite convertir su entrada en minúsculas:

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <ctype.h>

// FUNCIÓN PRINCIPAL
int main(){
    int c;
    while((c = getchar()) != EOF)
        putchar(tolower(c));
    return 0;
}
```

`tolower` está definida en `ctype`; hay que recordar que convierte una letra mayúscula a minúscula, y regresa los otros caracteres intactos.

### <a href="22 - 02 - Printf.c">Salida con formato "printf"</a>

La función `printf` traduce los valores internos a caracteres. Con anterioridad se empleó informalmente la función para visualizar diferentes datos, formalmente la función está definida de la siguiente manera:

```C
int printf(char *format, arg_1, arg_2, …);
```

`printf` convierte, da formato e imprime sus argumentos en la salida estándar bajo el control de `format`. Regresa el número de caracteres impresos. Dicha cadena de formato permite contener dos tipos de objetos: caracteres ordinarios (son copiados al flujo de salida), y especificaciones de conversión (cada uno de los cuales causa la conversión e impresión de los siguientes argumentos sucesivos a la función). Cada especificación de conversión comienza con `%` y termina con un carácter de conversión. Entre `%` y el carácter de conversión pueden estar:

- Un signo menos `-`, especifica el ajuste a la izquierda del argumento convertido.
- Un número especifica el ancho mínimo del campo. El argumento convertido será impreso dentro de un campo de al menos este ancho y si es necesario se llenará con espacios en blanco a la izquierda o derecha para completar la amplitud del campo.
- Un punto `.`, que separa el ancho de campo de la precisión.
- Un número, la precisión, que especifica el número máximo de caracteres de una cadena que serán impresos, o el número de dígitos después del punto decimal de un valor de punto flotante, o el número mínimo de dígitos para un entero.
- Una `h` si el entero será impreso como un `short`, o una `l` si será como un `long`.
A continuación, la siguiente tabla presenta las conversiones básicas de la función `printf`.

| **Carácter** | **Tipo de argumento: impreso como**                                                                          |
|--------------|--------------------------------------------------------------------------------------------------------------|
| **d, i**     | _**`int`**_: Número decimal.                                                                                   |
| **o**        | _**`int`**_: Número octal sin signo (sin cero inicial).                                                        |
| **x, X**     | _**`int`**_: Número hexadecimal sin signo (con un 0X o 0x inicial, usando abcdef o ABCDEF para 10,...,15).     |
| **u**        | _**`int`**_: Número decimal sin signo.                                                                         |
| **c**        | _**`int`**_: Carácter sin signo.                                                                               |
| **s**        | _**`char`**_ *: Imprime caracteres de una cadena hasta un "\0" o el número de caracteres dado por la precisión |
| **f**        | _**`double`**_                                                                                                 |
| **e, E**     | _**`double`**_                                                                                                 |
| **g, G**     | _**`double`**_: Usa "%e" o "%E" si el exponente es < que -4 o >= que la precisión (predeterminado a 6).        |
| **p**        | _**`void`**_ *: Apuntador.                                                                                     |
| **%**        | No es convertido en ningún argumento, imprime "%"                                                            |

Si el carácter después del `%` no es una especificación de conversión, el comportamiento no está definido.
Una amplitud o precisión se puede especificar por `*`, en cuyo caso el valor se calcula convirtiendo el siguiente argumento (int). Ejemplo, para imprimir al menos un máximo de caracteres de una cadena `s`, se tiene:

```C
int printf(“%s. *s”, max, s);
```

A continuación, la siguiente tabla muestra el efecto de una variedad de especificaciones al imprimir un `hola, mundo`.

| **Especificación** | **Salida**                           |
|--------------------|--------------------------------------|
| **`:%s:`**           | `:hola, mundo:`                        |
| **`:%10s:`**         | `:hola, mundo:`                        |
| **`:%.10s:`**        | `:hola, mund:`                         |
| **`:%-10s:`**        | `:hola, mundo:`                        |
| **`:%.15s:`**        | `:hola, mundo    :`                    |
| **`:%-15s:`**        | `:hola, mundo:`                        |
| **`:%15.10s:`**      | `:     hola, mund:`                    |
| **`:%-15.10s:`**     | `:hola, mundo    :`                    |

`printf` emplea su primer argumento para decidir cuántos argumentos le siguen y cuáles son sus tipos. `printf` se confundirá y se obtendrán resultados erróneos si no hay suficientes argumentos o si se tienen tipos incorrectos, esto es:

```C
printf(s);			// FALLA si “s” contiene %
printf(“%s”, s);		// SEGURO
```

### <a href="">Lista de argumentos con longitud variable</a>

En esta sección se verá el cómo realizar una versión mínima de `printf`, para mostrar como escribir una función que procese una lista de argumentos de longitud variable en una forma trasportable. Puesto que es de sumo interés el procesamiento de argumentos en la función, la función `miniPrintf` procesará la cadena de formato y los argumentos, pero llamará al `printf` real para hacer las conversiones del formato.
Hay que recordar que `printf` se declara de la siguiente manera:

```C
int printf(char *format, arg_1, arg_2, …);
```

En la declaración significa que el número y tipo de estos argumentos puede variar. La declaración solo puede aparecer al final de la lista de argumentos.
La nueva función `miniPrintf` se declarará como:

```C
void miniPrintf(char *format, arg_1, arg_2, …);
```

Es posible observar que es una función vacía dado que no regresara la cuenta de caracteres que regresa `printf`. `miniPrintf` permite recorrer la lista de argumentos cuando la lista ni siquiera tiene nombre. Para poder recorrer dicha lista, lo que se hace será llamar a la siguiente biblioteca o header:

```C
#include <stdarg.h>
```

`stdarg.h` contiene un conjunto de macro definiciones que permiten avanzar sobre una lista de argumentos.
El siguiente código en C hace uso de dichas macros para formar la base del `miniPrintf` simplificado.

```C
#include <stdarg.h>
/*miniPrintf: printf minimisa con lista variable de argumentos*/
void miniPrintf(char *fmt, ...){
    va_list ap; /* apunta a cada arg sin nombre en orden */
    char *p, *sval;
    int ival;
    double dval;
    double dval;
    va_start(ap, fmt); /* hace que ap apunte al 1er. arg sin nombre */
    for (p = fmt; *p; p++ ){
        if (*p != '%'){
            putchar(*p);
            continue;
        }
        switch (* ++p){
            case 'd':
                ival = va_arg(ap, int);
                printf("%d", ival);
                break;
            case 'f':
                dval = va_arg(ap, int);
                printf("%f", dval);
                break;
            case 's':
                for (sval = va_arg(ap, char *); *sval; sval++ )
                putchar(*sval);
                break;
            default:
                putchar(*p);
                break;
            }
        }
    va_end(ap); /* limpia cuando todo está hecho */
}
```

El código anterior significa lo siguiente:

```C
void miniPrintf(char *fmt, ...){
    va_list ap; /* apunta a cada arg sin nombre en orden */
    char *p, *sval;
    int ival;
    double dval;
```

- Define la función `miniPrintf` que toma una cadena de formato `fmt` y una lista de argumentos variables (indicada por `…`).
- Declara `va_list ap` para manejar la lista de argumentos variables.
- Declara punteros de caracteres `p”` y `sval`, un entero `ival`, y un doble `dval` para almacenar valores extraídos de los argumentos.

```C
    for (p = fmt; *p; p++ ){
```

- Itera a través de cada carácter en la cadena de formato `fmt`.

```C
        if (*p != '%'){
            putchar(*p);
            continue;
        }
```

- Si el carácter actual no es `%`, se imprime tal cual usando `putchar`. Se usa `continue` para pasar al siguiente carácter en la cadena de formato.

```C
        switch (* ++p){
            case 'd':
                ival = va_arg(ap, int);
                printf("%d", ival);
                break;
```

- Si se encuentra un `%`, el siguiente carácter determina el tipo de argumento a esperar.
- `case 'd' `: Si el especificador de formato es `d`, se obtiene un argumento de tipo `int` usando `va_arg` y se almacena en `ival`. Luego se imprime el valor con `printf`.

```C
            case 'f':
                dval = va_arg(ap, int);
                printf("%f", dval);
                break;
```

- `case 'f' `: Si el especificador de formato es `f`, se obtiene un argumento de tipo `double` usando `va_arg` y se almacena en `dval`. Luego se imprime el valor con `printf`.

```C
            case 's':
                for (sval = va_arg(ap, char *); *sval; sval++ )
                putchar(*sval);
                break;
```

- `case 's' `: Si el especificador de formato es `s`, se obtiene un argumento de tipo `char*` (cadena de caracteres) usando `va_arg` y se almacena en `sval`. Luego se imprime la cadena carácter por carácter usando un bucle `for` y `putchar`.

```C
            default:
                putchar(*p);
                break;
            }
        }
    va_end(ap); /* limpia cuando todo está hecho */
}
```

- `default`: Si el especificador de formato no coincide con ninguno de los casos anteriores, simplemente se imprime el carácter tal cual.
- `va_end(ap)`: Finaliza el procesamiento de la lista de argumentos variables. Es una buena práctica llamar a `va_end` cuando se ha terminado de acceder a la lista de argumentos.

### <a href="22 - 04 - Scanf.c">Entrada con formato "scanf"</a>

La función `scanf` es la parte análoga de entrada de `printf`.

```C
int scanf(char *format, …);
```

`scanf` permite leer caracteres de entrada, los interpreta acorde con las especificaciones que se encuentran en `format`, y almacena los resultados a través de los argumentos restantes. El argumento de formato se describe abajo; los otros argumentos, cada uno de los cuales debe ser un apuntador, indican donde deberá almacenarse la entrada correspondiente convertida.
`scanf` se detiene cuando termina con su cadena de formato, o cuando alguna entrada no coincide con la especificación de control.
De igual forma, existe también una función “sscanf” que lee una cadena y no la entrada estándar.

```C
int sscanf(char *cadena, char * format, arg_1, arg_2, …);
```

`sscanf` rastrea la cadena de acuerdo con el formato en `format`, y almacena el valor resultante a través de `arg_1`, `arg_2`, etc. La cadena de formato contiene especificaciones de conversión, las cuales son empleadas para controlar la conversión de entrada. La cadena formato puede contener:

- Tabuladores o espacios en blanco (Son ignorados).
- Caracteres ordinarios (no `%`), se espera que coincida con el siguiente carácter que no sea espacio en blanco de flujo de entrada.
- Especificaciones de conversión, consistentes en el carácter `%`, un carácter optativo de supresión de asignación `*`, un número optativo que especifica el ancho máximo de campo, una `h`, `l`, o `L` optativa que indica la amplitud del objetivo, y un carácter de conversión.
Un campo de entrada está definido como una cadena de caracteres que no son espacio en blanco; se extiende hasta el siguiente espacio en blanco o hasta el campo del ancho se agote, si se especifica. Osea, `scanf` leerá entre líneas para encontrar su entrada, ya que nuevas líneas son espacios en blanco.
El carácter de conversión indica la interpretación del campo de entrada. El argumento correspondiente debe ser un apuntador `&`. Los caracteres de conversión son:

| **Carácter** | **Tipo de argumento: impreso como**                                                                          |
|--------------|--------------------------------------------------------------------------------------------------------------|
| **d, i**     | _**`int`**_ *: Entero decimal (Puede estar en octal inicando en 0, o en hexadecimal iniciando con 0x o 0X).    |
| **o**        | _**`int`**_ *: Entero octal (con o sin cero inicial).                                                          |
| **x**        | _**`int`**_ *: Entero hexadecimal (Iniciando o no con 0x o 0X).                                                |
| **u**        | _**`int`**_ *: Entero decimal sin signo                                                                        |
| **c, f**     | _**`int`**_ *: Caracteres                                                                                      |
| **s**        | _**`char`**_ *: Imprime caracteres de una cadena hasta un "\0" o el número de caracteres dado por la precisión.|
| **e, f, g**  | _**`double`**_ *: Número punto flotante con signo, punto decimal y exponente optativos.                        |
| **%**        | Literal, no se realiza asignación alguna.                                                                    |

Si el carácter después del `%`no es una especificación de conversión, el comportamiento no está definido.
Algo importante a tener en consideración es que `d, i, o, u, x` pueden ser acompañados de una `h` para indicar que en la lista de argumentos aparece un apuntador a `short` en lugar de a `int`, o por `l` para indicar que aparece un apuntador a `long` en la lista de argumentos. De igual forma para `e, f, g` es posible acompañarlas con la letra `l` para indicar un apuntador a `double` en vez de `float` en la lista de argumentos 
El siguiente ejemplo visualiza lo anterior:

```C
#include <stdarg.h>
// FUNCIÓN PRINCIPAL
int main(){
    double sum, v;
    sum = 0;
    // Bucle que se ejecuta mientras ‘scanf’ pueda leer un
    // número flotante
    while(scanf("%lf", &ival) == 1)
    printf("\t%.2f\n", sum += v);
    return 0;
}
```

`scanf` ignora los espacios en blanco y los tabuladores que estén en su cadena de formato. `scanf` puede estar mezclada con otras funciones de entrada. Un error muy común es el siguiente:

```C
scanf("%s", s);     // FALLA
scanf("%s", &s);    // SEGURO
```

Regresar al menú de fundamentos <a href="../../01 - FundamentosDeProgramacion/00 - Fundamentos.md">Click aquí</a>.
