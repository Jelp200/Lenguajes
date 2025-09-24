# MANEJO DE MEMORIA :infinity:

## Introducción

El manejo de memoria hace referencia al conjunto de técnicas y funciones que permite controlar directamente el cómo se asigna, utiliza y libera la memoria durante la ejecución de un programa. El manejo de memoria es crucial debido a que C no incluye un recolector de basura como otros lenguajes de programación, esto quiere decir que la memoria debe gestionarse manualmente.

## Asignación de Memoria

La asignación de memoria puede dividirse en tres categorias principales:

- **_Memoría Estática_**: Asignada en tiempo de compilación, consta de variables globales y estáticas que se almacenan en una región fija del programa llamada segmento de datos.
- **_Memoría Automática (Pila o Stack)_**: Utilizada para variables locales. La memoria es asignada automáticamente cuando se declara la variable y se libera al salir de la función.
- **_Memoría Dinámica_**: Asignada en tiempo de ejecución utilizando funciones como `malloc()`, `calloc()` y `realloc()`. Esta memoria debe liberarse manualmente con la función `free()`.

Por lo tanto, los elementos importantes para la asignación de memoria son:

| Nombre                                  | Descripción                                                                                                                                   |
|-----------------------------------------|-----------------------------------------------------------------------------------------------------------------------------------------------|
| Tamaño(`malloc`, `realloc` y `aligned_alloc`) | Número total de bit almacenados en la memoria. Para aligned_alloc el número de bits debe ser un multiplo entero o una alineación (alignment). |
| Tamaño(`calloc`)                          | Tamaño de cada elemento.                                                                                                                      |
| nelementos                              | Número de elementos.                                                                                                                          |
| ptr                                     | Puntero el cual será asignado en la memoria previamente retornado por `malloc()`, `calloc()`, `realloc()` o `aligned_alloc()`.                        |
| Alineación                              | Alineamiento de la asignación de memoria.                                                                                                     |

###### **_Nota._** C99 en adelante contiene la función `aligned_alloc()`. Otros sistemas proveen `alloca()`.

### <a href="../01 - ManejoMemoria/01 - 01 - malloc.c">Asignación Estandar `malloc()`</a>

En C, la asignación dinámica de memoria esta definida en la librería o directiva de preprocesador **_`stdlib.h`_**, es necesario comprender que para trabajar ya sea con esta función o cualquier otra para la asignación dinámica de memoria, se utilizarán los punteros, entonces, el formato de `malloc()` es el siguiente:

```C
void* malloc(size_t tamaño);                    // Reserva un bloque de memoria de tamaño especificado.
```

Y puede ser utilizada de la siguiente forma:

```C
#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p1 = malloc(4 * sizeof(int));             // Asigna memoria suficiente para un arreglo de 4 entero.
  int *p2 = malloc(4 * sizeof(int[4]));          // Lo mismo, nombrando el tipo directamente.
  int *p3 = malloc(4 * sizeof(int));             // Lo mismo, sin repetir el nombre del tipo.

  if(p1) {
    for(int i = 0; i < 4; i++)                  // Rellena el arreglo.
        p1[i] = n * n;
    for(int i = 0; i < 4; i++)                  // Imprime el arreglo.
        printf("p1[%d] = %d\n", i, p1[i]);
  }

  free(p1);
  free(p2);
  free(p3);

  return 0;
}
```

### <a href="../01 - ManejoMemoria/01 - 02 - calloc.c">Memoria Puesta a 0 `calloc()`</a>

La memoria retornada por `malloc()` puede no estar inicializada en un valor qwue sea razonable, y debe ser puesta a 0 con mucho cuidado con `memset()` o copiar un valor adecuado en ella. Por otro lado, `malloc()` retorna un bloque del valor deseado con todos los bits inicializados en 0. Esto no necesariamente es la misma representación de un puntero flotante en cero, o un puntero nulo constante. El formato de `malloc()` es el siguiente:

```C
void* calloc(size_t número, size_t tamaño);    // Reserva memoria para múltiples elementos y la inicializa a cero.
```

Puede ser utilizada de la siguiente forma:

```C
#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p1 = calloc(4 * sizeof(int));             // Asigna con ceros suficientes para un arreglo de 4 entero.
  int *p2 = calloc(4 * sizeof(int[4]));          // Lo mismo, nombrando el tipo directamente.
  int *p3 = calloc(4 * sizeof(int));             // Lo mismo, sin repetir el nombre del tipo.

  if(p2) {
    for(int i = 0; i < 4; i++)                  // Imprime el arreglo.
        printf("p2[%d] = %d\n", i, p2[i]);
  }

  free(p1);
  free(p2);
  free(p3);

  return 0;
}
```

### <a href="../01 - ManejoMemoria/01 - 03 - aligned_malloc.c">Memoería Alineada `aligned_malloc()`</a>

La memoria alineada `aligned_malloc()` asigna el tamaño en bytes del almacenamiento no inicializado cuya especificación se especifica mediante el alineamiento. El parámetro ingresado debe ser un múltiplo entero del alineamiento. Un punto a favor de la memoria alineada es que es segura para hilos, es decir, se comporta cómo si sólo accediera a las posiciones de memoria visibles a través de su argumento,y no a cualquier almacenamiento o espacio estático. El formato de `aligned_malloc()` es el siguiente:

```C
void* aligned_calloc(size_t alineamiento, size_t tamaño);  // Reserva memoria para alinear en ciertos limites.
```

Puede ser utilizada de la siguiente forma:

```C
#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p1 = aligned_calloc(10 * sizeof *p1);
  printf("Dirección alineada por defecto: %p\n", (void*)p1);
  free(p1);

  int *p2 = aligned_calloc(1024, 1024 * sizeof *p2);
  printf("Dirección alineada de 1024 bytes: %p\n", (void*)p2);
  free(p2);

  return 0;
}
```

### <a href="../01 - ManejoMemoria/01 - 04 - free.c">Memoría Libre `free()`</a>

Es posible observa, que cada vez que se asigna memoria ya sea con `malloc()`, `calloc()` o `realloc()`, se necesita liberar ese espacio el cuál fue asignado, por lo cual se usa la función `free()`, esto se hace con la finalidad de que el sistema pueda reutilizar dicha memoria. Su definición está dada por:

```C
void free(void* ptr);  // Libera un bloque de memoria previamente asignado.
```

Puede ser utilizada de la siguiente forma:

```C
#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p1 = malloc(10 * sizeof *p1);
  free(p1);                                     // Cada puntero asignado debe ser liberado
 
  int *p2 = calloc(10, sizeof *p2);
  int *p3 = realloc(p2, 1000 * sizeof *p3);
  if(p3)                                        // p3 no nulo significa que p2 fue liberado por realloc
    free(p3);
  else                                          // p3 nulo significa que p2 no fue liberado
    free(p2);

  return 0;
}
```

### <a href="../01 - ManejoMemoria/01 - 05 - realloc.c">Reasignación de Memoría `realloc()`</a>

Si se necesita expandir el puntero previamente asignado en la memoria. `realloc()` permite desasignar el viejo objeto al ptr, y retorna un puntero al objeto el cual tiene el tamaño especifico. Este ptr es un puntero en la memoria que previamente fue asignado con la misma `realloc()`, `calloc()` o `malloc()`, esto con el fin de ser reasignado, un punto importante que destacar es que aún no debe ser liberado el espacio con `free()`. De lo contrario el valor va a ser indefinido.

La reasignación puede ser hecha si:

- Se desea expandir o contraer el área exitente apuntada por ptr, si es posible. El contenido del área permanece inalterado hasta el mínimo de los tamaños nuevos y antiguos. Si el área se expande, el contenido de la nueva parte del arreglo es indefinido.

- Se desea asignaro a un nuevo bloque de memoria un nuevo tamaño de bytes, copiando un área de memoria con un tamaño igual al menor de los nuevos y viejos tamaños, y liberando el bloque viejo.

Si no hay suficiente memoria, el viejo bloque de memoria no se libera y se devuelve un puntero nulo. Su definición esta dada de la siguiente forma:

```C
void* realloc(void* ptr, size_t nuevo_tamaño);  // Cambia el tamaño de un bloque de memoria previamente asignado.
```

Puede ser utilizada de la siguiente forma:

```C
#include <stdio.h>
#include <stdlib.h>

int main() {
  int *pa = malloc(10 * sizeof *pa);            // Asignar un arreglo de 10 int

  if(pa) {
    printf("%zu bytes asignados. Enteros almacenados: ", 10 * sizeof(int));
    for(int n = 0; n < 10; ++n)
    printf("%d ", pa[n] = n);
  }
 
  int *pb = realloc(pa, 1000000 * sizeof *pb);  // reasigna el arreglo a un tamaño mayor

  if(pb) {
    printf("\n%zu bytes asignados, los primeros diez enteros son: ", 1000000*sizeof(int));
      for(int n = 0; n < 10; ++n)
        printf("%d ", pb[n]);                   // Imprime el arreglo
      free(pb);
    } else {                                    // Si la reasignación falla, el puntero original debe ser liberado.
      free(pa);
    }
    free(p2);

  return 0;
}
```

### <a href="../01 - ManejoMemoria/01 - 06 - reallocVSfree.c">"realloc(ptr, 0)" no es lo mismo que `free(ptr)`</a>

Aunque `realloc(pr, 0)` técnicamente libera memoria, no siempre es equivalente a `free(ptr)` debido a que el comportamiento de `realloc()` puede depender del sistema. En algunos casos, puede devolver un puntero `>NULL` sin liberar memoria correctamente.

### <a href="../01 - ManejoMemoria/01 - 07 - VLA.c">Arreglos Multidimensionales de Tamaño Variable</a>

C permite tener arreglos de longitud variable (VLA), estos arreglos son modelados con límites que solo se conocen en el momento, por lo tanto, es importante no asignar un VLA muy largo, utilizar apuntadores para VLAs con `sizeof` es correcto.

```C
double sumTodo(size_t n, size_t m, size_t A[n][m]) {
  double ret = 0.0;
  for (size_t i = 0; i < n; ++i)
    for (size_t j = 0; j < m; ++j)
      ret += A[i][j];
    return ret;
}

int main(int argc, char *argv[argc + 1]) {
  size_t n = argc * 10;
  size_t m = argc * 8;
  double (*matriz)[m] = malloc(sizeof(double[n][m]));

  // Inicializa la Matriz
  double res = sumTodo(n, m, matriz);
  printf("El resultado es: %g\n", res);
  free(matriz);
}
```

La matriz es un apuntador a elementos del tipo `double[m]`, y la expresión `sizeof` con `double[n][m]` asegura que el espacio reservado sea el necesario para los n elementos. Todo este espacio de memoria es asignado de forma contigua y se puede desasignar utilizando la función `free()`.

### <a href="../01 - ManejoMemoria/01 - 08 - alloca.c">Asignar Memoria en la Pila `alloca()`</a>

La asignación de memoria en la pila (stack) ocurre automáticamente cuando se declaran variables locales dentro de una función. Sin embargo, también se puede utilizar la función `alloca()` para asignar memoria dinámica en la pila. La memoria asignada con `alloca()` se libera automáticamente cuando la función termina, lo que la diferencia de `malloc()` (que asigna memoria en el montón y requiere liberación manual con `free()`).

### <a href="../01 - ManejoMemoria/01 - 09 - MMDU.c">Manejo de Memoria Definida por el Usuario</a>

Para implementar un esquema simple, se almacena un bloque de control en la región de memoria inmediatamente anterior al puntero que se va a devolver de la llamada. Esto significa que `free()` puede implementarse restando del puntero devuelto y leyendo la información de control, que normalmente es el tamaño del bloque más alguna información que permite volver a colocarlo en la lista libre, una lista enlazada de bloques no asignados.

Cuando el usuario solicita una asignación, se busca en la lista libre hasta que se encuentra un bloque de tamaño idéntico o mayor a la cantidad solicitada; luego, si es necesario, se divide. Esto puede provocar fragmentación de la memoria si el usuario está continuamente realizando muchas asignaciones y liberaciones de tamaño impredecible y a intervalos impredecibles (no todos los programas reales se comportan así, el esquema simple suele ser adecuado para programas pequeños).

```C
// Control de bloque tipico.
struct block {
  size_t size;                          // Tmaño del bloque
  size_t block *next;                   // Siguiente bloque en la lista libre
  size_t block *prev;                   // Puntero anterior en el bloque de memoria anterior
  size_t *padding;                      // Necesita 16 bytes para un multiplo de 8
}

static struct block arena[10000];       // Se almacena aquí
static struct block *firstfree;
```

Regresar al menú de intermedio <a href="../00 - Intermedio.md">Click aquí</a>.
