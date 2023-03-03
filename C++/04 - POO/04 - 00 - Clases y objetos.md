# Programación orientada a objetos
La programación otientada a objetos (POO) está compuesta o construida por la programación estructurada, por ello es
necesario poder entender dicha programación primero, si no ha terminado de entender este tipo de programación visite las
carpetas de <a href="../01 - Fundamentos">Fundamentos</a> e <a href="../02 - Intermedio">Intermedio</a> para una mejor 
visualización de los temas aqui abordados.

### Conceptos clave     :memo:
La programación orientada a objetos (POO) es utilizada para poder <i>encapsular datos</i> (atributos) y funciones
(comportamiento) en paquetes llamados <i>clases</i>; los atributos y comportamientos de una clase se encuentran íntimamente
ligados entre si. Podemos visualizar una clase como un anteproyecto/plano. A partir de dicho anteproyecto/plano, un albañil
puede contruir una casa o edificio. <b><i>A partir de una clase, un programador puede crear un objeto. Una clase se puede reutilizar
muchas veces para hacer muchos objetos de la misma clase.</i></b>

Las clases constan de una propiedad muy importante la cual es el poder <i>ocultar información</i>; significa que aunque los objetos
de una clase pueden saber cómo comunicarse entre si, a través de <i>interfaces</i> definidas de manera correcta, por lo general, a las
clases no se les permite saber cómo se implementan otras clases; los detalles de implementación están ocultos dentro de las mismas clases.
Una analogía perfecta es cuando jugamos un videojuego, con toda seguridad podemos manejar nuestro personaje y hacer misiones, todo esto
sin necesidad de saber cómo funciona internamente el procesador y los componentes del dispositivo donde estemos jugando.

### C vs C++    :boxing_glove:
Mientras que en C y en otros <i>lenguajes de programación por procedimientos</i>, la programación tiende a ser <b><i>orientada a acciones</i></b>.
En C++ el ideal es programar en <b><i>orientación a objetos</i></b>. En C la unidad fundamental de programación es la <i>función</i>. En C++, la
unidad fundamental de programación es la <i>clase</i>, a partir de la cual podemos generar <i>instancias</i> de todos los objetos (creamos objetos).
```txt
╔══════════════════════════════════════╗══════════════════════════════════════╗
║                   C                  ║                 C++                  ║
╠══════════════════════════════════════╣══════════════════════════════════════╣
║  Se concreta en escribir funciones   ║  Se concreta en escibir clases       ║
║                                      ║                                      ║
║  Los datos existen primordialmente   ║  A las clases tambien podemos llam_  ║
║  para apoyar las acciones que real_  ║  arlas como "tipos definidos" por    ║
║  izan las funciones.                 ║  el programador.                     ║
╚══════════════════════════════════════╝══════════════════════════════════════╝
```
En C++ cada clase contiene datos, así como el conjunto de funciones que manipularan a dichos datos. Los datos que componen una clase llevan por
nombre <i>datos miembro</i>, y las funciones que componen a una clase tienen el nombre de <i>funciones miembro</i> (o <i>métodos</i>, en otros
lenguajes de programación orientado a objetos).

El foco de atención en C++ ya hemos dicho que se encuentra en las clases, en lugar de las fucniones como lo es en C. Los <i>sustantivos</i> que
se encuentran en la especificaciones de un sistema ayudan al programador en C++ a poder determinar el conjunto de clases que utilizará para crear
los objetos que trabajarán juntos para implementar el sistema.

Algo importante a denotar es que <b><i>las CLASES EN C++ son la EVOLUCIÓN natural DE la noción STRUCT EN C</i></b>.

L A T E R ------------------------------------------------------------------------------------------------------------------------------------------------------------------
### ¿Qué es un objeto?
En programación un objeto es aquel que contiene dos cosas muy importantes, dichas cosas son:
    - Atributos (características)
    - Métodos (acciones)

Para poder visualizar de mejor manera dichos atributos y métodos realicemos un pequeño ejemplo.
Digamos que yo tengo un coche al cual llamare "miCoche1", dicho coche tiene los siguientes atributos y caracteristicas:
    miCoche1
    Atributos (características):
        - Color: Negro.
        - Marca: Mercedes benz.
        - Kilometraje: 0km.
    Métodos (acciones):
        - Encender
        - Acelerar
        - Frenar

Ahora digamos que tengo una fraccón igual a 5/3, entonces:
    fraccion1
    Atributos (características):
        - Numerador: 5.
        - Denominador: 3.
    Métodos (acciones):
        - Simplifacion
        - Suma de fracciones
        - Resta de fracciones

Entonces vistos los ejemplos anteriores podemos decir que en programación un objeto es aquel que contiene atributos y metodos.

### ¿Qué es una clase?
En programación una clase es un conjunto de objetos que comparten una estructura y comportamiento comunes.

Retomemos el ejemplo de los coches, entonces tendremos dos coches:
    miCoche2
        Atributos (características):
            - Color: Negro.
            - Marca: Mercedes benz.
            - Kilometraje: 0km.
        Métodos (acciones):
            - Encender
            - Acelerar
            - Frenar

    miCoche2
        Atributos (características):
            - Color: Amarillo.
            - Marca: Lamborgini.
            - Kilometraje: 0km.
        Métodos (acciones):
            - Encender
            - Acelerar
            - Frenar

Podemos observar que dichos coches tienen atributos y metodos en comun, es por ello que los podemos agrupar en una clase debido a que comparten una estructura y comportamiento comunes.
Esta clase en la cual los vamos a agrupar se llamara "Coche".
```txt
╔══════════════════════════════════════╗
║                 Coche                ║    <-      Nombre de la clase.
╠══════════════════════════════════════╣
║                Color                 ║
║                Marca                 ║    <-      Atributos.
║                Kilometraje           ║
╠══════════════════════════════════════╣
║                Encender              ║
║                Acelerar              ║    <-      Metodos.
║                Frenar                ║
╚══════════════════════════════════════╝
```
Apartir de la clase anterior podemos crear o instanciar objetos.