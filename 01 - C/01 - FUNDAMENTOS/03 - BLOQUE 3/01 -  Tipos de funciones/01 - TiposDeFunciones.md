# TIPOS DE FUNCIONES EN C :package:

Las funciones son la parte más importante del lenguaje de programación en C, deido a que <b><i>en C la programación es orientada a acciones, y estas acciones pueden ser representadas en funciones</i></b>, con las funciones podemos ahorarnos líneas y líneas de código con tan solo delcarar un bloque de código que cumpla con las condiciones que deseamos, en si de forma general una función en C se declara de la diguiente manera:
```C
// PROTOTIPO DE LA FUNCION (Es muy recomendable tener un prototipo de función).
tipoDeDato nombreDeLaFnc(Parametros);

// FUNCION (Va después de nuestra función principal).
tipoDeDato nombreDeLaFnc(Parametros){
    /*
    ...
    Código en C dentro de la función
    ...
    */
}
```

###### <i><b>NOTA.</b></i> Los parametros de la función nos permitiran realizar ciertas tareas o acciones para que nuestro código funcione de una manera correcta, es posible poder pasar parametros a todos los tipos de funciones las cuales veremos a continuación.

Dentro de C tenemos tres tipos de funciones las cuales veremos a continuación:

<ul>
<li><a href="01 - 01 - funcionesSinRetorno.c">Funciones sin retorno</a></li>

Las funciones sin retorno (void functions) son funciones las cuales realizan una tarea sin que estas devuelvan algún valor. Se utilizan cuando la función realiza una acción o un procedimiento sin tener la necesidad de devolver algún resultado en especifico. Se declaran con el tipo de dato <b>void</b> como su
tipo de dato de retorno.

```C
void nombreDeLaFnc(Parametros){
    /*
    ...
    Código en C dentro de la función
    ...
    */
}
```

<li><a href="01 - 02 - funcionesConRetorno.c">Funciones con retorno</a></li>

Las funciones con retorno (return functions) son funciones las cuales realizan una tarea y devuelvan algún valor en la parte del programa en el cual se les llamo, el valor devuelto se especifica utilizando la palabra <b>return</b>. Se declaran con el tipo de dato con el cual queremos retornar.

```C
tipoDato nombreDeLaFnc(Parametros){
    /*
    ...
    Código en C dentro de la función
    ...
    */
   return valor/variable;
}
```

<li><a href="01 - 03 - funcionesRecursivas.c">Funciones recursivas</a></li>

Las funciones recursivas (recursive functions) son funciones las cuales se llaman a si mismas dentro de su propio bloque de código. Esto es usualmente utilizado para resolver problemas que se pueden dividir en más casos pequeños del mismo tipo. La recursividad tiene dos casos o partes principales:

- Caso base: La función deja de llamarse a sí misma.
- Caso recursivo: Se llama a sí misma con una versión más pequeña del problema.

Para poder comprender el como funciona una función recursiva veamos el ejemplo más básico para poder estudiar (factorial de un número):

```C
int Factorial(int n){
    if(n == 0)
        return 1;                       // Caso base
    else
        return n * Factorial(n - 1);    // Caso recursivo
}
```
En el código anterior podemos observar que el caso base es cuando "n" es igual a 0; en ese momento, la función devuelve 1. En el caso recursivo, se llama a la función con "n - 1" y se multiplica por "n". O de manera grafica tenemos:

```txt
Deseamos obtener el factorial de 3, por lo tanto:

Factorial(3)
    n = 3
    ¿n es igual a 0?
        devolvemos 3 * Factorial(3 - 1) = 3 * Factorial(2)

Factorial(2)
    n = 2
    ¿n es igual a 0?
        devolvemos 2 * Factorial(2 - 1) = 2 * Factorial(1)

Factorial(1)
    n = 1
    ¿n es igual a 0?
        devolvemos 1 * Factorial(1 - 1) = 1 * Factorial(0)

Factorial(0)
    n = 0
    ¿n es igual a 0?
        devolvemos 1

Por lo tanto tenemos:
    1 = Factorial(0)
    1 * 1 = 1 = Factorial(1)
    2 * 1 = 2 = Factorial(2)
    3 * 2 = 6 = Factorial(3)

Entonces el factorial de 3 es igual a 6
```

</ul>