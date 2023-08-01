# Ejercicio arreglo tridimencional.
Dado el siguiente arreglo realizar su representación matricial, de memoria y visualización en código.
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
Y su representación en memorias es:
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
Ahora veamoslo en forma de código <a href = "/C/Fundamentos/16 - Arreglos/16 - 03 - ArregloTriD.c">aquí</a>.