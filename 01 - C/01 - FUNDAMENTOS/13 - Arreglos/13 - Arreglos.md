# ARREGLOS (UNI/MULTI)DIMENSIONALES EN C :package:
### INTRODUCCIÓN
Dentro de todos los lenguajes de programación los arreglos son un elemento muy importante, dichos arreglos nos permiten introducirnos a lo que son las
estructuras de datos. En si <b><i>los arreglos son estructuras de datos que consisten en elementos de datos relacionados del mismo tipo</i></b>, podemos decir que son
entidades "estaticas" que mantienen el mismo tamaño durante la ejecucipon de nuestro programa.

### ARREGLOS
Teniendo una pequeña introducción a lo que son los arreglos entremos en materia, un arreglo es un grupo consecutivo de localidades de memoria que tienen
el mismo nombre y el mismo tipo (dato). Recordemos que una memoria puede ver visualizada como un conjunto de cajones en un archivero:
```txt
              M E M O R I A              D A T O S  I N G R E S A D O S
╔══════════════════════════════════════╗
║              POSICIÓN 0              ║    <-      DATO 1
╠══════════════════════════════════════╣
║              POSICIÓN 1              ║    <-      DATO 2
╠══════════════════════════════════════╣
║              POSICIÓN 2              ║    <-      DATO 3
╠══════════════════════════════════════╣
║                  ...                 ║         ...
╠══════════════════════════════════════╣
║              POSICIÓN N              ║    <-      DATO n
╚══════════════════════════════════════╝
```
O tambien puede ser visualizada como un vector:
```txt
╔══════════════════════════════════════╦════════════════════════════════════╗
║             Á L G E B R A            ║                  C                 ║
╠══════════════════════════════════════╬════════════════════════════════════╣
║           x = [x¹, x², x³]           ║      tDato x[3] = {x1, x2, x3}     ║
╚═══════════════════════════════════════════════════════════════════════════╝
```
Para poder hacer referencia a una localidad o a un elemento del arreglo en particular, especificamos el nombre del arreglo y la posición numérica del
elemento en el arreglo. El <b><i>primer elemento/dato</i></b> de cada arreglo es el <b><i>elemento cero</i></b>, y de manera general si necesitamos hacer
referencia al elemento/dato <i>n</i> de un arreglo "x" tenememos que <b><i>nombreArreglo[n - 1]</i></b>.
La posición numérica la cual se encuentra entre corchetes "[]" se le llama <b><i>subíndice</i></b> o <b><i>índice</i></b> el cual especifica el número de elementos/datos desde el
principio de nuestro arreglo. Dicho subíndice debe ser entero o una expresión entera.

### DECLARACIÓN DE ARREGLOS
Como hemos mencionado los arreglos ocupan espacio en nuestra memoria y nuestro compilador reserva la cantidad apropiada de memoria, por ello podemos
declarar un arreglo de la siguiente manera:
```C
tipoDato nombreVariable[tamañoArreglo] = {Valores};
```

### DIMENSIONES DE UN ARREGLO
Como hemos podido observar los arreglos son estructuras de datos estaticas, por ello podemos decir que tenemos diferentes tipos de arreglos hablando de
manera dimensional(1D, 2D, 3D, etc.), esto va a depender netamente del uso que querramos darle a nuestros arreglos, por ejemplo un arreglo de 1D puede
verse como una lista de arreglos, miestras que un arreglo 2D puede observarse como una tabla de datos, veamos como podemos interpretarlos.

#### <a href="13 - 01 - Unidimensionales/13 - 01 - 01 - arreglo1D.c">ARREGLOS DE 1D</a>
Un arreglo unidimensional puede observarse como una lista de datos, estos arreglos son los más básicos cuando empezamos a trabajar con arreglos, se
declaran de la siguiente manera:
```C
tipoDato nombreVariable[tamañoArreglo] = {Valores};
```
Digamos que deseamos declarar un arreglo de enteros el cual de llamara "enteros" y tendra 5 valores sin especificar todavía, entonces su codificación
será la siguiente:
```C
int enteros[5];
```
Y en forma de memoria podra verse como:
```txt
              M E M O R I A                D A T O S  A  I N G R E S A R
╔══════════════════════════════════════╗
║              POSICIÓN 0              ║    <-      DATO 1
╠══════════════════════════════════════╣
║              POSICIÓN 1              ║    <-      DATO 2
╠══════════════════════════════════════╣
║              POSICIÓN 2              ║    <-      DATO 3
╠══════════════════════════════════════╣
║              POSICIÓN 3              ║    <-      DATO 4
╠══════════════════════════════════════╣
║              POSICIÓN 4              ║    <-      DATO 5
╚══════════════════════════════════════╝
```

#### <a href="13 - 02 - Bidimensionales/13 - 02 - 01 - arreglo2D.c">ARREGLOS DE 2D</a>
Un arreglo bidimensional puede observarse como una tabla de datos, estos arreglos se definen de la misma manera que los arreglos unidimensionales,
solo que se requiere uno o varios pares separados de corchetes, se declara de la siguiente manera:
```C
tipoAlmacenamiento tipoDato nombreVariable[exp1] [exp2] = {{Valor1}, {Valor2}};
// El "tipoAlmacenamiento" es opcional.
// [exp1] corresponde a las filas.
// [exp2] corresponde a las columnas.
```
A estos arreglos podemos verlos de manera matematica como una matriz de (m * n) de la siguinte manera:
```txt

    ┌                                 ┐
    │   a¹¹     a¹²     ...     a¹n   │
A = │   a²¹     a²²     ...     a²n   │
    │   ...     ...     ...     ...   │
    │   am¹     am²     ...     amn   │
    └                                 ┘

```
Y en forma de memoria podra verse como:
```txt
              COLUMNA 1   COLUMNA 2   COLUMNA 3              COL (n-1)    Col "n"
            ┌───────────┬───────────┬───────────┬──────────┬───────────┬───────────┐
FILA 1      │           │           │           │   ...    │           │           │
            └───────────┴───────────┴───────────┴──────────┴───────────┴───────────┘
              x[0][0]     x[0][1]     x[0][2]       ...      x[0][n-2]   x[0][n-1]

            ┌───────────┬───────────┬───────────┬──────────┬───────────┬───────────┐
FILA 2      │           │           │           │   ...    │           │           │
            └───────────┴───────────┴───────────┴──────────┴───────────┴───────────┘
              x[1][0]     x[1][1]     x[1][2]       ...      x[1][n-2]   x[1][n-1]

            ┌───────────┬───────────┬───────────┬──────────┬───────────┬───────────┐
FILA "m"    │           │           │           │   ...    │           │           │
            └───────────┴───────────┴───────────┴──────────┴───────────┴───────────┘
              x[m-1][0]   x[m-1][1]   x[m-1][2]     ...     x[m-1][n-2]  x[m-1][n-1]
```
Siendo "x" un array bidimensional (m x n).
Digamos que tenemos el siguiente arreglo de 2D:
```C
int arreglo[2][3] = {1, 2, 3, 4, 5, 6};
```
Recodemos que al momento de declarar un arreglo "m * n" el código tendra el siguiente significado.
```txt
int arreglo[2][3] = {1, 2, 3, 4, 5, 6};
           [F][C] -> Siendo F filas y C columnas.
```
Su forma matricial tendria la siguiente forma.
```txt
  C    0   1   2
F    ┌───┬───┬───┐
0    │ 1 │ 2 │ 3 │
     ├───┼───┼───┤
1    │ 4 │ 5 │ 6 │
     └───┴───┴───┘
```
Y su representación en memoria es:
```txt
╔═══════╦═══╦═══╦═══╦═══╦═══╦═══╗
║   M   ║   ║   ║   ║   ║   ║   ║
║   E   ║ x ║ x ║ x ║ x ║ x ║ x ║
║   M   ║ 1 ║ 1 ║ 1 ║ 1 ║ 1 ║ 1 ║
║   O   ║ 0 ║ 0 ║ 0 ║ 0 ║ 0 ║ 0 ║
║   R   ║ 0 ║ 0 ║ 0 ║ 0 ║ 0 ║ 0 ║
║   I   ║ 0 ║ 1 ║ 2 ║ 3 ║ 4 ║ 5 ║
╚═══════╩═══╩═══╩═══╩═══╩═══╩═══╝
Posición  1   2   3   4   5   6
```
Esto se puede ver de la siguiente manera.
```C
int arreglo[2][3] = {1, 2, 3, 4, 5, 6} = {{1, 2, 3}, {4, 5, 6}};
```

#### <a href="13 - 03 - Tridimensionales/13 - 03 - 01 - arreglo3D.c">ARREGLOS DE 3D</a>
Un arreglo tridimensional puede observarse como un conjunto de tabla de datos, estos arreglos se definen de la misma manera que los arreglos unidimensionales
y dimensionales, con la única diferencia que ya no solo tendremos dos corchetes, sino "n" corchetes y sus valores, se declara de la siguiente manera:
```C
tipoAlmacenamiento tipoDato nombreVariable[exp1] [exp2] ... [expN] = {{Valor1}, {Valor2}, ..., {ValorN}};
// El "tipoAlmacenamiento" es opcional.
```
A estos arreglos podemos verlos de manera matematica como un "x" matrices de (m * n) de la siguinte manera:
```txt

    ┌                                 ┐
    │   a¹¹     a¹²     ...     a¹n   │
A = │   a²¹     a²²     ...     a²n   │
    │   ...     ...     ...     ...   │
    │   am¹     am²     ...     amn   │
    └                                 ┘
    ┌                                 ┐
    │   b¹¹     b¹²     ...     b¹n   │
B = │   b²¹     b²²     ...     b²n   │
    │   ...     ...     ...     ...   │
    │   bm¹     bm²     ...     bmn   │
    └                                 ┘
...
...
    ┌                                 ┐
    │   x¹¹     x¹²     ...     x¹n   │
X = │   x²¹     x²²     ...     x²n   │
    │   ...     ...     ...     ...   │
    │   xm¹     xm²     ...     xmn   │
    └                                 ┘

```
Digamos que tenemos el siguiente arreglo de 3D:
```C
int arreglo[2][3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
```
Recodemos que al momento de declarar un arreglo "m x n" el código tendra el siguiente significado.
```txt
int arreglo              [2]               [3] [3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
           [Veces que se repite la matriz] [F] [C]
```
Su forma matricial tendria la siguiente forma.
```txt
  C    0   1   2
F    ┌───┬───┬───┐
0    │ 1 │ 2 │ 3 │
     ├───┼───┼───┤
1    │ 4 │ 5 │ 6 │
     └───┴───┴───┘

  C    0   1   2
F    ┌───┬───┬───┐
0    │ 7 │ 8 │ 9 │
     ├───┼───┼───┤
1    │1 0│1 1│1 2│
     └───┴───┴───┘
```
Y su representación en memoria es:
```txt
╔═══════╦═══╦═══╦═══╦═══╦═══╦═══╦═══╦═══╦═══╦═══╦═══╦═══╗
║   M   ║   ║   ║   ║   ║   ║   ║   ║   ║   ║   ║   ║   ║
║   E   ║ x ║ x ║ x ║ x ║ x ║ x ║ x ║ x ║ x ║ x ║ x ║ x ║
║   M   ║ 1 ║ 1 ║ 1 ║ 1 ║ 1 ║ 1 ║ 1 ║ 1 ║ 1 ║ 1 ║ 1 ║ 1 ║
║   O   ║ 0 ║ 0 ║ 0 ║ 0 ║ 0 ║ 0 ║ 0 ║ 0 ║ 0 ║ 0 ║ 0 ║ 0 ║
║   R   ║ 0 ║ 0 ║ 0 ║ 0 ║ 0 ║ 0 ║ 0 ║ 0 ║ 0 ║ 0 ║ 0 ║ 0 ║
║   I   ║ 0 ║ 1 ║ 2 ║ 3 ║ 4 ║ 5 ║ 6 ║ 7 ║ 8 ║ 9 ║1 0║1 1║
╚═══════╩═══╩═══╩═══╩═══╩═══╩═══╩═══╩═══╩═══╩═══╩═══╩═══╝
Posición  1   2   3   4   5   6   7   8   9   10  11  12 
```
Esto se puede ver de la siguiente manera.
```C
int arreglo[2][3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12} = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
```