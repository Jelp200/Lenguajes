# FUNCIONES DE TRABAJO EN C :briefcase:
Ya hemos comprendido el como trabajan todos nuestros tipos de funciones en C, sabemos que podemos pasarles parametros para que estas realicen la acción
o trabajo que necesitamos para poder solucionar nuestro problema, es por ello que las funciones de trabajo en C son funciones las cuales ya vienen dentro
de nuestro propio lenguaje de programación, con la única diferencia que para poder utilizar dichas funciones es necesario incluir las librerias
correspondientes para hacer uso de ellas.

Las librerias más comunes que incorporan dichas funciones son:
### <a href="12 - 01 - Strings/">String.h</a>
La libreria "string.h" contiene funciones las cuales nos sirven para poder trabajar netamente con cadenas de caracteres, para poder trabajar con dichas
funciones debemos llamar a nuestra libreria de la siguiente manera:
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
Y estas son:
- <a href="12 - 01 - Strings/12 - 01 - 01 - Strcpy.c">String copy</a>: La cual nos permite copiar una cadena de caracteres en una nueva en blanco.
```C
strcpy(Destino, Fuente);
```
- <a href="12 - 01 - Strings/12 - 01 - 02 - Strcat.c">String cat</a>: Lo que hace está función es concatenar la cadena fuente a la de destino.
```C
strcat(Destino, Fuente);
```
- <a href="12 - 01 - Strings/12 - 01 - 03 - Strcmp.c">String comparation</a>: Lo que hace está función es comparar dos cadenas.
```C
strcmp(Cadena1, Cadena2);
```
- <a href="12 - 01 - Strings/12 - 01 - 04 - Strlen.c">String length</a>: Lo que hace está función es devolver la longitud de una cadena ingresada.
```C
strlen(Cadena1);
```
- <a href="12 - 01 - Strings/12 - 01 - 05 - Strlwr.c">String lowercase</a>: Está función devuelve todo el texto en minusculas.
```C
strlwr(Cadena);
```
- <a href="12 - 01 - Strings/12 - 01 - 06 - Strupr.c">String upercase</a>: Está función devuelve todo el texto en mayusculas.
```C
strupr(Cadena);
```
- <a href="12 - 01 - Strings/12 - 01 - 07 - Strrchr.c">String remaining character</a>: Regresa el restante de una cadena apartir de la primera aparición del caracter indicado.
```C
strrev(Cadena);
```
- <a href="12 - 01 - Strings/12 - 01 - 08 - Strrev.c">String reverse</a>: Lo que hace está función es regresar una cadena de origen revertida.
```C
strcpy(Destino, Fuente);
```

### <a href="12 - 02 - Math/">Math.h</a>
La libreria "math.h" contiene funciones las cuales nos sirven para poder trabajar con operaciones matematicas, para poder trabajar con dichas funciones
debemos llamar a nuestra libreria de la siguiente manera:
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
Y estas son:
#### Funciones matematicas.
- <a href="12 - 02 - Math/12 - 02 - 01 - Matematicas/12 - 02 - 01 - 01 - Ceil.c">Ceil</a>: Nos ayuda a rendondear un dato al entero mayor más cercano.
```C
ceil(dato);
```
- <a href="12 - 02 - Math/12 - 02 - 01 - Matematicas/12 - 02 - 01 - 02 - Floor.c">Floor</a>: Nos ayuda a rendondear un dato al entero menor más cercano.
```C
floor(dato);
```
- <a href="12 - 02 - Math/12 - 02 - 01 - Matematicas/12 - 02 - 01 - 03 - Fabs.c">Fabs</a>: Nos ayuda tener el valor absoluto de un numero o valor ingresado.
```C
fabs(dato);
```
- <a href="12 - 02 - Math/12 - 02 - 01 - Matematicas/12 - 02 - 01 - 04 - Sqrt.c">Sqrt</a>: Nos ayuda a sacar la raíz cuadrada.
```C
sqrt(dato);
```
- <a href="12 - 02 - Math/12 - 02 - 01 - Matematicas/12 - 02 - 01 - 05 - Fmod.c">Fmod</a>: Nos ayuda a calcular el resto de un cociente entre dos números.
```C
fmod(n1, n2);
```
- <a href="12 - 02 - Math/12 - 02 - 01 - Matematicas/12 - 02 - 01 - 06 - Pow.c">Pow</a>: Nos ayuda a elevar un dato a una potencia.
```C
pow(dato, exponente);
```
#### Funciones trigonometricas.
- <a href="12 - 02 - Math/12 - 02 - 02 - Trigonometricas/12 - 02 - 02 - 01 - Sin.c">Seno</a>: Nos ayuda a calcular el seno de un número.
```C
sin(dato);
```
- <a href="12 - 02 - Math/12 - 02 - 02 - Trigonometricas/12 - 02 - 02 - 02 - Cos.c">Coseno</a>: Nos ayuda a calcular el coseno de un número.
```C
cos(dato);
```
- <a href="12 - 02 - Math/12 - 02 - 02 - Trigonometricas/12 - 02 - 02 - 03 - Tan.c">Tangente</a>: Nos ayuda a calcular la tangente de un número.
```C
tan(dato);
```
- <a href="12 - 02 - Math/12 - 02 - 02 - Trigonometricas/12 - 02 - 02 - 04 - Asin.c">Arco Seno</a>: Nos ayuda a calcular el seno^-1 de un número.
```C
asin(dato);
```
- <a href="12 - 02 - Math/12 - 02 - 02 - Trigonometricas/12 - 02 - 02 - 05 - Acos.c">Arco Coseno</a>: Nos ayuda a calcular el coseno^-1 de un número.
```C
acos(dato);
```
- <a href="12 - 02 - Math/12 - 02 - 02 - Trigonometricas/12 - 02 - 02 - 06 - Atan.c">Arco Tangente</a>: Nos ayuda a calcular la tangente^-1 de un número.
```C
atan(dato);
```

### <a href="12 - 03 - Time/">Time.h</a>
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