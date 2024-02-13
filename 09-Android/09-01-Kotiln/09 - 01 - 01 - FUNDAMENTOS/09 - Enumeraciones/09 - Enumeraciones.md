# ENUM EN KOTLIN ::
### INTRODUCCIÓN
A diferencia de C donde las enumeraciones solo eran una estructura de datos la cual solo podía tener elementos miembro de tipo entero,
las enumeraciones en Kotlin son una forma de definir un tipo de datos que representa un conjunto fijo de valores relacionados. En este
caso cada "enum" es un objeto único y puede contener propiedades y métodos.

La declaración de una enum se hace de la siguiente manera:
```kt
enum class nombreEnum(parametros){
    /*
    ...
    Código en Kotlin
    ...
    */
}
```

### INICIALIZACIÓN
Las clases tipo enum, al igual que otras calses, pueden tener un constructor que puede ser inicializado.
```kt
enum class Color(val rgb:Int){
    ROJO(0xFF0000),
    VERDE(0x00FF00),
    AZUL(0x0000FF)
}
```

### IMPLEMENTACIÓN
Ahora para poder trabajar con nuestra enumeración podemos hacerlo de la siguiente manera:
```kt
enum class Color(val rgb:Int){
        ROJO(0xFF0000),
        VERDE(0x00FF00),
        AZUL(0x0000FF)
    }

fun main(){
    //! UTILIZAMOS LA VARIABLE ENUM
    val rojo:Color = Color.ROJO
    val verde:Color = Color.VERDE
    val azul:Color = Color.AZUL

    //! ACCEDEMOS A LOS VALORES
    println("El nombre de la variable 1 es ${rojo.name} con un valor RGB = ${rojo.rgb}")
    println("El nombre de la variable 2 es ${verde.name} con un valor RGB = ${verde.rgb}")
    println("El nombre de la variable 3 es ${azul.name} con un valor RGB = ${azul.rgb}")
}
```
Podemos observar que en la implementación urilizamos el operador punto para acceder a los valores que contiene nuestra enumeración,
en este caso utilizamos la variable local que creamos y accedemos a la propiedad que deseamos con el operador punto.

### FUNCIONES Y PROPIEDADES EN LAS ENUMS
Podemos observar que las clases enum pueden declarar dentro de ellas miembros tales como pripoedades y funciones. Un punto y coma
debe ser colocado entre el último objeto de nuestra enum, y la primer declaración de nuestro miembro, por ejemplo. Si el miembro es
abstracto, los objetos enum pueden ser implementados de la siguiente manera:
```kt
enum class Color{
    ROJO {
        override val rgb:Int = 0xFF0000
    },
    VERDE{
        override val rgb:Int = 0x00FF00
    },
    AZUL {
        override val rgb:Int = 0x0000FF
    };

    abstract val rgb:Int
    fun colorCadena() = "#%06X".format(0xFFFFFF and rgb)
}
```
- Podemos observar que pada cada uno de los colores se proporciona una implementación del miembro "rbg" con valor en formato hex.
- Además, hay un miembro abstracto "rgb" en el "enum class Color" que obliga a cada valor del enum a proporcionar una implementacion del valor RGB.
- También hay una función "colorCadena()" definida en el "enum class Color". Esta función convierte el valor RGB en una cadena de texto en formato hexadecimal con un prefijo "#", lo que la hace adecuada para su uso en CSS y otros contextos de color. Esta función utiliza la operación and para asegurarse de que solo se tomen en cuenta los 6 últimos dígitos hexadecimales del valor RGB.
- "override" se utiliza para indicar que un miembro de una clase o un enum está sobrescribiendo un miembro de su clase base o de una interfaz. En el contexto del código anterior, "override" indica que cada valor del "enum class Color" está proporcionando una implementación específica para el miembro "rgb", que es una propiedad abstracta definida en el enum.

### ENUM SIMPLE
```kt
enum class Color(val rgb:Int){
    ROJO, VERDE, AZUL
}
```

### MUTABILIDAD E INMUTABILIDAD EN ENUMS
De igual manera que en los arreglos, colecciones y Kotlin en general, las enumeraciones pueden ser mutables e inmutables, esto va a
depender de el como se definan y de cómo se utilicen.

- #### Enums mutables.
Hemos observado que los enums pueden tener propieddes y metodos, lo cual nos permite mayor flexibilidad. Esto se logra creando enums
con contructores, propiedades y métodos personalizados. Un enum mutable se ve de la siguiente manera:
```kt
enum class escuelasFundadorasIpn(var alumnos:Int = 0){
    ESIME(30 * 1000),
    ESCA(20 * 1000),
    ESIA(7000),
    ENCB(6000),
    ESM(6000),
    ESIT();

    override fun toString() = "Escuela: $name / [alumnos = $alumnos]"
}

fun main(){
    //! ACCEDEMOS A LOS MIEMBROS
    println(escuelasFundadorasIpn.ESIME)
    println(escuelasFundadorasIpn.ESCA)
    println(escuelasFundadorasIpn.ENCB)
    println(escuelasFundadorasIpn.ESM)
    
    escuelasFundadorasIpn.ESIT.alumnos = 1300
    println(escuelasFundadorasIpn.ESIT)
}
```
- #### Enums inmutables.
Por defecto, los enums son inmutables. Esto significa que una vez que se definen los valores del enum no se pueden modificar ni agregar
valores nuevos después de la definición. Su declaración es la siguiente:
```kt
enum class carrerasESIMEZ{
    ICE, IE, ISISA, IF, ICA
}
```
En este caso, "carrerasESIMEZ" es un enum inmutable que contiene las carreras de la ESIME Zacatenco. No se pueden agregar ni modificar
valores de carreras ESIME Z después de la definición del enum.