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