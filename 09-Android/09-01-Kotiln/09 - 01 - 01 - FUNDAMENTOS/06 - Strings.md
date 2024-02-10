# STRINGS EN KOTLIN :dependabot:
En Kotlin los strings son valores inmutables los cuales son muy importantes, las operaciones más comunes que podemos realizar con los strings en Kotlin
son:

### Declaración de strings.
Podemos declarar nuestras cadenas de caracteres de la siguiente manera:
```kt
val cadena1 = "String de una sola línea"
val cadena2 = """String de varias líneas.
                |Puede contener saltos de línea y caracteres especiales.
                |Está delimitado por triple comillas dobles""".trimMargin()
```
En este cado el método <b><i>trimMargin()</i></b> elimina los caracteres de margen de cada línea de la cadena de texto, lo que hace que la cadena resultante sea más
limpia y legible. Por defecto, | se utiliza como carácter de margen, pero puedes especificar un carácter de margen diferente como argumento del método
<b><i>trimMargin()</i></b>. Por ejemplo:
```kt
val cadena3 = """>String de varias líneas.
                >Puede contener saltos de línea y caracteres especiales.
                >Está delimitado por triple comillas dobles""".trimMargin(">")
```
En este caso, > se utilizará como carácter de margen, y <b><i>trimMargin()</i></b> eliminará los caracteres > de cada línea de la cadena de texto.

### Concatenación de strings.
Al igual que en PY, en Kotlin es posible concatenar (juntar) las cadenas de caracteres, esto se ve de la siguiente manera:
```kt
var escuela = "ESIME"
val especialidad = "electronica"

//* Concatenación de strings usando el operador +
val saludo1 = "Saludos desde la especialidad de " + especialidad + " de la " + escuela
//* Concatenación de strings usando interpolación de cadenas
val saludo2 = "Saludos desde la especialidad de $especialidad de la $escuela"
```

### Interpolación de strings.
```kt
val usuario = "Jelp200"
val edad:Int = 23
val Mensaje = "Hola, $usuario. Tienes $edad años de edad"
```

### Métodos útiles de strings.
Los métodos más útiles que podemos utilizar con las cadenas de caracteres son:
```kt
val cadena = "ESIME ZACATENCO | ICE"

//* LONGITUD DE LA CADENA
val longitud = cadena.length

//* SUBCADENA
val subcadena = cadena.substring(0, 4)

//* CADENA A MAYUSCULAS
val mayusculas = cadena.toUpperCase()

//* CADENA A MINUSCULAS
val minusculas = cadena.toLowerCase()

//* CADENA VACIA?
val vacia = cadena.isEmpty()

//* CONTIENE SUBCADENA?
val contiene = cadena.contains("ICE")
```

### Comparación de strings.
```kt
val cadena1 = "ESIME"
val cadena2 = "ESIME"
//* Comparación de igualdad
val sonIguales = cadena1 = cadena2
//* Comparación de igualdad ignorando mayúsculas
val sonIgualesIgnorandoMayus = cadena1.equals(cadena2, ignoreCase = true)
```

### Igualdad de strings.
En Kotlin los strings pueden ser comparados con el operador de igualdad (==).
```kt
val cadena1 = "ESIME ZACATENCO, ICE"
val cadena2 = "ESIME ZACATENCO," + " ICE"
println(cadena1 == cadena2)             // ¿La cadena 1 es igual a la cadena 2?
//! Imprime true
```
Pero tambien con el operador "===" el cual verifica su igualdad estructural
```kt
val cadena1 = """
                |ESIME ZACATENCO, ICE
                """.trimMargin()
val cadena2 = """
                #ESIME ZACATENCO, ICE
                """.trimMargin("#")
val cadena3 = cadena1

println(cadena1 == cadena2)             // ¿La cadena 1 es igual a la cadena 2?
//! Imprime true

println(cadena1 === cadena2)             // ¿La cadena 1 es igual estructuralmente a la cadena 2?
//! Imprime false

println(cadena1 === cadena3)             // ¿La cadena 1 es igual estructuralmente a la cadena 3?
//! Imprime true
```

### String literals.
Se refieren a la forma de representar cadenas de texto de forma literal, es decir, directamente desde el cpodigo fuente, en Kotlin tenemos dos tipos de
string literals:
- <b>Escaped string.</b> Los escaped string maneja caracteres especiales, estos escapes se hacen con una barra invertida, las secuencias de escape son:
```txt
    - \t (Tabulación)
    - \b (Backspace)
    - \n (Nueva línea)
    - \r (Carriage return)
    - \' (Comilla simple)
    - \" (Comilla doble)
    - \\ (Backslash)
    - \$
```
Si deseamos representar cualquier otro carácter utilizamos el Unicode de la siguiente manera:
```txt
    - \uFF00
```

- <b>Raw string.</b> Delimitado por triples comillas, estas no contienen secuencias de escape y solo puede contener nuevas líneas de caracteres.
```kt
    val texto = """
            for(c in "foo")
                print(c)
    """
```

### Elementos de un string.
Al saber que los elementos de un string son caracteres, podemos accesar a estos elementos a traves de una operación.
```kt
    val cadena = "ESIME ZACATENCO, ICE"
    
    //* Accedemos a sus elementos
    println(cadena[6])
    //! Imprime la Z
```