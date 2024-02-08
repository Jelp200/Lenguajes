/*
** ##########################################################################################
**  Archivo         :   01 - 01 - OperacionesB.kt
**  Proyecto        :   Android con Kotlin
**  Herramienta(s)  :   VSCode
**                      Android Studio
**  Autores         :
**                      Jelp200
**  Descripcion     :
**                      El siguiente programa pide al usuario ingresar un numero y caracter
**                      y lo visualiza en la terminal.
** ##########################################################################################
*/

/* ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||||||||||| F U N C I O N   P R I N C I P A L |||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| */
fun main() {
    //* Solicitamos el numero y el caracter al usuario
    print("De un numero: "); val n = readLine()!!.toInt()
    print("De un caracter: "); val c = readLine()!!.first()

    //* Mostramos el numero y el caracter
    println("El numero es: $n")
    println("El caracter es: $c")
}

/* *******************************************************************************************
****************************************** N O T A S *****************************************
**********************************************************************************************
-   Recordemos que "readLine()" nos permite leer una línea de texto desde la consola y devuelve
    null si se alcanza el final de la secuencia de entrada o si se produce un error de lectura.

-   "!!" es un operador que nos permite indicar que el valor no es nulo, es decir, que no es
    null, por lo que si el valor es null, se lanzará una excepción.

-   "first()" nos permite obtener el primer caracter de una cadena de texto.
*/