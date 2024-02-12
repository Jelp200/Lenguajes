/*
** ##########################################################################################
**  Archivo         :   08 - 01 - Listas.kt
**  Proyecto        :   Android con Kotlin
**  Herramienta(s)  :   VSCode
**                      Android Studio
**  Autores         :
**                      Jelp200
**  Descripcion     :
**                      El siguiente programa nos muestra como declarar y trabajar con
**                      listas.
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
    //* CREAMOS NUESTRA LISTA MUTABLE (PUEDEN CAMBIAR VALOR)
    val listaMutable = mutableListOf("I", "P", "N", 2024)

    //* CREAMOS NUESTRA LISTA INMUTABLE (NO PUEDEN CAMBIAR VALOR)
    val listaInmutable = listOf('E', 'S', 'I', 'M', 'E')

    //! IMRPIMIMOS LOS VALORES ORIGINALES
    println(listaMutable)
    println(listaInmutable)

    //! CAMBIAMOS EL VALOR DE NUESTROS ELEMENTOS CON EL OPERADOR DE ACCESO POR ÍNDICE
    listaMutable[0] = "i"; listaMutable[1] = "p"; listaMutable[2] = "n"

    //! IMPRIMIMOS LOS VALORES ACTUALES
    println(listaMutable)
}

/* *******************************************************************************************
****************************************** N O T A S *****************************************
**********************************************************************************************
-   Podemos observar que las listas pueden tener miembros de los datos primitivos, no es
    necesario tener una lista de solo miembros INT, DOUBLE, etc.

-   Si intentamos cambiar o modificar el valor de nuestra lista inmutable tendremos un error.
*/