# TIPOS DE DATOS EN C :croissant:
Ya hemos visto el como declarar variables y como declararlas de una manera correcta pero como hemos dicho estas variables nos permitiran guardar valores o
tipos de datos, para ello en C tenemos diferentes tipos de datos, dichos tipos de datos a grandes rasgos podemos clasificarlos como:

### Enteros.
Los tipos de datos enteros o "integer" son aquellos datos los cuales nos permiten manejar números sin punto decimal o flotantes, y estos se componen de:
```txt
|    TIPO DE DATO    | TAMAÑO [bits] |        RANGO        |
| int                |      16       |   -32767 ~ 32767    |
| unsigned int       |      16       |        0 ~ 68535    |
| signed int         |      16       |   -32767 ~ 32767    |
| short int          |      16       |   -32767 ~ 32767    |
| unsigned short int |      16       |        0 ~ 68535    |
| long int           |      32       | -2.1*10⁹ ~ 2.1*10⁹  |
| signed long int    |      32       |        0 ~ 4.29*10⁹ |
```
### Punto flotante.
Los tipos de datos de punto flotante o "float" son aquellos los cuales nos permiten trabajar con npumeros con punto decimal, estos de componen de:
```txt
|    TIPO DE DATO    | TAMAÑO [bits] |        RANGO         |
| float              |      32       | 6 dígitos de precis  |
| double             |      64       | 10 dígitos de precis |
| long double        |      64       | 10 dígitos de precis |
```
### Char.
Los tipos de dato caracter o "char" son aquellos los cuales nos permiten trabajar con caracteres o cadenas de caracteres, estos se componen de:
```txt
|    TIPO DE DATO    | TAMAÑO [bits] |    RANGO   |
| char               |      8        | -127 ~ 127 |
| unsigned char      |      8        |    0 ~ 255 |
| signed char        |      8        | -127 ~ 127 |
```

<b>NOTA.</b>Es necesario conocer los requerimientos de nuestros programas ya que si utilizamos algún dato de manera erronea podemos desbordar la memoria y
tener problemas con nuestro programa y hasta podemos dañar nuestra PC.