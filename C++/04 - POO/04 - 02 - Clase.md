### ¿Qué es una clase?
En programación una <b><i>clase es un conjunto de objetos que comparten una estructura y comportamiento comunes</i></b>.

Retomemos el ejemplo de los coches, entonces tendremos dos coches:<br><br>
    miCoche1<br>
    Atributos (características):<br>
    <ul>
        <li>Color: Negro</li>
        <li>Marca: Mercedes Benz</li>
        <li>Kilometraje: 0km</li>
    </ul>
    Métodos (comportamiento):<br>
    <ul>
        <li>Encender</li>
        <li>Acelerar</li>
        <li>Frenar</li>
    </ul><br><br>
    miCoche2<br>
    Atributos (características):<br>
    <ul>
        <li>Color: Amarillo</li>
        <li>Marca: Lamborgini</li>
        <li>Kilometraje: 0km</li>
    </ul>
    Métodos (comportamiento):<br>
    <ul>
        <li>Encender</li>
        <li>Acelerar</li>
        <li>Frenar</li>
    </ul>
Podemos observar que dichos coches tienen atributos y métodos en común, es por ello que los podemos agrupar en una clase debido a que comparten una estructura y comportamiento comunes.
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
<i><b>Apartir de la clase anterior podemos crear o instanciar objetos</i></b>.