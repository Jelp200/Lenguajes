# ARREGLOS (UNI/MULTI)DIMENSIONALES EN C :package:

## INTRODUCCIÓN

Los arreglos son una parte importante dentro del lenguaje de programación C debido a que con ellos es posible crear, guardar y modificar datos los cuales necesitan una mayor interacción. En C es posible tener dos tipos de arreglos, los unidimensionales (vectores) y los multidimensionales (matrices).

### <a href="18 - 01 - arregloUnidimensional.c">Arreglos unidimensionales.</a>

Son conjuntos de datos individuales del mismo tipo bajo el mismo nombre y con el mismo tipo de almacenamiento; estos datos pueden ser caracteres, enteros, flotantes, etc. Cada dato del conjunto es accesible mediante un índice, esto puede verse cómo:

<div> <img src="../../../IMGS/01 - Lenguaje C/01 - FundamentosDeProgramacion/18 - Arreglos/01 - RecorridoArreglo.png"> </div>

Este conjunto de datos puede ser visualizado como un vector, la analogía entre el lenguaje C y el algebra lineal es la siguiente:

```txt
╔══════════════════════════════════════╦════════════════════════════════════╗
║             Á L G E B R A            ║                  C                 ║
╠══════════════════════════════════════╬════════════════════════════════════╣
║           x = [x¹, x², x³]           ║      tDato x[3] = {x1, x2, x3}     ║
╚═══════════════════════════════════════════════════════════════════════════╝
```

El siguiente ejemplo permite ver cómo es posible declarar un arreglo unidimensional y visualizar los valores dentro de él.

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(){
    int arreglo[3] = {10, 6, 23};
    printf("El 1er valor del arreglo es %i: ", arreglo[0]);
    printf("El 2do valor del arreglo es %i: ", arreglo[1]);
    printf("El 3er valor del arreglo es %i: ", arreglo[2]);
    return 0;
}
```

Es posible observar que el conteo de las posiciones del arreglo comienza desde la posición 0 o el índice 0, entonces, para poder visualizar o modificar los datos de un arreglo en necesario ser específico que índice se desea modificar.

<div> <img src="../../../IMGS/01 - Lenguaje C/01 - FundamentosDeProgramacion/18 - Arreglos/02 - RecorridoArreglo.png"> </div>

Para ello se tienen tres formas básicas de modificación para los arreglos, estas son:

- **_Asignación directa._** En la asignación directa es posible modificar el valor de un elemento específico del arreglo.

```C
arreglo[0] = 63;
printf("El nuevo valor del índice 0 es %i: ", arreglo[0]);
```

- **_Ingreso para modificación._** En el ingreso para modificación es posible modificar el valor de un elemento específico del arreglo a través del teclado.

```C
printf("De el nuevo valor del índice 1: "); scanf("%d", &n);
arreglo[1] = n;
printf("El nuevo valor del índice 1 es %i: ", arreglo[1]);
```

- **_Uso de bucles para modificación._** En el uso de bucles para la modificación es posible modificar varios elementos del arreglo.

```C
int arreglo[10];
for(int i = 0;i <= 10; i++){
    printf(“\nDe el nuevo valor del indice: %i”, i);
    scanf(“%i”, &arreglo[i]);
}
int indice = -1;
while(++indice < 10){
    printf(“\nEl valor del arreglo [%i] es [%i]”, arreglo[indice]);
}
```

El diagrama de flujo del fragmento de código anterior es el siguiente:

<div> <img src="../../../IMGS/01 - Lenguaje C/01 - FundamentosDeProgramacion/18 - Arreglos/03 - DiagramaFlujoBucleParaModificacion.png"> </div>

### <a href="18 - 02 - arregloBidimensional.c">Arreglos bidimensionales.</a>

Los arreglos bidimensionales se definen prácticamente de la misma manera que los arreglos unidimensionales, excepto que se requiere un par separado de corchetes para cada índice. Así, un arreglo bidimensional requerirá dos pares de corchetes.
En términos generales, la definición de un arreglo bidimensional se puede declarar como:

```C
// ARREGLO BIIDIMENSIONAL
tipoAlmacenamiento tipoDato Nombre[exp1] [exp2];
```

Se ha observado que un arreglo unidimensional de `n` elementos puede ser visto como una lista de valores, análogamente, un arreglo bidimensional de `(m x n)` puede ser visto como una tabla de valores que tienen `m` filas por `n` columnas, tal como una matriz.

$$
  A = \begin{pmatrix}
  a_{11} & \cdots & a_{1n} \\
  \vdots & \ddots & \vdots \\
  a_{m1} & \cdots & a_{mn}
  \end{pmatrix}
$$

Entendida esta idea, un arreglo multidimensional puede verse como un conjunto de tablas de `m x n` valores.
En el lenguaje de programación C es posible ver un arreglo bidimensional de la siguiente manera:

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

Siendo así `x` un arreglo bidimensional `(m x n)`.
Entonces, un arreglo bidimensional se declara de la siguiente manera:

```C
// ARREGLO 2D
tipoDato Nombre[nFil] [nCol] = {{datosFil}, {datosCol}};
```

### <a href="18 - 03 - arregloMultidimensional.c">Arreglos multidimensionales.</a>

Los arreglos multidimensionales pueden ser vistos como un conjunto de tablas de datos, estos arreglos se definen de la misma manera que los arreglos unidimensionales y bidimensionales, con la única diferencia que ya no solo se tendrán uno o dos corchetes, sino, `n` corchetes y sus valores, estos arreglos se declaran de la siguiente manera:

```C
// ARREGLO MULTIDIMENSIONAL
tipoAlmacenamiento tipoDato Nombre[exp1] [exp2], …, [expN];
```

$$
A = \begin{pmatrix}
a_{11} & \cdots & a_{1n} \\
\vdots & \ddots & \vdots \\
a_{m1} & \cdots & a_{mn}
\end{pmatrix}
$$

$$
B = \begin{pmatrix}
b_{11} & \cdots & b_{1n} \\
\vdots & \ddots & \vdots \\
b_{m1} & \cdots & b_{mn}
\end{pmatrix}
$$

$$
X = \begin{pmatrix}
x_{11} & \cdots & x_{1n} \\
\vdots & \ddots & \vdots \\
x_{m1} & \cdots & x_{mn}
\end{pmatrix}
$$

Para comprender de mejor manera dicho concepto, dígase que se tiene el siguiente arreglo:

```C
// ARREGLO MULTIDIMENSIONAL
int arreglo[2][2][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
```

Recordando que al momento de declarar un arreglo “m x n” el código tendrá el siguiente significado:

- El primer corchete indica las veces que se repite la matriz.
- El segundo corchete son las filas.
- El tercer corchete son las columnas.

Siendo así su forma matricial la siguiente:

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

Regresar al menú de fundamentos <a href="../../01 - FundamentosDeProgramacion/00 - Fundamentos.md">Click aquí</a>.
