/*
** ##########################################################################################
**  Archivo         :   07 - 03 - Array().kt
**  Proyecto        :   Android con Kotlin
**  Herramienta(s)  :   VSCode
**                      Android Studio
**  Autores         :
**                      Jelp200
**  Descripcion     :
**                      En el siguiente programa utilizaremos la función "arrayOf()" para
**                      declarar un arreglo.
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
    //* CREAMOS NUESTRO ARREGLO PARA DATOS ENTEROS
    val numerosInt:Array<Int> = Array(5) {i -> i * 2}

    //* CREAMOS NUESTRO ARREGLO PARA DATOS FLOTANTES
    val numerosDouble:Array<Double> = Array(6) {i -> 5.0 * (i + 1)}

    //* CREAMOS NUESTRO ARREGLO PARA DATOS BOOLEANOS
    val numerosBool:Array<Boolean> = Array(4) {i -> i % 2 == 0}

    //* CREAMOS NUESTRO ARREGLO PARA DATOS TIPO CHAR
    val chars:Array<Char> = Array(3) {i -> ('A' + i).toChar()}

    //! IMPRIMIMOS SUS VALORES
    println(numerosInt.contentToString())
    println(numerosDouble.contentToString())
    println(numerosBool.contentToString())
    println(chars)

}

/* *******************************************************************************************
****************************************** N O T A S *****************************************
**********************************************************************************************
-   El primer arreglo nos permite crear una estructura de 5 datos enteros que van de dos en
    dos, entonces tendremos [0, 2, 4, 6, 8]

-   El segundo arreglo crea una estructura de 6 datos flotantes que van de 5 en 5, por lo tanto
    tenemos [5.0, 10.0, 15.0, 20.0, 25.0, 30.0]

-   El tercer arreglo crea una estructura de 4 datos booleanos que imprime 'true' en los datos
    que sean pares y 'false' en los datos impares, entonces: [true, false, true, false]

-   El cuarto arreglo nos permite crear una estructura de 3 datos la cual sume el indice a la
    letra 'A' la cual su valor en código ASCII en 64, por lo tanto este va avanzando y una vez
    que termine el recorrido convierte loe elementos a caracteres.
*/