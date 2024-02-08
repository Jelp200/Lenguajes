/*
** ##########################################################################################
**  Archivo         :   EntradasSalidas.kt
**  Proyecto        :   Android con Kotlin
**  Herramienta(s)  :   VSCode
**                      Android Studio
**  Autores         :
**                      Jelp200
**  Descripcion     :
**                      El siguiente programa muestra como realizar entradas y salidas de
**                      datos en Kotlin desde la consola.
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
    println("Ingresa tu nombre: ")
    val nombre = readLine();                                 // Se lee la entrada del usuario
    println("Tu nombre es: $nombre")                         // Se imprime el nombre

    //* FORMATEO DE SALIDA
    val superior:String = "IPN"
    val escuela:String = "ESIME"
    val edad:Int = 23
    val msj:String = "Mi superior es el %s y estudio en la %s, mi edad es %d años"

    println(msj.format(superior, escuela, edad))                      // Se imprime el mensaje
}

/* *******************************************************************************************
****************************************** N O T A S *****************************************
**********************************************************************************************

- La función readLine() permite leer una línea de texto desde la consola y devuelve null si se
  alcanza el final de la secuencia  de  entrada o si se produce un  error de lectura.

- La función println() permite imprimir un mensaje en la consola.

- La función format() permite formatear una cadena de texto con valores específicos.
*/