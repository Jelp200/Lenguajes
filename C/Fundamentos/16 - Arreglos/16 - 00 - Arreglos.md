# Arreglos (uni/multi)dimensionales :package:

### Arreglos unidimensionales.
Un arreglo unidimensional se puede ver de la siguiente manera.
```txt
╔══════════════════════════════════════╦════════════════════════════════════╗
║             Á L G E B R A            ║                  C                 ║
╠══════════════════════════════════════╬════════════════════════════════════╣
║           x = [x¹, x², x³]           ║      tDato x[3] = {x1, x2, x3}     ║
╚═══════════════════════════════════════════════════════════════════════════╝
```
Y en memoria se puede visualizar como.
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
Por lo tanto se declara como.
```C
tipoDato nombreVariable[tamaño] = {Valores};
```

### Arreglos multidimensionales.
Se definen de la misma manera que los arreglos unidimensionales, solo que se requiere uno o varios pares separados de corchetes, se declara de la siguiente manera.
```C
tipoAlmacenamiento tipoDato nombreVariable[exp1] [exp2] ... [expN] = {{Valor1}, {Valor2}, ..., {ValorN}};
```
Un arrelgo multidimensional puede verse de manera algebraica como una matriz (m x n).
```txt

    ┌                                 ┐
    │   a¹¹     a¹²     ...     a¹n   │
A = │   a²¹     a²²     ...     a²n   │
    │   ...     ...     ...     ...   │
    │   am¹     am²     ...     amn   │
    └                                 ┘

```
En C podemos verlo como.
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
Siendo "x" un array bidimensional (m x n)