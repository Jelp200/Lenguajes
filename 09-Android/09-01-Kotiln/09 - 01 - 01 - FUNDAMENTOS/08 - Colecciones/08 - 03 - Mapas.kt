/*
** ##########################################################################################
**  Archivo         :   08 - 03 - Mapas.kt
**  Proyecto        :   Android con Kotlin
**  Herramienta(s)  :   VSCode
**                      Android Studio
**  Autores         :
**                      Jelp200
**  Descripcion     :
**                      El siguiente programa nos muestra como declarar y trabajar con mapas.
** ##########################################################################################
*/

/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++ P A C K A G E S ++++++++++++++++++++++++++++++++++++++ 
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
package com.android.kotlin

/* ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||||||||||| F U N C I O N   P R I N C I P A L |||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| */
fun main(){
    //* CREAMOS NUESTROS MAPAS MUTABLES (PUEDEN CAMBIAR VALOR)
    val mapaMutable1 = mutableMapOf(Pair(1, "Elemento uno"), Pair(2, "Elemento dos"), Pair(3, "Elemento tres"))
    val mapaMutable2 = mutableMapOf("clave1" to "valor1", "clave2" to "valor2", "clave3" to "valor3")

    //* CREAMOS NUESTROS MAPAS INMUTABLES (NO PUEDEN CAMBIAR VALOR)
    val mapaInmutable1 = mapOf(Pair('I', '1'), Pair('P', '2'), Pair('N', '3'))
    val mapaInmutable2 = mapOf(1 to true, 2 to "false", true to '3')

    //! IMRPIMIMOS LOS VALORES
    println(mapaMutable1); println(mapaMutable2)
    println(mapaInmutable1); println(mapaInmutable2)
    
    //! IMPRIMIMOS EL VALOR ASOCIADO A UNA CLAVE
    println(mapaMutable1[1]); println(mapaMutable2["clave3"])
    println(mapaInmutable1['I']); println(mapaInmutable2[true])

    //! CAMBIAMOS EL VALOR PARA UN MAPA MUTABLE
    mapaMutable1[2] = "Nuevo elemento dos"
    mapaMutable2["clave2"] = "nuevoValor2"

    //! IMPRIMIMOS EL NUEVO MAPA ACTUALIZADO
    println(mapaMutable1); println(mapaMutable2)
}