/*
** ##########################################################################################
**  Archivo         :   01 - 01 - OperacionesB.kt
**  Proyecto        :   Android con Kotlin
**  Herramienta(s)  :   VSCode
**                      Android Studio
**  Autores         :
**                      Jelp200
**  Descripcion     :
**                      Se muestra como realizar operaciones básicas en Kotlin.
** ##########################################################################################
*/

/* ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||||||||||| F U N C I O N   P R I N C I P A L |||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| */
fun main() {
    //* SUMA
    val a:Int = 10; val b:Int = 5
    val suma:Int = a + b
    println("$a + $b = $suma")

    //* RESTA
    val c:Float = 3.1516f; val d:Float = 5.1412f
    val resta:Float = c - d
    val result:String = "%.2f - %.2f = %.2f"
    println(result.format(c, d, resta))

    //* PRODUCTO
    var e:Int = 100; val f:Float = 0.1f
    var prod:Float = e * f
    println("$e x $f = $prod")

    //* COCIENTE
    var gC:Char = '8'; var hC:Char = '2'
    var gI:Int = gC.toInt(); var hI:Int = hC.toInt()
    println("${gI} / ${hI} = ${gI / hI}")

    //* RESIDUO
    val i:Float = 536.563f; var j:Float = 10.55
    var k:Int = i.toInt() % j.toInt()
    println("${i} / ${j} = $k")
}

/* *******************************************************************************************
****************************************** N O T A S *****************************************
**********************************************************************************************
- En el cociente el resultado es 1 debido a que lo que hacemos es convertir el valor de '8' y
  '2' a su correspondiente numero de la tabla ASCII, y esto es '56' / '50' que es 1

- Entonces cuando convertimos un valor char a int, lo que se hace es convertir el valor ASCII
  del caracter a su correspondiente valor entero.

- Recordemos que dado que el modulo es una operación da un valor entero, es necesario convertir
  los valores a enteros.
*/