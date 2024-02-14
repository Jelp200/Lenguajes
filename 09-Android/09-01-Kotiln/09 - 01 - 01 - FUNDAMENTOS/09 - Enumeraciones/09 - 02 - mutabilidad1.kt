/*
** ##########################################################################################
**  Archivo         :   09 - 02 - mutabilidad1.kt
**  Proyecto        :   Android con Kotlin
**  Herramienta(s)  :   VSCode
**                      Android Studio
**  Autores         :
**                      Jelp200
**  Descripcion     :
**                      El siguiente programa nos muestra como declarar y trabajar con
**                      enumeraciones mutables.
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
enum class universidades(val estado:String = ""){
    IPN("CDMX"),
    UNAM("CDMX"),
    ITESM("MTY"),
    UDG("GDL"),
    UV("VER"),
    BUAP("PUE");

    override fun toString() = "Universidad: $name / [Fundación: $estado]"
}

/* ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||||||||||| F U N C I O N   P R I N C I P A L |||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| */
fun main(){
    //! ACCEDEMOS A LOS MIEMBROS Y LOS VISUALIZAMOS
    println(universidades.IPN)
    println(universidades.UNAM)
    println(universidades.ITESM)
    println(universidades.UDG)
    println(universidades.UV)
    println(universidades.BUAP)
}