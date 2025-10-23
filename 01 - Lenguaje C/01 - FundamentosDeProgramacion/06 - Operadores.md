# OPERADORES EN C :croissant:

Al igual que en otros lenguajes de programación, en C se puede trabajar con operadores aritméticos, lógicos y se asignación, todo esto debido a que son muy importantes en el desarrollo de soluciones de problemas y sistemas, estos operadores son:

## Aritmeticos

Son operadores los cuales permiten realizar operaciones aritméticas dentro de los programas.

|  Símbolo | Significado |         Uso         |
|:--------:|:-----------:|:-------------------:|
| `+` | Adición     | Suma                |
| `-` | Sustracción | Resta               |
| `*` | Producto    | Multiplicación      |
| `/` | Cociente    | División            |
| `%` | Módulo      | Residuo de división |
|`++` | Incremento  | Sumar               |
| `-` | Decremento  | Restar              |

## Asignación

Son operadores los cuales permiten realizar asignaciones dentro de un programa.

|  Símbolo |    Significado    |             Uso             |
|:--------:|:-----------------:|:---------------------------:|
| `=` | Igual a           | Significado                 |
|`+=` | Adición           | Suma y asignación           |
|`-=` | Sustracción       | Resta y asignación          |
|`*=` | Producto          | Miltiplicación y asignación |
|`/=` | Cociente          | División y asignación       |
|`%=` | Módulo            | Módulo y asignación         |
|`==` | Igual a           | Igualación                  |
|`!=` | No igual a        | Desigualdad                 |
|`>`  | Mayor que         | Comparación                 |
|`<`  | Menor que         | Comparación                 |
|`>=` | Mayor o igual que | Comparación                 |
|`<=` | Menor o igual que | Comparación                 |

## Manejo de bits

Son operadores los cuales permiten realizar el manejo de bits y sólo pueden ser aplicados a operadores integrales (tipos de datos), estos quiere decir que son aplicables a:

- `char`
- `short`
- `int`
- `long`

|  Símbolo  |     Significado      |
|:---------:|:--------------------:|
| `&`  | AND de bits          |
| `\|`  | OR de bits           |
| `^`  | XOR de bits          |
| `<<` | Corrimiento a la izq |
| `>>` | Corrimiento a la der |
| `~`  | NOT                  |

El operador `&` a menudo **_permite enmascarar algún conjunto de bits_**, por ejemplo:

```C
n = n & 0177;
```

El fragmento de código anterior hace cero todos los bits `n`, exceptuando los 7 de menor orden.

El operador `|` **_permite encender bits_**, por ejemplo:

```C
n = n | SET_ON;
```

El fragmento de código anterior fija a todos los bits de `n` en uno en `SET_ON`.

El operador `^` **_permite poner un uno en cada posición en donde sus operandos tienen bits diferentes, y cero en donde son iguales_**, por ejemplo:

```C
n = a ^ b; // a = 1010 y b = 0011
```

En el fragmento de código anterior `n` toma el valor de 1001.

Los operadores `<<` y `>>` **_realizan corrimientos a la izquierda y derecha de su operando el cual está a la izquierda, el número de posiciones de bits esta dado por el operando a la derecha y el cual debe ser positivo_**. Así por ejemplo si se tiene un numero "n# el cual debe ser desplazado dos veces a la izquierda se tiene:

```C
desplazamientoIzquierda = n << 2;
```

El fragmento de código anterior desplaza el valor de `n` a la izquierda dos posiciones, llenando los bits vacantes con cero.
El correr a la derecha una cantidad no asignada siempre llena los bits vacantes con cero. El correr a la derecha una cantidad asignada llenara con bits de signo en algunas computadoras y con bits cero (corrimiento lógico) en otras.

El operador `~` **_da el complemento a uno de un entero; esto es, convierte cada bit uno a cero y viceversa_**, por ejemplo:

```C
n = n &~ 077;
```

El fragmento de código anterior fija los últimos seis bits de `n` en cero.

## Lógicos

Son operadores los cuales permiten al igual que los operadores aritméticos, realizar operaciones entre variables, números, etc., esto debido a que los operadores lógicos son operadores que permiten realizar operaciones básicas que una computadora realiza.

|  Símbolo   | Significado |     Uso     |
|:----------:|:-----------:|:-----------:|
|  `!` | NOT         | Comparativa |
| `&&` | AND         | Producto    |
| `\|\|` | OR          | Suma       |

Es importante distinguir estos operadores lógicos de los operadores de manejo de bits, ya que los operadores lógicos implican una evaluación de izquierda a derecha de un valor de verdad. Por ejemplo, si `x` es uno y `y` es dos, entonces `x & y` es cero en tanto que `x && y` es uno.

Regresar al menú de fundamentos <a href="../01 - FundamentosDeProgramacion/00 - Fundamentos.md">Click aquí</a>.
