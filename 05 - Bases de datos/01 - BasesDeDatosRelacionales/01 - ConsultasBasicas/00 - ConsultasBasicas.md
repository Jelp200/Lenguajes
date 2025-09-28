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

Cada una de estas tablas cuenta con información relevante con la cual se estará trabajando. En caso que desemos obtener todas los campos de una base de datos es necesario utilizar la sentencia `SELECT`, seguido de un `*` el cual permitira seleccionar todas las columnas e inmediatamente incorporar un `FROM` y el nombre de la tabla.

```sql
SELECT * FROM actores
```

Este srcipt permite seleccionar todas las columnas de la tabla `netflixdb`, pero si solo deseamos obtener los registros contenidos en un solo campo, solocambiamos el `*` por el campo al cual deseamos obtener sus registros, y a su vez, si deseamos obtener los registros de uno o más campos una `,` es más que suficiente

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

