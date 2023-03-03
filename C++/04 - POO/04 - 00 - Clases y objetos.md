# POO "Programación orientada a objetos" [:box:]
La programación otientada a objetos (POO) está compuesta o construida por la programación estructurada, por ello es
necesario poder entender dicha programación primero, si no ha terminado de entender este tipo de programación visite las
carpetas de <a href="../01 - Fundamentos">Fundamentos</a> e <a href="../02 - Intermedio">Intermedio</a> para una mejor 
visualización de los temas aqui abordados.

### Conceptos clave [:memo]
La programación orientada a objetos (POO) es utilizada para poder <i>encapsular datos</i> (atributos) y funciones
(comportamiento) en paquetes llamados <i>clases</i>; los atributos y comportamientos de una clase se encuentran íntimamente
ligados entre si. Podemos visualizar una clase como un anteproyecto/plano. A partir de dicho anteproyecto/plano, un albañil
puede contruir una casa o edificio. <b><i>A partir de una clase, un programador puede crear un objeto. Una clase se puede reutilizar
muchas veces para hacer muchos objetos de la misma clase.</i></b>
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