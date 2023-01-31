# Funcion random :package:
Para poder trabajar una funcion random/aleatoria necesitamos la siguiente libreria
```C
#include <time.h>
```
Y declarar el numero aleatoria de la siguiente manera
```C
srand(time(NULL));

variable = limiteInferior + rand() % ((limiteSuperior + 1) - limiteInferior);
```