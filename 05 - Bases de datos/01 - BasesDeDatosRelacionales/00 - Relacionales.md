# BASES DE DATOS RELACIONALES :left_right_arrow:

Las bases de datos relacionales son aquellas bases de datos que se organizan en tablas y las cuales tienen una relación entre sí, es decir, , si se tienen dos bases de datos tales como clientes y pedidos, la tabla de pedidos esta directamente relacionada con la tabla de clientes, ya que cada pedido pertenece a un cliente, y cada cliente puede tener múltiples pedidos. Estas bases de datos utilizan SQL para realizar las consultas.

## Caracteristicas de una base de datos relacional

Las bases de datos relacionales estan compuestas por tres elementos importantes:

- ***Tablas:*** Estas tablas contienen, como su nombre lo dice, datos los cuales son específicos.
- ***Filas (registros) y columnas (campos):*** Las filas o registros contienen información o datos los cuales su relación se establece en cada columna o campo, estos campos representan un atributo o propiedad de los datos.
- ***Claves primarias o primary key (PK):*** La clave primaria es una de las columnas o campos de la tabla la cual permite identificar de manera única cada fila o registro en una tabla. Por ejemplo, si se tienen dos registros con los mismos atributos, se utiliza una PK para poder identificar cada registro y que no haya problemas de traslape o confusión.

> *Tabla 1. Ejemplo de base de datos y sus componentes principales.*

| ***PK*** | ***CAMPO 1***  | ***CAMPO 2***  | **...** | ***CAMPO m***    |
|----------|----------------|----------------|---------|----------------|
| **1**    | Registro 1 : 1 | Registro 1 : 2 | ...     | Registro 1 : m |
| **2**    | Registro 2 : 1 | Registro 2 : 2 | ...     | Registro 2 : m |
| **...**  | ...            | ...            | ...     | ...            |
| **n**    | Registro n : n | Registro 3 : 2 | ...     | Registro n : m |

## Structured Query Language (SQL) :dolphin:

SQL o lenguaje estructurado de consultas, es es un lenguaje de programación el cual es utilizado para poder gestionar y manipular datos en bases de datos relacionales.

## Sistemas de gestión de bases de datos (DBMS)

Los DBMS son la interfaz o intermediario entre las bases de datos y los usuarios. El DBMS contiene de todas las herramientas SQL las cuales servirán para poder gestionar y administrar las bases de datos de una manera más sencilla y amigable. Dentro del mundo de los DBMS hay una cantidad innumerable de gestores, pero los más comunes son:

- MySQL
- PostgreSQL
- Oracle Database.
- SQL Server.

En este curso **se estará utilizando MySQL como el DBMS principal y MySQL Workbench como herramienta**, pero ***¿Qué es MySQL y MySQL Workbench? MySQL es el motor de gestión de bases de datos de código abierto más utilizado*** ya que cuenta con una gran eficiencia, escalabilidad y efectividad, de igual forma MySQL es compatible con todos los sistemas operativos principales tales como Windows, Linux y MacOS. ***Mientras que MySQL Workbench es una herramienta visual y un entorno de desarrollo integrado el cual permite que estas bases de datos sean más fáciles de visualizar para el desarrollador***.

A continuación, los siguientes enlaces presentan los puntos básicos, medios y avanzados para empezar a trabajar con las bases de datos relaciones.

- [Consultas básicas en SQL](./01%20-%20ConsultasBasicas/00%20-%20ConsultasBasicas.md)
- []()
- []()
- []()
- []()
- []()
- []()
- []()

[Regresar al menú de bases de datos](../Inicio.md)
[Regresar al menú de lenguajes](../../README.md)
