/*
** ##########################################################################################
**  Archivo         :   09 - 01 - implementacionEnums.kt
**  Proyecto        :   Android con Kotlin
**  Herramienta(s)  :   VSCode
**                      Android Studio
**  Autores         :
**                      Jelp200
**  Descripcion     :
**                      El siguiente programa nos muestra como declarar y trabajar con
**                      enumeraciones.
** ##########################################################################################
*/

/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++ P A C K A G E S ++++++++++++++++++++++++++++++++++++++ 
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
package com.android.kotlin

/* ------------------------------------------------------------------------------------------
---------------------------- V A R I A B L E S   G L O B A L E S ----------------------------
----------------------------------------------------------------------------------------- */
//* DEFINIMOS NUESTROS ENUMS
enum class Color(val rgb:Int){
        ROJO(0xFF0000),
        VERDE(0x00FF00),
        AZUL(0x0000FF)
}

/* ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||||||||||| F U N C I O N   P R I N C I P A L |||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| */
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