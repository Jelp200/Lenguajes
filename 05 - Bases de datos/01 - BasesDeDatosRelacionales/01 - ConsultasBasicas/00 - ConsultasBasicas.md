# CONSULTAS BÁSICAS :left_right_arrow:

## SELECT

La sentencia `SELECT` es una, sino, la sentencia más importante dentro del lenguaje de programación SQL, ya que ***permite seleccionar columnas o campos de una base de datos***. Es importante recalcar que ***siempre se debe utilizar `SELECT` para seleccionar campos de una base de datos***.

Digamos que se tiene una base de datos denominada `netflixdb`, esta base de datos cuenta con las siguientes tablas:

> *Tabla 1. Tablas que componen la base de datos `netflixdb`.*

|   | *Tables_in_netflixdb* |
|---|-----------------------|
| > | actores               |
|   | actuaciones           |
|   | episodios             |
|   | series                |

Cada una de estas tablas cuenta con información relevante con la cual se estará trabajando. En caso que desemos obtener todas los campos de una base de datos es necesario utilizar la sentencia `SELECT`, seguido de un `*` el cual permitira seleccionar todos los campos e inmediatamente incorporar un `FROM` y el nombre de la tabla.

```sql
SELECT * FROM actores
```

Este srcipt permite seleccionar todos los campos de la tabla `netflixdb`, pero si solo deseamos obtener los registros contenidos en un solo campo, solocambiamos el `*` por el campo al cual deseamos obtener sus registros, y a su vez, si deseamos obtener los registros de uno o más campos una `,` es más que suficiente

```sql
--- Seleccionar los registros de un solo campo
SELECT actor_id FROM actores

--- Seleccionar los registros de uno o más campos
SELECT actor_id, nombre FROM actores
```

## DISTINCT

La consulta `DISTINCT` ***permite seleccionar valores únicos de una columna o campo***. Por ejemplo, digamos que deseamos obtener el `genero` existente en las series que la base de datos `netflixdb` contiene, entonces:

```sql
SELECT generos FROM series
```

Siendo el resultado de la consulta el siguiente:

|   |     *genero*    |
|---|-----------------|
| > | Drama           |
|   | Ciencia ficción |
|   | Drama histórico |
|   | Ciencia ficción |
|   | Fantasía        |
|   | Ciencia ficción |
|   | Comedia         |
|   | Animación       |
|   | Drama histórico |
|   | Drama           |
|   | Biografía       |
|   | Fantasía        |
|   | Comedia         |

Es posible observar que hay generos los cuales se repite, para ello es que `DISTINCT` nos sirve, `DISTINCT` permite obtener los valores únicos presentes en una tabla, siendo así que al ejecutar el siguiente script se obtendra:

```sql
SELECT DISTINCT generos FROM series
```

|   |     *genero*    |
|---|-----------------|
| > | Drama           |
|   | Ciencia ficción |
|   | Drama histórico |
|   | Fantasía        |
|   | Comedia         |
|   | Animación       |
|   | Biografía       |

## ORDER BY

`ORDER BY` en una cláusula la cual permite ordenar datos en una consulta de SQL.

Digamos que se desea visualizar los registros almacenados en los campos `titulo` y `duracion` de la tabla `episodios` contenida en `netflixdb`, para ello se ejecuta el siguiente script:

```sql
SELECT DISTINCT titulo, duracion FROM episodios
```

Con ese script se obtendrá la consula deseada sin un orden en especifico (tal y como se ingresaron a la base de datos), pero si se desea obtener un orden descendente (mayor a menor) o ascendente (menor a mayor) se utiliza la cláusula `ORDER BY`, seguido del campo o columna la cual va a ser la referencia de orden cual se desea, y por último el tipo de orden el cual se desea `DESC` O `ASC`.

```sql
--- Ordenamiento de forma descendente por duración de episodio
SELECT DISTINCT titulo, duracion FROM episodios ORDER BY duracion DESC

--- Ordenamiento de forma ascendente por duración de episodio
SELECT DISTINCT titulo, duracion FROM episodios ORDER BY duracion
SELECT DISTINCT titulo, duracion FROM episodios ORDER BY duracion ASC
```

> *Nota. `ORDER BY` permite ordenar tanto cadenas de caracteres, caracteres y números.*

## LIMIT

`LIMIT` en una cláusula la cual permite limitar el número de resultados en una consulta y así no sobrecargar la consulta. Para poder utilizar `LIMIT` solo es necesario indicar a cuantos resultados deseamos limitar dicha consulta.

```sql
--- Limitar a 5 todos los registros de todos los campos de la tabla episodios.
SELECT * FROM episodios LIMIT 5

--- Limitar a 5 todos los registros de los campos "titulo" y "duracion" de forma descendente por duración.
SELECT titulos, duracion FROM episodios ORDER BY duracion LIMIT 5
```

## WHERE

Al igual que `SELECT`, `WHERE` es una de las cláusulas más importantes dentro de SQL, ya que permite ***filtrar y recuperar filas específicas de una tabla que cumplen una condición o un conjunto de condiciones***. Para utilizar `WHERE` es necesario tener en cuenta que condición se desea cumplir para que se arrojen los datos correctos. Por ejemplo, si se desea filtar en la tabla `series` las series las cuales su `año_lanzamiento` sea desupés del 2010, se hace lo siguiente:

```sql
SELECT * FROM series WHERE año_lanzamiento > '2010'
```

### Operadores de comparación

Los operadores de comparación en SQL son, al igual que en otros lenguajes de programación, comparadores los cuales permiten comparar bloques de código o sentencias las cuales si son reales o no, se ejecuta una acción deseada.

En SQL los operadores de comparación de utilizan en la cláusula `WHERE` para filtrar datos, comparando dos valores y evaluando si la expresión es verdadera, falsa o desconocida.

| ***OPERADOR*** | ***SIGNIFICADO***         |
|----------------|---------------------------|
|     **`=`**    | Igual que                 |
|  **`<> o !=`** | No igual a o diferente de |
|     **`>`**    | Mayor que                 |
|     **`<`**    | Menor que                 |
|    **`>=`**    | Mayor igual que           |
|    **`<=`**    | Menor o igual que         |

### Operadores lógicos

Los operadores lógicos en SQL se usan en la cláusula `WHERE` para combinar múltiples condiciones, negar una condición o controlar el flujo de una consulta. Devuelven un valor booleano (`TRUE`, `FLASE` o `UNKNOW`).

- ***`AND`***: Devuelve `TRUE` si todas las condiciones que lo rodean son verdaderas. Se usa cuando se deben cumplir varias reglas simultáneamente.

```sql
--- Seleccionar las series donde el año de lanzamiento sea mayor a 2015 y el genero sea drama
SELECT año_lanzamiento, genero FROM series WHERE año_lanzamiento > '2015' AND genero = 'Comedia'
```

- ***`OR`***: Devuelve `TRUE` si al menos una de las condiciones que lo rodean es verdadera. Sirve para incluir más coincidencias posibles.

```sql
--- Seleccionar las series donde el año de lanzamiento sea mayor a 2020 o el genero sea fantasía
SELECT año_lanzamiento, genero FROM series WHERE año_lanzamiento > '2020' AND genero = 'Fantasía'
```

- ***`NOT`***: Revierte el resultado de una condición, mostrando los registros que no cumplen la condición especificada. Es útil para excluir ciertos resultados.

```sql
--- Seleccionar las series donde el año de lanzamiento no sea mayor a 2019
SELECT año_lanzamiento, genero FROM series WHERE NOT año_lanzamiento = '2019'
```

### IN & NOT IN

Los operadores `IN` y `NOT IN` en SQL se utilizan para filtrar datos en la cláusula `WHERE` en función de si un valor se encuentra (o no se encuentra) en una lista de valores o en una subconsulta. Son una forma más legible y concisa de escribir múltiples condiciones `OR` o `AND` respectivamente.

- ***`IN`***: Selecciona registros donde el valor de un campo coincide con cualquiera de los valores especificados en una lista.

```sql
--- Seleccionar las series donde el genero sea Comedia
SELECT * FROM series WHERE genero IN ('Comedia')
```

- ***`NOT IN`***: Selecciona registros donde el valor de una columna no coincide con ninguno de los valores de la lista especificada.

```sql
--- Seleccionar las series donde el genero no sea Comedia y Fantasía
SELECT * FROM series WHERE genero NOT IN ('Comedia', 'Fantasía')
```

### LIKE

`LIKE` es un patrón de búsqueda que se combina con caracteres comodín. Los más comunes son:

| ***COMODÍN*** | ***DESCRIPÇIÓN***                         |
|---------------|-------------------------------------------|
|    **`%`**    | Representa cero, uno o varios caracteres. |
|    **`_`**    | Representa exactamente un solo carácter.  |

```sql
--- Buscar el titulo de las series que comienzan con una letra específica
SELECT * FROM series WHERE titulo LIKE 'T%';

--- Buscar el titulo de las series que terminan con una letra específica
SELECT * FROM series WHERE titulo LIKE '%d';

--- Buscar el titulo de las series que contienen una secuencia de caracteres
SELECT * FROM series WHERE titulo LIKE '%The%'

--- Buscar el titulo de las series con una estructura específica
SELECT * FROM series WHERE titulo LIKE 'A____e'

--- Combinar comodines
SELECT * FROM series WHERE titulo LIKE 'B%o%'
```

Es posible utilizar el operador `NOT` para encontrar los registros que no coinciden con un patrón determinado.

```sql
--- Buscar el titulo de las series que no comienzan con una letra específica
SELECT * FROM series WHERE titulo NOT LIKE 'T%';
```
