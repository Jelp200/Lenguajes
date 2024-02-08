# VARIABLES EN KOTLIN :dependabot:
Al igual que en cualquier otro lenguaje de programación, las variables en Kotlin son de suma importancia para poder trabajar, esto debido a que nos van a 
permitir guardar datos o valores en ellas. Para poder declarar una variable en Kotlin, es necesario seguir las mismas reglas de sintaxis que utilizamos 
en cualquier otro lenguaje de programación, esto es no incluir simbolos tales como "!", "?", "#", etc.

### Tipos de variables.
En Kotlin tenemos dos tipos de variables con las cuales trabajamos, estas son:
- Variables mutables: Este tipo de variables pueden cambiar su valor después de su inicialización y se declaran de la siguiente manera:
```kt
var nombreVariableMu: tipoDato
```

- Variables inmutables: No nos permiten cambiar su valor una vez inicializadas.
```kt
val nombreVariableInmu: tipoDato
```

Algo importante que se debe conocer es que en Kotlin podemos indicar que tipo de dato es o no, esto quiere decir que en Kotlin el compilador infiere con
que tipos de datos estamos trabajando, a esto podemos denominarlo como:
- Variables explicitas.
```kt
var nombreVariable: tipoDato = [Dato]
```

- Variables implicitas.
```kt
var nombreVariable = [Dato]
```