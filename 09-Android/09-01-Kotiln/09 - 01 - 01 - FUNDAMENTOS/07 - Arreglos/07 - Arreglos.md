# ARREGLOS EN KOTLIN :package:
### INTRODUCCIÓN
Los arreglos al igual que en cualquier otro lenguaje de programación, son las estructuras de datos más básicas que podemos encontrar. Estos arreglos
en Kotlin deben cumplir las mismas reglas que en cualquier otro lenguaje de programación, deben contener los mismos tipos de datos y estos arreglos
deben de ser de un tamaño fijo.

### ARREGLOS GENERICOS
Dentro de Kotlin los arreglos de tipo generico son representados por:
```txt
    emptyArray<TipoArreglo>
```
Para poder crear un arreglo vacio debemos utilizar la siguiente función:
```kt
    val aVacio = emptyArray<String>()
```
Para poder crear un arreglo que tenga un tamaño y valores iniciales, utilizamos un constructor.
```kt
    //* Creamos un arreglo de cadenas con nuestro tamaño especifico y asignamos su valor inicial
    var strings = Array<String>(size = 5, init = {indice -> "Item #${indice}"})

    print(Arrays.toString(a))
    //! Imprime "[Item #0, Item #1, Item #2, Item #3, Item #4]"

    print(a.size)
    //! Imprime 5
```
Los arreglos pueden ser modificados con funciones get y set de la siguiente manera:
```kt
    //* Utilizamos la función set para cambiar el valor del Item
    strings.set(2, "CambioDeValor")

    //* Utilizamos la función get para obtener el valor
    print(strings.get(2))
```
O tambien podemos utilizar un cambio de valor directo en el arreglo:
```kt
    strings[2] = "CambioDeValor"
    print(strings[2])
```

### ARREGLOS DE TIPOS DE DATOS PRIMITIVOS
Cuando hablamos de los arreglos de tipos de datos primitivos en Kotlin, estamos hablando de los arreglos que contienen elementos de tipos primitivos
en lugar de onjetos.

Cuando trabajamos con arreglos tales como "Arreglo<Int>", estamos trabajando con arreglos que hacer referencia a objetos, por ello en el caso anterior
utilizamos un constructor, lo que puede tener un costo en términos de uso de memoria y rendimiento debido a la indirección adicional requerida para
acceder a los datos.

Por otro lado los arreglos de tipos de datos primitivos son arreglos que contienen directamente los valores de los tipos primitivos, lo que puede ser
más eficiente en términos de uso de memoria y rendimiento, ya que no hay indirección adicional para acceder a los valores.

Estos tipos de datos pueden ser creados utilizando las siguientes funciones:
```txt
  T I P O  K O T L I N    F A C T O R Y  F U N C T I O N   JVM TYPE
╔═══════════════════════╦════════════════════════════════╦═══════════╗
║ Arreglo booleano      ║ booleanArrayOf(true, false)    ║ boolean[] ║
╠═══════════════════════╬════════════════════════════════╬═══════════╣
║ Arreglo de byte       ║ byteArrayOf(1, 2, 3)           ║ byte[]    ║
╠═══════════════════════╬════════════════════════════════╬═══════════╣
║ Arreglo tipo caracter ║ charArrayOf('a', 'b', 'c')     ║ char[]    ║
╠═══════════════════════╬════════════════════════════════╬═══════════╣
║ Arreglo tipo double   ║ doubleArrayOf(1.2, 5.0)        ║ double[]  ║
╠═══════════════════════╬════════════════════════════════╬═══════════╣
║ Arreglo tipo flotante ║ floatArrayOf(1.2, 5.0)         ║ float[]   ║
╠═══════════════════════╬════════════════════════════════╬═══════════╣
║ Arreglo tipo entero   ║ intArrayOf(1, 2, 3)            ║ int[]     ║
╠═══════════════════════╬════════════════════════════════╬═══════════╣
║ Arreglo tipo largo    ║ longArrayOf(1, 2, 3)           ║ long[]    ║
╠═══════════════════════╬════════════════════════════════╬═══════════╣
║ Arreglo tipo short    ║ shortArrayOf(1, 2, 3)          ║ short[]   ║
╚═══════════════════════╩════════════════════════════════╩═══════════╝
```

### CREAR UN ARREGLO.
Un arreglo en Kotlin puede crearse de cuatro maneras comunes.

- <b>Utilizando la función <i>arrayOf()</i></b>.
Esta función nos permite crear un arreglo de objetos con los elementos proporcionados como argumentos.
```kt
//* Crea un arreglo de tipo "Array<Int>"
val numeros = arrayOf(1, 2, 3, 4, 5)
```

- <b>Utilizando la funciones de datos primitivos</b>.
Esta función nos permite crear un arreglo de objetos con los elementos proporcionados como argumentos.
```kt
val arregloEntero = intArrayOf(1, 2, 3, 4, 5)
val arregloDouble = doubleArrayOf(10.99, 20.5, 30.75)
val arregloBooleano = booleanArrayOf(true, false, true, true)
val arregloCaracteres = charArrayOf('I', 'P', 'N')
```

- <b>Utilizando la función <i>Array()</i></b>.
Esta función nos permite crear un arreglo de un tamaño especifico y, opcionalmente, inicilizar cada elemento utilizando una función de inicilización.
```kt
val numeros = Array(5) {i -> i * 2}
//? Creamos un arreglo de tamaño 5 e inicializa cada elemento con el doble de su índice
```

- <b>Utilizando la función <i>emptyArray()</i></b>.
Esta función nos permite crear un arreglo vacío de un tipo específico.
```kt
val vacio:Array<Int> = emptyArray()
```