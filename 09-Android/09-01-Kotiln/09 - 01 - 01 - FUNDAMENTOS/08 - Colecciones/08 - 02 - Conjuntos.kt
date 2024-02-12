/*
** ##########################################################################################
**  Archivo         :   08 - 02 - Conjuntos.kt
**  Proyecto        :   Android con Kotlin
**  Herramienta(s)  :   VSCode
**                      Android Studio
**  Autores         :
**                      Jelp200
**  Descripcion     :
**                      El siguiente programa nos muestra como declarar y trabajar con
**                      conjuntos.
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
    //* CREAMOS NUESTRO CONJUNTO MUTABLE (PUEDEN CAMBIAR VALOR)
    val setMutable = mutableSetOf(false, true, false, 'I', 'C', 'E')

    //* CREAMOS NUESTRO CONJUNTO INMUTABLE (NO PUEDEN CAMBIAR VALOR)
    val setInmutable = setOf(1, 2, 3, 4, 5)

    //? VERIFICAMOS SI EL CONJUNTO CONTIENE EL ELEMENTO
    println(setMutable.contains(false))
    println(setInmutable.contains(3))

    //! IMRPIMIMOS LOS VALORES
    println(setMutable)
    println(setInmutable)
    
    //! ELIMINAMOS LOS ELEMENTOS QUE DESEAMOS
    setMutable.remove(false)
    
    //! AÑADIMOS LOS NUEVOS ELEMENTOS QUE DESEAMOS
    setMutable.add(2024)
    
    //! VISUALIZAMOS LOS NUEVOS VALORES
    println(setMutable)
}

/* *******************************************************************************************
****************************************** N O T A S *****************************************
**********************************************************************************************
-   ".contains()" nos permite verificar si realmente el  elemento que buscamos esta contenido
    en el conjunto.

-   Si intentamos cambiar o modificar el valor de nuestro conjunto inmutable tendremos un
    error, pero esto no quiere decir que no permita filtar y crear una nueva lista a traves de
    ese filtro, para ello podemos tener:

        val listaInmutable = listOf("a", "b", "c", "b")
        val nuevaLista = listaInmutable.filterNot { it == "b" }
        println(nuevaLista) // Imprimirá: [a, c]

    "filterNot()"" crea una nueva lista que excluye todas las ocurrencias del elemento "b". La
    nueva lista "nuevaLista" contiene los elementos restantes después de la eliminación.
*/