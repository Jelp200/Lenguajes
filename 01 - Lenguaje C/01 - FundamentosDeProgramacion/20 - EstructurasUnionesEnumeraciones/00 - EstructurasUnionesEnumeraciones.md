# ESTRUCTURAS, UNIONES Y ENUMERACIONES EN C :floppy_disk:

## Introducción

Las estructuras, uniones y enumeraciones son denominados constructores de datos que permiten organizar y manipular datos de manera más estructurada y cada uno tiene un propósito en específico.

### <a href="20 - 01 - Estructuras.c">Estructuras</a>

**_Una estructura en si es un tipo de dato el cual es definido por el programador_**, dicha estructura **_contiene una colección de una o más variables las cuales pueden ser de diferentes tipos de datos, a estos datos dentro de la estructura se le denominan miembros_** de la estructura. Una estructura se declara se la siguiente manera:

```C
struct nombreDeLaEstructura{
    tipoDatoMiembro miembro_1, …, miembro_n;
    …
    tipoDatoMiembro_n miembro_1, …, miembro_n;
};
```

**_Una vez definida la estructura es posible declarar variables cuyo tipo de dato sea la estructura_** que se haya definido. Cada una de **_estas variables deben ser declaradas ya sea listándolas inmediatamente después de la llave de cierre de la declaración de la estructura, o listando el tipo de estructura creado seguido de las variables_**, contendrá, en realidad, todos los datos miembros contenidos en la estructura, esto puede visualizarse de la siguiente forma:

```C
//* LISTANDO INMEDIATAMENTE DESPUÉS DE LA LLAVE DE CIERRE
struct nombreDeLaEstructura{
    tipoDatoMiembro miembro_1, ..., miembro_n;
    ...
    tipoDatoMiembro_n miembro_1, ..., miembro_n;
}varStruct1, ..., varStructN;

//* LISTADO DE VARIABLES
struct nombreDeLaEstructura{
    tipoDatoMiembro miembro_1, ..., miembro_n;
    ...
    tipoDatoMiembro_n miembro_1, ..., miembro_n;
};

struct nombreDeLaEstructura varStruct1, ..., varStruct_n;
```

Algo importante a destacar es que **_las estructuras se pueden copiar y asignar, pasar a funciones y ser regresadas por funciones_** (tal cual como cualquier tipo de dato). De igual manera **_una estructura puede inicializarse en su misma declaración especificando los valores iniciales, entre llaves, después de la definición de variables estructuras_**.

```C
struct nombreDeLaEstructura{
    tipoDatoMiembro miembro_1, ..., miembro_n;
    ...
    tipoDatoMiembro_n miembro_1, ..., miembro_n;
}varStruct = {valorMiembro_1, ..., valorMiembro_n};
```

Una vez que se ha declarado la estructura es posible acceder a los miembros de dicha estructura mediante el operador punto `.`, o bien, el operador puntero `->`.

- Operador `.`</li>. Proporciona un acceso directo a los miembros de la estructura, su sintaxis es:

```C
varStruct_n.miembro_n = Dato;
```

- Operador `->`</Operador>. Permite acceder a los datos de la estructura a partir de un puntero, su sintaxis es:

```C
varStruct_n -> miembro_n = Dato;
```

#### <a href="20 - 02 - estructurasAnidadas.c">Estructuras anidadas</a>

Al igual que las estructuras condicionales o de control, las estructuras pueden contener dentro de su declaración otras estructuras, a estas se le denominan estructuras anidadas, su sintaxis es la siguiente:

```C
struct nombreDeLaEstructura_1{
    tipoDatoMiembro miembro_n;
};
struct nombreDeLaEstructura_2{
    tipoDatoMiembro miembro_n;
    …
    struct nombreDeLaEstructua_1 varStruct_1;
} varStruct_n;
```

#### <a href="20 - 03 - estructurasFunciones.c">Estructuras y funciones</a>

Como se ha dicho con anterioridad, las únicas operaciones que se pueden hacer con las estructuras son las de copiar y asignar como unidad, tomar su dirección de memoria con `&`, y tener acceso a sus miembros.
El poder copiar y asignar estas estructuras incluye pasarlas como argumentos a funciones y también regresar valores de funciones. Esto va de la mano con el paso de valor por parámetro o por referencia debido a que solo pueden ser pasadas de esa manera, existiendo así las mismas diferencias que con los tipos de datos simples. Entonces, si se desea **_pasar una estructura completa como parámetro_** se tiene el siguiente ejemplo:

```C
struct datosPersonales{
    long int numero;
    char letra;
    char nombre[50];
    char apellidos[100];
};
struct datosPersonales INE;
```

Si se desea escribir los miembros de la variable INE en una función, para poder llamar a la función se realiza lo siguiente:

```C
escribirINE(INE);
// *************************************************************
escribirINE(&INE);
```

Con lo anterior se puede observar que la función la cual este llamando a la estructura debe especificar en su declaración si el argumento se pasa por valor o por referencia.
Para **_pasar una estructura por valor en una función_** se tiene lo siguiente:

```C
void escribirINE(struct datosPersonales INE);
```

Mientras que para **_pasar una estructura por referencia en una función_** se tiene lo siguiente:

```C
void escribirINE(struct datosPersonales *INE);
```

Una vez que se ha decidido si se pasara la estructura por valor o por referencia a la función, es pertinente que se desee acceder a sus miembros.
Dígase que se desea acceder al miembro `nombre` de la estructura `datosPersonales`, dicho acceso será por valor, entonces, se tiene lo siguiente:

```C
printf("%s", INE.nombre);
```

Pero si se desea acceder por referencia se tiene lo siguiente:

```C
printf("%s", INE->nombre);
```

Muy bien, ya se ha visto como pasar toda una estructura como parámetros de una función, pero de igual manera **_se pueden pasar los miembros de una estructura como parámetros_**. Dígase que se desea acceder al miembro número por valor, entonces, para poder llamar a la función dentro del programa principal se tiene lo siguiente:

```C
escribirINE(INE.numero);
```

Al momento de declarar la función, el tipo de dato del parámetro debe ser el mismo que se ha declarado en la estructura.

```C
void escribirINE(long int numero);
```

Ahora bien, si se desea pasar el miembro por referencia al momento de llamar la función en el programa principal se tendrá:

```C
void escribirINE(&INE.numero);
```

Y en su declaración:

```C
void escribirINE(*numero);
```

Y se debe recordar que cuando se desea cambiar el valor de una variable la cual pasa por referencia siempre se utiliza el `*` para realizar el cambio, por ejemplo:

```C
void escribirINE(*numero){
    *numero = 2020301790;
}
```

### <a href="20 - 04 - Uniones.c">Uniones</a>

Las uniones son muy similares a las estructuras, la única diferencia es la semántica ya que al momento de declarar una unión se utiliza la palabra reservada `union` en vez de `struct`.

```C
union nombreDeLaUnion{
    tipoDatoMiembro miembro_1, …, miembro_n;
    …
    tipoDatoMiembro_n miembro_1, …, miembro_n;
} varUnion_1, …, varUnion_n;
// ************************************************************
union nombreDeLaEstructura{
    tipoDatoMiembro miembro_1, …, miembro_n;
    …
    tipoDatoMiembro_n miembro_1, …, miembro_n;
};
union nombreDeLaUnion varUnion_1, …, varUnion_n;
```

**_La diferencia radica tanto en la semántica como a diferencia de nivel de memoria_**, ya que, mientras **_una estructura permite almacenar variables una detrás de la otra, las uniones almacenan de igual manera los miembros en un paquete, con la diferencia que en lugar de colocar los miembros uno detrás de otro, en las uniones todos los miembros se traslapan entre sí en la misma posición de memoria_** (esto para ahorrar espacio en la memoria). **_El tamaño el cual ocupará la unión será de la variable más grande_**, por ejemplo, si se retoma el ejemplo anterior se tienen cuatro variables:

- numero (32b).
- letra (8b).
- nombre (50B).
- apellido (100B).

Por lo tanto, la unión tomara el espacio de memoria de la variable apellido (100B), mientras que en una estructura el espacio de memoria reservado sería de 155B (la suma de todos los espacios de memoria de las variables).
Un punto en contra con el cual cuentan **_las uniones_** es que estás **_solo pueden ser utilizadas para poder acceder a los miembros los cuales en ese momento tengan algún valor_**, esto debido a que, si se asignan nuevos valores después, los datos se sobrescribirán y el código no funcionara de manera óptima.

### <a href="20 - 05 - Enumeraciones.c">Enumeraciones.</a>

Las enumeraciones o "enum" al igual que las estructuras y uniones, son tipos de datos creados por el usuario, con la diferencia que los datos miembros de las enumeraciones deber ser constantes de tipo entero, su sintaxis es la siguiente:

```C
enum nombreDeLaEnumeracion{
    constante_1 = valor_1,
    …
    constante_n = valor_n,
};
nombreDeLaEnumeracion varEnum_n;
varEnum_n = constante_n;
varEnum_n = valor_n;
```

Regresar al menú de fundamentos <a href="../../01 - FundamentosDeProgramacion/00 - Fundamentos.md">Click aquí</a>.
