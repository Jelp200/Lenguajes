# FUNCIONES DE TRABAJO EN C :briefcase:
Ya hemos comprendido el como trabajan todos nuestros tipos de funciones en C, sabemos que podemos pasarles parametros para que estas realicen la acción o trabajo que necesitamos para poder solucionar nuestro problema, es por ello que las funciones de trabajo en C son funciones las cuales ya vienen dentro de nuestro propio lenguaje de programación, con la única diferencia que para poder utilizar dichas funciones es necesario incluir las librerias correspondientes para hacer uso de ellas.

Las librerias más comunes que incorporan dichas funciones son:

<ul>
<li><h2>String (Cadena de caracteres).</h2></li>
La libreria <i><b>"string.h"</b></i> contiene funciones las cuales nos sirven para poder trabajar netamente con cadenas de caracteres, para poder trabajar con dichas funciones debemos llamar a nuestra libreria de la siguiente manera:

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <string.h>
/*
...
Código en C
...
*/
```
Esta libreria contiene las siguientes funciones:

- <a href="">String copy</a>: Permite copiar una cadena de caracteres en otra (en blanco).
```C
strcpy(Destino, Fuente);
```
- <a href="">String cat</a>: Permite concatenar dos cadenas (cadena fuente a destino).
```C
strcat(Destino, Fuente);
```
- <a href="">String comparation</a>: Compara dos cadenas.
```C
strcmp(Cadena1, Cadena2);
```
- <a href="">String lowercase</a>: Devuelve todo el texto el minusculas.
```C
strlwr(Cadena);
```
- <a href="">String uperercase</a>: Devuelve todo el texto el mayusculas.
```C
strupr(Cadena);
```
- <a href="">String remaining character</a>: Regresa el restante de una cadena apartir de la primera aparición del caracter indicado.
```C
strrchr(Cadena, Corte);
```
- <a href="">String reverse</a>: Regresa una cadena de origen revertida.
```C
strrev(Cadena);
```

<li><h2>Math.</h2></li>
La libreria <i><b>"math.h"</b></i> contiene funciones las cuales nos sirven para poder trabajar con operaciones matematicas, para poder trabajar con dichas funciones debemos llamar a nuestra libreria de la siguiente manera:

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <math.h>
/*
...
Código en C
...
*/
```
Esta libreria contiene las siguientes funciones:

- <a href="">Ceil</a>: Nos ayuda a rendondear un dato al entero mayor más cercano.
```C
ceil(Dato);
```
- <a href="">Floor</a>: Nos ayuda a rendondear un dato al entero menor más cercano.
```C
floor(Dato);
```
- <a href="">Fabs</a>: Nos ayuda tener el valor absoluto de un numero o valor ingresado.
```C
fabs(Dato);
```
- <a href="">Sqrt</a>: Nos ayuda a sacar la raíz cuadrada.
```C
sqrt(dato);
```
- <a href="">Fmod</a>: Nos ayuda a calcular el resto de un cociente entre dos números.
```C
fmod(n1, n2);
```
- <a href="">Pow</a>: Nos ayuda a elevar un dato a una potencia.
```C
pow(dato, exponente);
```

<li><h2>Funciones trigonometricas.</h2></li>

- <a href="">Seno</a>: Nos ayuda a calcular el seno de un número.
```C
sin(dato);
```
- <a href="">Coseno</a>: Nos ayuda a calcular el coseno de un número.
```C
cos(dato);
```
- <a href="">Tangente</a>: Nos ayuda a calcular la tangente de un número.
```C
tan(dato);
```
- <a href="">Arco Seno</a>: Nos ayuda a calcular el seno^-1 de un número.
```C
asin(dato);
```
- <a href="">Arco Coseno</a>: Nos ayuda a calcular el coseno^-1 de un número.
```C
acos(dato);
```
- <a href="">Arco Tangente</a>: Nos ayuda a calcular la tangente^-1 de un número.
```C
atan(dato);
```

<li><a href="">Time.</a></li>

La libreria "time.h" contiene nos permite trabajar con funciones aleatorias, para ello incluimos la siguiente libreria:
```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <time.h>
/*
...
Código en C
...
*/
```
Y declaramos nuestro número o variable aleatoria de la siguiente manera:
```C
srand(time(NULL));

variable = limiteInferior + rand() % ((limiteSuperior + 1) - limiteInferior);
```

</ul>
