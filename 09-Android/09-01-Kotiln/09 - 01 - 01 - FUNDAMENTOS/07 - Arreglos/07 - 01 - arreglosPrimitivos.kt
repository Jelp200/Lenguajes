/*
** ##########################################################################################
**  Archivo         :   07 - 01 - arreglosPrimitivos.kt
**  Proyecto        :   Android con Kotlin
**  Herramienta(s)  :   VSCode
**                      Android Studio
**  Autores         :
**                      Jelp200
**  Descripcion     :
**                      El siguiente programa nos muestra como declarar y trabajar con
**                      arreglos de tipo de datos primitivos.
** ##########################################################################################
*/

/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++ P A C K A G E S ++++++++++++++++++++++++++++++++++++++ 
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
package com.android.kotlin

/* ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||||||||||| F U N C I O N   P R I N C I P A L |||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| */
fun main() {
    //* ARREGLO BOOLEANO
    var arregloBooleano = booleanArrayOf(true, false, true)

    //* ARREGLO DE BYTES
    var arregloByte = byteArrayOf(1, 2, 3)

    //* ARREGLO DE CARACTERES
    var arregloC = charArrayOf('I', 'P', 'N')

    //* ARREGLO DOUBLE
    var arregloDouble = doubleArrayOf(56.35, 40.99, 65.10)

    //* ARREGLO ENTERO
    val arregloEntero = intArrayOf(1, 2, 3, 4, 5)

    //! IMPRIMIMOS LOS ELEMENTOS DE NUESTROS ARREGLOS
    println(arregloBooleano.contentToString())
    println(arregloByte.contentToString())
    println(arregloC)
    println(arregloDouble.contentToString())
    println(arregloEntero.contentToString())

    //! CAMBIAMOS ALGUNOS VALORES
    arregloBooleano.set(2, true)
    arregloByte.set(0, 0)
    arregloC.set(1, 'T')
    arregloDouble.set(0, 0.1516)
    arregloEntero.set(4, 0)

    //! OBTENEMOS LOS NUEVOS VALORES
    println(arregloBooleano.get(2))
    println(arregloByte.get(0))
    println(arregloC.get(1))
    println(arregloDouble.get(0))
    println(arregloEntero.get(4))
}

/* *******************************************************************************************
****************************************** N O T A S *****************************************
**********************************************************************************************
-   Utilizamos la función "contentToString()" debido a que queremos imprimir los valores que
    tiene dentro nuestro arreglo, sino hacemos esto tendremos como resultado la representación
    de nuestro objeto (elementos del arreglo) en memoria.

-   Por el contrario si deseamos imprimir solo un elemento de nuestro arreglo no es necesario
    utilizar "contentToString()", solo hacemos referencia a la posición que deseamos obtener.

*/