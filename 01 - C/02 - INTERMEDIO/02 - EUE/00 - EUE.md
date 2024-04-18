# ESTRUCTURAS, UNIONES Y ENUMERACIONES EN C :floppy_disk:
### INTRODUCCIÓN.
Las estructuras, uniones y enumeraciones son denominados como constructores de datos que nos permiten organizar y manipular datos de manera más estructurada y cada uno tiene un propósito en especifico.

### <a href="01 - Estructuras.c">ESTRUCTURAS.</a>
Una estructura es un tipo de dato el cual es definido por nosotros mismos, esta estructura puede verse como una caja la cual contiene una colección de una o más variables las cuales pueden ser de diferentes tipos de datos, estos datos dentro de la estructura son denominados como miembros de la estructura.

Una estructura se declara de la siguiente manera:
```C
struct nombreDeLaEstructura{
    tipoDatoMiembro miembro1, ..., miembroN;
    ...
    tipoDatoMiembroM miembro1, ..., miembroN;
};
```
Una vez declarada la estructura podemos declarar variables cuyo tipo de dato sea la estructura antes definida, podemos hacerlo de la siguiente manera:
```C
//* LISTANDO INMEDIATAMENTE DESPUÉS DE LA LLAVE DE CIERRE
struct nombreDeLaEstructura{
    tipoDatoMiembro miembro1, ..., miembroN;
    ...
    tipoDatoMiembroM miembro1, ..., miembroN;
}varStruct1, ..., varStructN;

//* LISTADO DE VARIABLES
struct nombreDeLaEstructura{
    tipoDatoMiembro miembro1, ..., miembroN;
    ...
    tipoDatoMiembroM miembro1, ..., miembroN;
};

struct nombreDeLaEstructura varStruct1, ..., varStructN;
```
###### <b><i>NOTA.</i></b> Las estructuras pueden copiarse, asignarse, pasar a funciones y ser regresadas por estas mismas (tal cual como cualquier otro tipo de dato).

De igual manera una estructura puede inicializarse en su misma declaración especificando los valores iniciales, entre llaves, después de la definición de variables de nuestra estructura.
```C
struct nombreDeLaEstructura{
    tipoDatoMiembro miembro1, ..., miembroN;
    ...
    tipoDatoMiembroM miembro1, ..., miembroN;
}varStruct = {valorMiembro1, ..., valorMiembroN};
```
Conociendo el cómo poder declarar nuestras estructuras, es importante el saber como acceder a los miembros de está mediante el operador punto o ".", o bien el operador puntero "->".

- <i><b>Acceso mediante operador "."</b></i>: El operador punto permite un acceso directo a los miembros de la estructura y su sitanxis es la siguiente.
```C
varStructN.miembroN = dato;
```
- <i><b>Acceso mediante operador "->"</b></i>: El operador puntero permite acceder a los datos de la estructura a partir de un puntero y su sintaxis es la siguiente.
```C
varStructN -> miembroN = dato;
```
#### <a href="04 - EstructurasAnidadas.c">ESTRUCTURAS ANIDADAS.</a>
La estructuras pueden contener dentro de su declaración otras estructuras, a estas las denominamos como estructuras anidadas, su sintaxis es la siguiente:
```C
struct nombreDeLaEstructura1{
    tipoDatoMiembro miembroN;
};

struct nombreDeLaEstructura2{
    tipoDatoMiembro miembroN;
    struct nombreDeLaEstructura1 varStruct1;
}varStructN;
```
#### <a href="05 - EstructurasFunciones.c">ESTRUCTURAS Y FUNCIONES.</a>
Conocemos que las únicas operaciones que podemos realizar con las estructuras son las de copiar y  asignar como unidad, tomar su dirección de memoria  con "&"  y tener acceso a sus miembros.

Las dos primeras operaciones descritas incluyen poder pasar las estructuras  como argumentos a funciones y también regresar valores de funciones. Lo antes dicho va de la mano con el paso de valor por parámetro o por referencia, esto debido a que solo pueden ser pasadas de esta manera, existiendo así las mismas diferencias  que con los tipos de datos simples. Entonces si deseamos <i><b>pasar una estructura completa como parámetro</b></i> realicemos lo siguiente:
```C
//* ESTRUCTURA PARA DATOS PERSONALES
struct datosPersonales{
    long int numero;
    char letra;
    char nombre[50];
    char apellidos[100];
};

struct datosPersonales INE;
```
Si tenemos dicha estructura de datos personales y deseamos acceder a los datos miembros para escribir en ellos, realizaremos lo siguiente:

- <i><b>Escritura por paso de valores</b></i>.
```C
//* DECLARAMOS LA FUNCIÓN DE ESCRITURA
void escribirINE(struct datosPersonales INE);

//* MANDAMOS A LLAMAR A LA FUNCIÓN
escribirINE(INE);

//* ACCEDEMOS A SUS VALORES MIEMBRO
printf("%s", INE.nombre);
```
- <i><b>Escritura por referencia</b></i>.
```C
//* DECLARAMOS LA FUNCIÓN DE ESCRITURA
void escribirINE(struct datosPersonales *INE);

//* MANDAMOS A LLAMAR A LA FUNCIÓN
escribirINE(&INE);

//* ACCEDEMOS A SUS VALORES MIEMBRO
printf("%s", INE->nombre);
```
###### <b><i>NOTA.</i></b> Con lo anterior podemos observar que la función la cual este llamando a nuestra estructura debe especificar en su declaración si el argumento se pasa por valor o por referencia.

Ya hemos visto el como pasar una estructura completa como parámetro de una función, ahora veamos el como poder <i><b>pasar los miembros de una estructura como pa´rametros</b></i> realicemos lo siguiente:

- <i><b>Escritura por paso de valores (miembros)</b></i>.
```C
//* DECLARAMOS LA FUNCIÓN DE ESCRITURA
void escribirINE(long int numero);

//* MANDAMOS A LLAMAR A LA FUNCIÓN
escribirINE(INE.numero);
```
- <i><b>Escritura por referencia</b></i>.
```C
//* DECLARAMOS LA FUNCIÓN DE ESCRITURA
void escribirINE(long int *numero);

//* MANDAMOS A LLAMAR A LA FUNCIÓN
escribirINE(&INE.numero);

//* CAMBIAR EL VALOR EN LA FUNCIÓN
void escribirINE(long int *numero){
    *numero = 2020301810;
}
```
###### <b><i>NOTA.</i></b> Recordemos que cuando deseamos cambiar el valor de una variable la cual pasa por referencia siempre utilizaremos el “*” para realizar el cambio.

### <a href="02 - Uniones.c">UNIONES.</a>
Las uniones son casi iguales que las estructuras, con la punica diferencia semántica que al momento de si declaración en vez de poner "struct" ponemos "union":

```C
union nombreDeLaUnion{
    tipoDatoMiembro miembro1, ..., miembroN;
    ...
    tipoDatoMiembroM miembro1, ..., miembroN;
}varUnionN, ..., varUnionN;

//* O TAMBIEN
union nombreDeLaUnion{
    tipoDatoMiembro miembro1, ..., miembroN;
    ...
    tipoDatoMiembroM miembro1, ..., miembroN;
};

union nombreDeLaUnion varUnionN, ..., varUnionN
```
Pero si son iguales <b><i>¿Qué diferencia hay entre struct y union? Struct nos permite almacenar variables una detrás de la otra, mientras las uniones almacenan de igual manera los miembros en un paquete, con la única diferencia que en lugar de colocar los miembros uno detrás de otro, en las uniones todos los miembros se solapan entre sí en la misma posición de memoria (esto para ahorrar espacio en la memoria)</i></b>. El tamaño el cual ocupara la unión será el de la variable más grande, por ejemplo, si retomamos el ejemplo anterior de los datos personales tendremos cuatro variables:

```C
//* ESTRUCTURA PARA DATOS PERSONALES
union datosPersonales{
    long int numero;        // 32b
    char letra;             // 8b
    char nombre[50];        // 50B
    char apellidos[100];    // 10B
};

union datosPersonales INE;
```
Por lo tanto nuestra unón tomaría el espacio de memoria de la variable apellido (100B), mientras que en una estructura sería de 155B (la suma de todos los espacios de memoria de las variables).

###### <b><i>NOTA.</i></b> Un lado malo de las uniones es que estas solo pueden ser utilizadas para poder acceder a los miembros los cuales en ese momento tengan algún valor, esto debido a que si asignamos algún valor después, los datos se sobre escribirán y el código no funcionara de una manera correcta.

### <a href="03 - Enumeraciones.c">ENUMERACIONES.</a>
La enumeraciones son tipos de datos creados por el usuario con la única diferencia que los datos miembro de estas enumeraciones deben ser constantes de tipo entero, su sintaxis es la siguiente:
```C
enum nombreDeLaEnumeracion{
    cnte1 = valor1;
    cnte2 = valor2;
    ...
    cnteN = valorN;
};

nombreDeLaEnumeracion varEnum;

varEnumN = constanteN;
varEnumN = valorN;
```

