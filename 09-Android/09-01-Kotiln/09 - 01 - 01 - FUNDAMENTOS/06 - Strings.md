# STRINGS EN KOTLIN :dependabot:
En Kotlin los strings son valores inmutables los cuales son muy importantes, las operaciones más comunes que podemos realizar con los strings en Kotlin
son:

### Declaración de strings
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
val cadena3 = "">String de varias líneas.
                >Puede contener saltos de línea y caracteres especiales.
                >Está delimitado por triple comillas dobles""".trimMargin(">")
```
En este caso, > se utilizará como carácter de margen, y <b><i>trimMargin()</i></b> eliminará los caracteres > de cada línea de la cadena de texto.