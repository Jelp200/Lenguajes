# BASES DE DATOS :information_source:

![Header](../imgs/02%20-%20Bases%20de%20datos/headerDB.png)

```sql
CREATE DATABASE IF NOT EXIST BasesDeDatos;
USE BasesDeDatos;

CREATE TABLE IF NOT EXIST BaseDato (
    BaseID INT AUTO_INCREMENT PRIMARY KEY,
    Nombre VARCHAR(15) NOT NULL,
    Descripcion TEXT
);
```

Sea bienvenido a la carpeta de **_bases de datos_**, en esta capeta se visualizará los temas aprendidos, comprendidos y estudiados los cuales hacen parte del tema de bases de datos estructuradas y no estructuradas, está carpeta se divide en:

- [Ejercicios](./)
- [Bases de datos relacionales (SQL)](./01%20-%20BasesDeDatosRelacionales/00%20-%20Relacionales.md)
- [Bases de datos no relacionales (NoSQL)](./)

Regresar al menú de lenguajes [Click aquí](../README.md).