# ESTRUCTURAS DE CONTROL :military_helmet:
La estructuras de control dentro del lenguaje de programación C son una parte fundamental al igual que las otras estructuras ya antes vistas, no solo para el lenguaje de programación en C, sino tambien en cualquier lenguaje de programación ya sea C++, PY, Java, etc., es por ello que es necesario tener una comprension muy buena de este conocimiento, debido a que no solo nos servira aquí, sino tambien en otros lenguajes o materias de estudio en la ingenieria.

Las estructuras de control a diferencia de la estructura de selección o condicionales, se definen dentro de C por tres palabras importantes, la primer palabra es <b><i>"for"</i></b>, esta palabra puede definirse en español de la siguiente manera: <b><i>"para"</i></b>, y tiene una inicialización, condición y decremento/incremento. La segunda palabra importante es <b><i>"while"</i></b>, esta palabra puede definirse en español de la siguiente manera: <b><i>"mientras"</i></b>. Por ultimo pero no por ello menos importante, tenemos la tercer palabra importante la cual es <b><i>"do-while"</i></b>, es similar que el "while", pero con la diferencia que esta palabra sera un ciclo definido por el <b><i>"hacer mientras"</i></b>. Veamos cada una de ellas:

<ul>
<li><a href="05 - 01 - for.c">Ciclo for</a></li>
La <b><i>estructura de control for</i></b> es una estructura de repetición la cual nos permite controlar a travez de un contador nuestro programa o bloque de código. Dentro de esta estructura como ya hemos dicho tiene una inicialización, condición y decremento o incremento, dicha estructura de control puede verse de la siguiente manera:

```C
for(inicialización; condición; incremento/decremento){
    /*
    ...
    Código en C
    ...
    */
}
```
En donde la <b>inicialización</b>, como su nombre lo dice, es donde inicializaremos nuestra variable en un valor pre-establecido, algo importante a denotar es que en dicha inicialización podemos declarar una variable local para solo el ciclo for, la <b>condición</b> es la parte de nuestro ciclo la cual se encarga de decir hasta que punto llegara nuestro control, y la parte del <b>incremento/decremento</b> es donde a partir ya sea de pos/preincremento o decremento
controlaremos nuestro ciclo.
```C
// for(tipoDato variable = inicilizacón; condición; incremento/decremento)
for(int i = 0; i <= 10; i++)
```
Su diagrama de flujo es el siguiente:
<div>
    <img src="../../../../IMGS/01 - C/01 - FUNDAMENTOS/02 - BLOQUE 2/ControlFor.png">
</div>

<li><a href="05 - 02 - while.c">Ciclo while</a></li>
La <b><i>estructura de control while</i></b> es una estructura de repetición la cual nos permite controlar a travez de una condición dada la cual debe ser verdadera nuestro programa, en si nuestro ciclo while evalua una condición dada y si esta se cumple se ingresa al bloque de código el cual "encapsula" nuestro while.

```C
while(condición){
    /*
    ...
    Código en C que se ejecuta si la condicón es verdadera
    ...
    */
}
```
Su diagrama de flujo es el siguiente:
<div>
    <img src="../../../../IMGS/01 - C/01 - FUNDAMENTOS/02 - BLOQUE 2/ControlSwitch.png">
</div>

<li><a href="05 - 03 - doWhile.c">Ciclo do-while</a></li>
La <b><i>estructura de control do-while</i></b> es una estructura de repetición muy parecida a nuestro ciclo while, la unica diferencia es que el ciclo ejecuta el bloque de código hasta que la condición establecida se cumpla, es por eso que común mente este ciclo se le denomina "hacer mientras".

```C
do{
    /*
    ...
    Código en C que se ejecuta al menos una vez
    hasta que la condicón se cumpla.
    ...
    */
}while(condición)
```
Su diagrama de flujo sería el siguiente:
<div>
    <img src="../../../../IMGS/01 - C/01 - FUNDAMENTOS/02 - BLOQUE 2/ControlDoWhile.png">
</div>
</ul>