# FUNCIONES MATEMATICAS :man_teacher:
Las funciones matemáticas dentro del lenguaje C permiten realizar cálculos "complejos", por ello es importante incluir la librería **_`math.h`_** de la siguiente manera:

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <math.h>
```

Las funciones más comunes que pueden ser utilizadas son:

## Funciones trigonometricas

| **Función** |                    **Uso**                    | **Declaración** |
|:-----------:|:---------------------------------------------:|:---------------:|
| Seno        | Calcula el seno de un número o grado          |    `sin(Dato);`   |
| Coseno      | Calcula el coseno de un número o grado        |    `cos(Dato);`   |
| Tangente    | Calcula la tangente de un número o grado      |    `tan(Dato);`   |
| Arcseno     | Calcula el arco seno de un número o grado     |   `asin(Dato);`   |
| Arccoseno   | Calcula el arco coseno  de un número o grado  |   `acos(Dato);`   |
| Arctangente | Calcula el arco tangente de un número o grado |   `atan(Dato);`   |
| Arctangente | Calcula el arco tangente de un número o grado |   `atan2(x, y);`  |

## Funciones exponenciales y logaritmicas

| **Función** |                  **Uso**                  |    **Declaración**    |
|:-----------:|:-----------------------------------------:|:---------------------:|
| Exp         | Calcula el exponente de x, osea e^x       |       `exp(Dato);`      |
| Pow         | Calcula el exponente de un número a otro  | `pow(Dato, Exponente);` |
| Ln          | Calcula el logaritmo natural de un número |       `log(Dato);`      |
| Log_10      | Calcula el logaritmo base 10 de un número |      `log10(Dato);`     |
| Sqrt        | Calcula la raíz cuadrada de un número     |      `sqrt(Dato);`      |

## Redondeo y valor absoluto

| **Función** |                    **Uso**                   | **Declaración** |
|:-----------:|:--------------------------------------------:|:---------------:|
| Ceil        | Redondea un dato al entero mayor más cercano |   `ceil(Dato);`   |
| Floor       | Redondea un dato al entero menor más cercano |   `floor(Dato);`  |
| Round       | Redondea un dato al entero cercano           |   `round(Dato);`  |
| Fabs        | Da en valor absoluto un dato                 |   `fabs(Dato);`   |

## Manejo de ángulos

| **Función** |               **Uso**               | **Declaración** |
|:-----------:|:-----------------------------------:|:---------------:|
| Deg2Grad    | Convierte un ángulo dado a radianes | `deg2grad(Dato);` |
| Rad2Deg     | Convierte radianes a un ángulo      |  `rad2deg(Dato);` |

## Otras

| **Función** |                      **Uso**                      | **Declaración** |
|:-----------:|:-------------------------------------------------:|:---------------:|
| Fmod        | Calcula el resto del cociente dado dos parametros |   `fmod(x, y);`   |
| Hypot       | Calcula la  hipotenusa de un triángulo rectángulo |   `hypot(x, y);`  |

Regresar al menú de fundamentos <a href="../01 - FundamentosDeProgramacion/00 - Fundamentos.md">Click aquí</a>.