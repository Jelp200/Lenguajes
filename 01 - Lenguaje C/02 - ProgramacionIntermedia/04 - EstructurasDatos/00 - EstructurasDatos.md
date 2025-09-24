# ESTRUCTURAS DE DATOS :building_construction:

Las estructuras de datos son bloques fundamentales en la construcción de programas. Las estructuras de datos definen como los datos se organizan, almacenan y manipulan dentro del programa. Entender las estructuras de datos es demasiado importante para tener un desarrollo eficiente y algoritmos efectivos.

Pero **_¿Qué es una estructura de datos?_** Una estructura de datos es un almacen el cual es utilizado para organizar, y como su nombre lo dice, almacenar datos. Es una forma de organizar los datos en una computadora para que se pueda acceder a ellos y actualizarlos de manera eficiente. Una estructua de datos no solo sirve organizar los datos. Sino tambien para procesar, recuperar y almacenar. Existen diferentes tipos de estructuras de datos, desde las más básicas, hasta las más avanzadas .

## Clasificación de las Estructuras de Datos

<div><img src="../../../imgs/01 - Lenguaje C/02 - ProgramacionIntermedia/04 - ED/TED.png"></div>

- **_Estructuras de Datos Lineales._** La estructura de datos en la que los elementos de datos están dispuestos de forma secuencial o lineal, donde cada elemento está unido a sus elementos adyacentes anterior y siguiente, se denomina estructura de datos lineal (Arreglos, Pilas, Colas, Listas Enlazadas, etc.).
- **_Estructuras de Datos Estaticas._** La estructura de datos estática tiene un tamaño de memoria fijo. Es más fácil acceder a los elementos de una estructura de datos estática (Arreglos).
- **_Estructuras de Datos Dinamicas._**En una estructura de datos dinámica, el tamaño no es fijo. Puede actualizarse aleatoriamente durante el tiempo de ejecución, lo que puede considerarse eficiente en relación con la complejidad de la memoria (espacio) del código (Colas, Pilas, etc.).
- **_Estructuras de Datos No Lineales._** Las estructuras de datos en las que los elementos de datos no se colocan de forma secuencial o lineal se denominan estructuras de datos no lineales. En una estructura de datos no lineal, es posible recorrer todos los elementos en una sola ejecución (Arbóles y Grafós).

### <a href="../../01 - FundamentosDeProgramacion/18 - Arreglos/00 - Arreglos.md">Arreglos (1D)</a>

Los arreglos son estructuras de datos lineales que almacenan una colección de datos del mismo tipo. Los elementos son almacenados de forma contigua en memoria, es decir, uno delante del otro, permitiendo el acceso en tiempo constante. Cada elemento tiene un número de índice único.

```C
tipoDato nombreArreglo[tamanoArreglo] = {elemento1, elemento2, ..., elementoN};
```

El arreglo `nombreArreglo` de tamaño `tamanoArreglo` se representa como:

$$
\text{nombreArreglo} = \begin{bmatrix}
\text{elemento1} \\
\text{elemento2} \\
\vdots \\
\text{elementoN}
\end{bmatrix}
$$

O de forma orizontal:

$$
\mathbf{nombreArreglo} = [elemento_1, elemento_2, \dots, elemento_n]
$$

### <a href="../../01 - FundamentosDeProgramacion/18 - Arreglos/00 - Arreglos.md">Arreglos (2D) o Matrices</a>

Los arreglos de dos dimesiones o tambien llamados matrices, son estructuras de datos lineales que al igual que los arreglos simples, almacenan una colección de datos del mismo tipo.

```C
tipoDato nombreArreglo[numeroFilas][numeroColumnas] = {{datosFila}, {datosColumna}};
```

### <a href="../../01 - FundamentosDeProgramacion/22 - EntradasSalidasEstandar/00 - EntradaSalidasEstandar.md">Cadenas</a>

Las cadenas de caracteres o strings, son utilizadas tipicamente para representar texto. Son consideradas un tipo de datos que permiten las manipulación y procesamiento de datos tipo texto en programas.

### <a href="04 - 04 - Stack/04 - 04 - 01 - StackComplete.c">Pilas</a>

Una pila o stack es una estructura de datos que almacena y recupera sus elementos atendiendo a un estricto orden. Estas pilas también son conocidas como estructuras **_LIFO (Last-in, Fist-out)_**, todas las insercciones y estracciones de elementos se realiza por un mismo estremo denominado cima de la pila.

#### Principio del LIFO

A continucación los siguientes ejemplos permiten comprender de mejor forma el principio del LIFO.

- **_Cortar jamón._** Cuando vamos al super y pedimos x cantidad de jamón lo que hace el carnícero es agarrar el jamón y comenzarlo a cortar, cuando van saliendo las rodajas de jamón el carnícero va apilandolas como salen, y si este ve que la rodaja que acaba de cortar y poner es más delgada o gruesa de lo que pedimos, este la quita inmediatamente.

- **_Apliar cajas._** Al momento de apilar cajas lo que se hace es poner una ensima de otra, y si la caja que se puso al último no va ahí, esa misma caja es la que se quita.

#### Representación Gráfica de una Pila

<div><img src="../../../imgs/01 - Lenguaje C/02 - ProgramacionIntermedia/04 - ED/STCK.png"></div>

#### Tipos de pilas

- **_Pila de tamaño fijo._** Este tipo de pila, como su nombre lo dice, es una pila la cual no puede crecer o disminur en tamaño dinamicamente. Si la pila esta llena y se desea agregar algún otro elemento, un error de desbordamiento ocurre. Si la pila esta vacia y se desea eliminar un elemento, un error de desbordamiento ocurre igualmente.
- **_Pila de tamaño dinamico._** Este tipo de pila, es una pila la cual puede crecer o disminur en tamaño dinamicamente. Cuando la pila está llena, aumenta automáticamente su tamaño para acomodar el nuevo elemento, y cuando está vacía, disminuye su tamaño. Este tipo de pila se implementa mediante una lista enlazada, ya que permite cambiar el tamaño de la pila fácilmente.

##### Operaciones Básicas en una Pila

| Funciones    | Descripción    |
|---|---|
| **_`push()`_**    | Inserta un elemento en la pila.    |
| **_`pop()`_**    | Eelimina un elemento de la pila.    |
| **_`top()`_**    | Regresa el elemento superior de la pila.    |
| **_`isEmpty()`_**    | Retorna `true` si la pila esta vacía y `false` sino.    |
| **_`isFull()`_**    | Retorna `true` si la esta llena y `false` sino.    |

Para implementar la pila, necesitamos mantener la referencia al elemento superior.

##### <a href="04 - 04 - Stack/04 - 04 - 02 - Push.c">Push en la pila</a>

La operación `push()` permite ingresar o insertar un elemento en la pila. Si la pila está llena, se ingresa a una condición de desbordamiento. El argoritmo de la `push()` operación es:

<div><img src="../../../imgs/01 - Lenguaje C/02 - ProgramacionIntermedia/04 - ED/ASTCK.png"></div>

Esto puede verse como:

- Antes de insertar un elemento en la pila, se verifica si la pila está llena.
- Si la pila esta llena (`top == capacidad - 1`), la pila se desborda y no pueden ser insertados los elementos.
- De otra forma, si la pila no esta llena, se incrementa el valor superior (`top == capacidad + 1`) y el nuevo valor se inserta en la posición superior.
- Los elementos se pueden insertar dentro de la pila hasta alcanzar la capacidad de la misma.

##### <a href="04 - 04 - Stack/04 - 04 - 03 - Pop.c">Pop en la pila.</a>

La operación `pop()` permite eliminar un elemento en la pila. Los elementos son expulsados en el orden inverso del que se insertan o empujan. Si la pila esta vacía, se ingresa a una condición de desbordamiento:

<div><img src="../../../imgs/01 - Lenguaje C/02 - ProgramacionIntermedia/04 - ED/ASTCK_2.png"></div>

Esto puede verse como:

- Antes de eliminar el elemento de la pila, se verifica si la pila esta vacía.
- Si la pila esta vacía (`top == -1`), entonces la pila se desborda y no pueden ser eliminados los elementos.
- De otra forma, se almacena el valor superior, decrementando el valor superior en 1 (`top = top - 1`) y se devuelve el valor almacenado superior.

Estas dos operaciones pueden verse gráficamente de la siguiente forma:

<div><img src="../../../imgs/01 - Lenguaje C/02 - ProgramacionIntermedia/04 - ED/ASTCK_3.png"></div>

##### <a href="04 - 04 - Stack/04 - 04 - 04 - Top.c">Top o Peek en la pila.</a>
La operación `top()` o `peek()` permite visualizar el elemento en la parse superior o en la cima de la pila:

<div><img src="../../../imgs/01 - Lenguaje C/02 - ProgramacionIntermedia/04 - ED/ASTCK_4.png"></div>

Siendo su algoritmo el siguiente:

- Antes de devolver o retornar el valor del elemento superior o en la cima, se verifica si la pila esta vacía.
- Si la pila está vacía (`top == -1`), se imprime simplemente `Pila vacía`.
- De otra forma, se devuelve el elemento almacenado en `index = top`.

##### <a href="04 - 04 - Stack/04 - 04 - 05 - isEmpty.c">Pila Vacía.</a>
La operación `isEmpty()` retorna `true` si la pila esta vacia, sino retorna `false`:

<div><img src="../../../imgs/01 - Lenguaje C/02 - ProgramacionIntermedia/04 - ED/ASTCK_5.png"></div>

Siendo su algoritmo el siguiente:

- Verifica si el valor del elemento superior existe en la pila.
- Si (`top == -1`) significa que la pila esta vacía, entonces devuelve `true`.
- De otra forma, la pila no esta vacía, entonces devuelve `false`.

##### <a href="04 - 04 - Stack/04 - 04 - 06 - isFull.c">Pila Llena.</a>
La operación `isFull()` retorna `true` si la pila esta llena, sino retorna `false`:

<div><img src="../../../imgs/01 - Lenguaje C/02 - ProgramacionIntermedia/04 - ED/ASTCK_6.png"></div>

Siendo su algoritmo el siguiente:

- Verifica si el valor del elemento superior existe en la pila.
- Si (`top = capacidad - 1`) significa que la pila esta llena, entonces devuelve `true`.
- De otra forma, la pila no esta llena, entonces devuelve `false`.

#### Implementaciones de las pilas

- <a href="04 - 04 - Stack/04 - 04 - 07 - IPUA/04 - 04 - 07 - IPUA.md">**_Implementación de una pila utilizando arreglos._**</a>
- <a href="04 - 04 - Stack/04 - 04 - 08 - IPULE/04 - 04 - 08 - IPULE.md">**_Implementación de una pila utilizando listas enlazadas._**</a>

### <a href="04 - 05 - Queue/04 - 05 - 07 - QueueComplete.c">Colas</a>

Las colas son estructuras de datos que sigues el principio **_FIFO (First-in, First-out)_**, es decir, el primer elemento que entra es el primero que sale.

#### Principio del FIFO

El principio de FIFO dice que el primer elemento que ingresa dentro de la cola, es el primero que es eliminado en el proceos. Entonces, una cola, como su nombre lo dice, es como una líena de pago en un supermercado, el cajero atiende al primer cliente que ingresa a la cola del supermercado, y este mismo cliente sale como llego.

<div><img src="../../../imgs/01 - Lenguaje C/02 - ProgramacionIntermedia/04 - ED/QUE.png"></div>

#### Terminología Basica de las Colas

- **_Front:_** Se le conoce como "Front" a la posición de entrada en una cola lista para ser atendida, es decir, la primera entrada que será eliminada de la cola, se denomina frente de la cola. También se le conoce como cabeza de la cola.
- **_Rear:_** La posición de la última entrada en la cola, es decir, la última que se agregó, se denomina final de la cola. También se la conoce como cola de la cola.
- **_Size:_** El tamaño se refiere al número actual de elementos en la cola.
- **_Capacity:_** La capacidad se refiere al número máximo de elementos que la cola puede contener.

#### Representación Gráfica de una Cola

<div><img src="../../../imgs/01 - Lenguaje C/02 - ProgramacionIntermedia/04 - ED/QUE_2.png"></div>

#### Tipos de colas

- **_Cola simple._** La cola simple sigue simplemente la estructura FIFO. Solo es posible insertar el elemento al final y eliminar el elemento del frente de la cola.
- **_Cola de doble extremo (Deque)._** En una cola de doble extremo, las operaciones de inserción y eliminación pueden realizarse desde ambos extremos. Son de dos tipos:
-- Cola de entrada restringida: Esta es una cola simple. En este tipo de cola, la entrada se puede tomar solo de un extremo, pero la eliminación se puede realizar desde cualquiera de los extremos.
-- Cola de salida restringida: Esta también es una cola simple. En este tipo de cola, la entrada se puede tomar de ambos extremos, pero la eliminación se puede realizar solo desde un extremo
- **_Cola circular._** Este es un tipo especial de cola en la que la última posición se conecta con la primera. Aquí también las operaciones se realizan en orden FIFO.
- **_Cola de prioridad._** Una cola de prioridad es una cola especial en la que se accede a los elementos en función de la prioridad que se les asigna. Son de dos tipos:
-- Cola de prioridad ascendente: En la cola de prioridad ascendente, los elementos se organizan en orden creciente de sus valores de prioridad. El elemento con el valor de prioridad más bajo se elimina primero.
-- Cola de prioridad descendente: En la cola de prioridad descendente, los elementos se organizan en orden decreciente de sus valores de prioridad. El elemento con la mayor prioridad se elimina primero.

<div><img src="../../../imgs/01 - Lenguaje C/02 - ProgramacionIntermedia/04 - ED/QUE_5.png"></div>

#### Operaciones Básicas en una Cola

##### <a href="04 - 05 - Queue/04 - 05 - 01 - Enqueue.c">En cola (Enqueue)</a>

La operación en cola, permite agregar o almacenar un elemento al final de la cola. Sus pasos son los siguientes:

- Comprueba si la cola está llena. Si es así, devuelve un error de desbordamiento y sale.
- Si la cola no está llena, incrementa el puntero posterior a la siguiente posición disponible.
- Inserta el elemento en la parte posterior.

<div><img src="../../../imgs/01 - Lenguaje C/02 - ProgramacionIntermedia/04 - ED/QUE_3.png"></div>

##### <a href="04 - 05 - Queue/04 - 05 - 02 - Dequeue.c">Fuera de cola (Dequeue)</a>

La operación fuera de cola, permite eliminar un elemento al frente de la cola. Sus pasos son los siguientes:

- Comprueba si la cola está vacía. Si es así, devuelve un error de desbordamiento.
- Elimina el elemento del frente.
- Incrementa el puntero del frente al siguiente elemento.

##### <a href="04 - 05 - Queue/04 - 05 - 03 - PeekFront.c">Peek o Front</a>

Retorna el elemento que se posiciona en el frontend sin ser removido.

##### <a href="04 - 05 - Queue/04 - 05 - 04 - Size.c">Tamaño</a>

Retorna el numero de elementos presentes en la cola.

##### <a href="04 - 05 - Queue/04 - 05 - 05 - isEmpty.c">isEmpty</a>

Retorna un valor booleano el cual indica si la cola esta vacía o no.

##### <a href="04 - 05 - Queue/04 - 05 - 06 - isFull.c">isFull</a>

Retorna un valor booleano el cual indica si la cola esta llena o no.

<div><img src="../../../imgs/01 - Lenguaje C/02 - ProgramacionIntermedia/04 - ED/QUE_4.png"></div>

#### Aplicaciones de una Cola

La aplicación de colas es común. En un sistema informático, puede haber colas de tareas que esperan la impresora, el acceso al almacenamiento en disco o incluso, en un sistema de tiempo compartido, el uso de la CPU. Dentro de un solo programa, puede haber múltiples solicitudes que se deben mantener en una cola, o una tarea puede crear otras tareas, que deben realizarse a su vez manteniéndolas en una cola.

- Una cola siempre se utiliza como un búfer cuando hay un desajuste de velocidad entre un productor y un consumidor. Por ejemplo, el teclado y la CPU.
- La cola se puede utilizar cuando se tiene un solo recurso y varios consumidores, como una sola CPU y varios procesos.
- En una red, una cola se utiliza en dispositivos como un enrutador/conmutador y una cola de correo.
- La cola se puede utilizar en varias técnicas de algoritmos como la búsqueda en amplitud, la ordenación topológica, etc.

#### Implementaciones de las colas

- <a href="04 - 05 - Queue/04 - 05 - 08 - ICUA/04 - 05 - 07 - ICUA.md">**_Implementación de colas utilizando arreglos._**</a>
- <a href="04 - 05 - Queue/04 - 05 - 09 - ICULE/04 - 05 - 09 - ICULE.md">**_Implementación de colas utilizando listas enlazadas._**</a>

### <a href="./04 - 06 - LinkedList/04 - 06 - 04 - LinkedListComplete.c">Listas Enlazadas</a>
Las listas enlazadas son un tipo de estructura de dato fundamental. Contienen una eficiente inserción y eliminación a comparación de los arreglos. Tal y como los arreglos, estas tambien son utilizadas para implementar otras estructuras de datos como pilas y colas. A continuación la siguiente tabla muestra las diferencias entre las listas enlazadas y los arreglos.

| Listas Enlazadas                                                                        | Arreglos                                                            |
|-----------------------------------------------------------------------------------------|---------------------------------------------------------------------|
| **Estructura de datos:** No contigua                                                    | **Estructura de datos:** Contigua                                   |
| **Localidad de memoria:** Generalmente<br>se asignan uno por uno a elementos individuales | **Localidad de memoria:** Generalmente se<br>asigna todo el arreglo |
| **Inserción/Eliminación:** Eficiente                                                    | **Inserción/Eliminación:** Ineficiente                              |
| **Acceso:** Secuencial                                                                  | **Acceso:** Aleatorio                                               |

Las listas enlazadas pueden clasificarse en:

- <a href="04 - 06 - LinkedList/04 - 06 - 01 - SimpleLinkedList/04 - 06 - 01 - SLL.md">**_Lista Enlazada Simple (LES)._**</a>
- **_Doble Lista Enlazada (DLE)._**
- **_Lista Enlazada Circular (LEC)._**
- **_Aplicaciones y ventajas de las listas enlazadas._**


Regresar al menú de intermedio <a href="../00 - Intermedio.md">Click aquí</a>.