# Pointers :green_circle:
La estructura general de un apuntador está dada por:
```C
tipoDato *variable;
```
En los apuntadores tenemos dos operadores muy importantes.
### & (Operador dirección).
```C
&variable;
```
Como su nombre lo dice el operador "&" reserva una dirección de memoria a la variable asignada, por ejemplo:
```C
int px;
px = &x;
```
Esto puede verse como:
```txt
              M E M O R I A                    "&" V A R I A B L E     "=" V A R I A B L E
╔══════════════════════════════════════╗
║             6 1 F E 0 C              ║    <-          x           <-         px
╚══════════════════════════════════════╝
```
### * (Operador indirección).
```C
*variable;
```
El operador "*" asigna el valor de una variable en otra:
```C
int y = 5;
int py;
py = *y;
```
Esto puede verse como:
```txt
    V A L O R          "=" V A R I A B L E    "*" V A R I A B L E
╔══════════════╗
║      5       ║    <-         y           <-         py
╚══════════════╝
```
Un dato a recalcar es que podemos observar que para poder apuntar a un mismo dato es necesario que el dato al que queremos apuntar y el que esta apuntando sean del mismo tipo.