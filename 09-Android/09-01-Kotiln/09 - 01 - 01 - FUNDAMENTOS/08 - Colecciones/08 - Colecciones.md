# COLECCIONES EN KOTLIN :black_nib:
### INTRODUCCIÓN
Al igual que en otros lenguajes de programación, Kotlin distingue entre colecciones mutables e inmutables (listas, sets, mapas, etc.). El
control preciso sobre cuándo exactamente se pueden editar las colecciones es útil para eliminar errores y diseñar buenas API.

Tenemos tres tipos de colecciones (recordemos que estas colecciones son de igual manera estructuras de datos básicas):
### LISTAS
Las listas son colecciones de datos ordenadas las cuales permiten duplicados. Podemos acceder a los elementos de nuestras listas por su
índice. Las listas son mutables (<b><i>mutableListOf</i></b>) o inmutables (<b><i>listOf</i></b>). Sus declaraciones son las siguientes:
```kt
    val listaMutable = mutableListOf("a", "b", "c")
    val listaInmutable = listOf(1, 2, 3)
```
Para poder acceder a los elementos de la lista utilizamos el operador de acceso por índice "[]".
```kt
    val listaMutable = mutableListOf("a", "b", "c")
    
    //! IMPRIMIMOS EL ELEMENTO
    println(listaMutable[0])

    //! CAMBIAMOS EL VALOR DE NUESTROS ELEMENTOS Y VISUALIZAMOS SU ACTUALIZACIÓN
    listaMutable[0] = "A"
    println(listaMutable)
```

### SET (CONJUNTOS)
Un conjunto es una colección de datos que no permite duplicados y no mantiene un orden especifico de elementos.
```kt
    //* CONJUNTOS MUTABLES
    val setMutable = mutableSetOf("a", "b", "c")
    
    //* CONJUNTOS INMUTABLES
    val setInmutable = setOf(1, 2, 3)
```
Debido a que como hemos dicho los conjuntos no mantienen un orden estos no pueden ser accedidos por un índice, para poder cambiar los
valores, podemos agregar o eliminar elementos con las siguientes funciones:
```kt
    //* AÑADIR ELEMENTO
    nombreConjunto.add(elemento)

    //* ELIMINAR ELEMENTO
    nombreConjunto.remove(elemento)
```

### MAPAS
Los mapas son colecciones de datos las cuales son pares de clave-valor, donde cada clave está asociada con un valor único.
```kt
    //* MAPAS MUTABLES 1
    val mapaMutable1 = mutableMapOf(Pair(1, "Elemento uno"), Pair(2, "Elemento dos"), Pair(3, "Elemento tres"))
    
    //* MAPA MUTABLE 2
    val mapaMutable2 = mutableMapOf("clave1" to "valor1", "clave2" to "valor2", "clave3" to "valor3")

    //* MAPAS INMUTABLES 1 
    val mapaInmutable1 = mapOf(Pair('I', '1'), Pair('P', '2'), Pair('N', '3'))

    //* MAPA INMUTABLE 2
    val mapaInmutable2 = mapOf(1 to true, 2 to "false", true to '3')
```
