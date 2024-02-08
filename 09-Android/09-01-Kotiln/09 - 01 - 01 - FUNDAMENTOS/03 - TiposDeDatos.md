# TIPOS DE DATOS EN KOTLIN :dependabot:
En Kotlin tenemos diferentes tipos de datos, los más básicos son:

### Numéricos.
Los tipos de datos numéricos son aquellos datos los cuales nos permiten manejar números tanto enteros como de punto flotante:
```txt
|    TIPO DE DATO    | TAMAÑO [bits] |        RANGO        |
| Byte               |      8        |     -128 ~ 127      |
| Short              |      16       |   -32768 ~ 32767    |
| Int                |      32       | -2.1*10⁹ ~ 2.1*10⁹  |
| Long               |      64       | -2*10^63 ~ (2*63)-1 |
| Float              |      32       | 6 dígitos de precis |
| Double             |      64       | 10 dígitos de precis|
```

### Char.
Los tipos de dato caracter o "char" son aquellos los cuales nos permiten trabajar con caracteres o cadenas de caracteres, estos se componen de:
```txt
|    TIPO DE DATO    | TAMAÑO [bits] |    RANGO   |
| Char               |      8        | -127 ~ 127 |
| String             |     N/A       |     N/A    |
```

### Booleanos.
Los tipos de dato bool representan valores booleanos verdaderos o falsos:
```kt
val esPolitecnico: Boolean = true
val esUniversitario: Boolean = false
```

### Nulos.
Para cada tipo de dato en Kotlin, hay una versión que puede contener valores nulos. Se especifica agregando ? al final del tipo de dato.
```kt
val esPolitecnico: String? = null
```

### Especiales.
- Unit: Representa la ausencia de valor, similar a void en otros lenguajes. Se utiliza para funciones que no devuelven ningún valor útil.
```kt
fun saludar(): Unit {
    println("¡Hola!")
}
```

- Nothing: Representa un tipo que no tiene valores. Se utiliza en situaciones donde la función nunca devuelve un valor o lanza una excepción.
```kt
fun lanzarExcepcion(): Nothing {
    throw RuntimeException("Ocurrió un error")
}
```

<b>NOTA.</b>Es necesario conocer los requerimientos de nuestros programas ya que si utilizamos algún dato de manera erronea podemos desbordar la memoria y
tener problemas con nuestro programa y hasta podemos dañar nuestra PC o dispositivo móvil.