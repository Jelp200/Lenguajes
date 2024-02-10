/*
** ##########################################################################################
**  Archivo         :   07 - 02 - arregloDe.kt
**  Proyecto        :   Android con Kotlin
**  Herramienta(s)  :   VS Code
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
    //* CREAMOS UN ARREGLO DE TIPO Array<String>
    val arreglo1 = arrayOf("IPN", "UNAM", "UAM")
    println(arreglo1.contentToString())

    //* MODIFICAMOS SUS DATOS
    arreglo1[0] = "MIT"
    arreglo1[1] = "HARVARD"
    arreglo1[2] = "STANFORD"
    println(arreglo1.contentToString())

    //! VERIFICAMOS QUE EL TIPO SI ES UN ARREGLO
    val nombreClase = arreglo1::class.simpleName
    println("El tipo de dato del arreglo es: ${nombreClase}")
}

/* *******************************************************************************************
****************************************** N O T A S *****************************************
**********************************************************************************************
-   Para poder saber que tipo de dato tenemos, utilizamos la siguiente propiedad:
        nombreVariable::class.simpleName
*/