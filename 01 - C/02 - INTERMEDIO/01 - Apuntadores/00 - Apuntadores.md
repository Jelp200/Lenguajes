# APUNTADORES EN C :arrow_right:
### INTRODUCCIÓN.
Para entender los apuntadores es necesario recordar que nosotros al momento de declarar una variable lo que hacemos es reservar un espacio de nuestra memoria para que dicha variable sea almacenada, es posible visualizar el espacio en el cual se ha almacenado dicha variable de la siguiente manera:
```C
// Declaramos nuestra variable
int var = 13;

// Visualizamos el numero en la consola
printf("El numero es: %i", var);

//* Visualizamos la direccion de memoria donde se almaceno
printf("\nSu direccion de memoria es: %p", &var);

/*
Al momento de ejecutar el programa tendremos:

El numero es: 13
Su direccion de memoria es: 0x[Direccion donde se almaceno]
*/
```
Lo que nuestra computadora lo que hace es ingresar dicho valor que hemos declarado en una posición de memoria la cual es volatil ¿Que quiere decir esto? Que al momento en el cual nosotros ejecutamos el programa la computadora asignara un espacio de memoria "x" al momento de compilar el programa y si lo volvemos a hacer, la direccion de memoria cambiara.

Esto de manera en que nosotros lo entendamos se vera así:
```txt
              M E M O R I A              D A T O S  I N G R E S A D O S
╔══════════════════════════════════════╗
║       0x[Direccion de memoria]       ║    <-        13
╚══════════════════════════════════════╝
```

### APUNTADORES.
Ahora bien, un apuntador es una variable en si, es una variable la cual puede almacenar la dirección de memoria de un dato o de alguna otra variable, en otras palabras, el apuntador lo que hace es literalmente apuntar al espacio físico de nuestra memoria donde se almacena la variable con su respectivo dato.
```txt
              M E M O R I A
╔══════════════════════════════════════╗
║       0x[Direccion de memoria]       ║    <-      VariableApuntador
╚══════════════════════════════════════╝
```
Para poder declarar una variable de tipo apuntador es muy sencillo:
```C
tipoDato *nombreVarApuntador;
```
Como se puede observar una variable de tipo apuntador o puntero se declara tal cual como cualquier otra variable a excepcion que debemos poner un "*" entre el tipo de dato y el nombre de la variable, entonces, si deseamos declarar varias variables del mismo tipo de tipo puntero en la misma declaración lo que hacemos es lo siguiente:
```C
int *pVarInt1, *pVarInt2;
float *pVarFlo1, *pVarFlo2;
```
Muy bien, ya hemos visto como declaramos las variables de tipo apuntador, pero ¿Cómo es posible guardar el valor de una dirección de memoria en nuestra variable? Para poder hacer esto lo que necesitamos es utilizar un operador con el cual ya hemos trabajado y mucho, el operador "&" o ampersand  nos permite obtener la dirección de memoria de una variable, por ello tambien es llamado el operador de dirección. Entonces ahora tiene sentido que cuando nosotros utilizabamos el "scanf" necesitabamos icorporar en los parametros de dicha función el operador "&" seguido del nombre de la variable en donde deseabamos ingresar el valor, ya que haciamos alución a que en dicha dirección de memoria ingresariamos ese valor. Conociendo lo anterior podemos ahora si pasar valores a nuestro apuntador de la siguiente manera:
```C
// Declaramos nuestra variable
int var = 13;

//* Declaramos nuestra variable apuntador
int *pVar;

//* Asignamos la dirección de memoria de nuestra variable a nuestra variable apuntador
pVar = &var;
```
Podemos observar que no es necesario utilizar el "*" al momento de asignar la dirección de memoria a nuestra variable apuntador. Ahora, para poder visualizar que realmente se asigno el valor almacenado en la dirección de memoria a nuestra variable apuntador lo que haremos será simplemente imprimir nuestros datos de la siguiente manera:
```C
printf("Dato variable: %i", va)r;
printf("\nDato variable apuntador: %i", *pVar);

printf("\nPosicion variable: %p", &var);
printf("\nPosicion variable apuntador: %p", pVar);
```
Podemos obsrvar que al momento de visualizar los datos de nuestra variable apuntador en nuestro primer "printf" utilizamos * debido a que deseamos que nos muestre el valor dentro de nuestra dirección de memoria, mientras que en el segundo "printf" no tenemos "*" debido a que deseamos solo la dirección de memoria y esta variable ya ha sido igualada con dicha dirección de memoria.

### <a href="03 - ParametroPorValor.c">PASO DE PARAMETROS POR VALOR.</a>
El paso de parametros por valor es el más utilizado en la programación, esto debido a que es utilizado cuando deseamos ingresar datos a nuestros programas.

Dicho paso de parametros lo que hace es enviar una copia del valor original a la función. Esto quiere decir que cualquier modificación realizada al parámetro dentro de la función no afectará a la variable original, esto puede verse de la siguiente manera:
```C
// Función que duplica un número, pero el duplicado solo afecta al parámetro local.
void duplicaPorValor(int x){
    x *= 2;
}

// FUNCION PRINCIPAL
int main(){
    int var = 10;
    printf("Variable antes de duplicar: %i", var);

    //* Llamada a la función con paso de valor.
    duplicaPorValor(var);

    //* Visualizamos el valor despues de la función.
    printf("\nVariable despues de llamar a la función: %i", var);

    return 0;
}
/*
Al momento de ejecutar el programa tendremos:

Variable antes de duplicar: 10
Variable despues de llamar a la función: 10
*/
```
Lo que sucede en el programa es que como lo dijimos anteriormente, se copia el valor original y se pasa a la función, por ello es que no se modifica el valor que hemos dado, el valor que si se modifica es el de la variable que esta dentro de la función, osea la "x".

### <a href="04 - ParametroPorReferencia.c">PASO DE PARAMETROS POR REFERENCIA.</a>
El paso de parametros por referencia a compración del de valor, nos permite modificar el valor de la variable gracias a los apuntadores. Esto es que al momento de pasar un puntero a la función, dicha función puede mosificar directamente el contenido de la memoria referenciada por ese puntero, afectando así nuestra
variable original.
```C
// Función que duplica un número usando paso por referencia (punteros)
void duplicaPorValor(int *x){
    *x *= 2;
}

// FUNCION PRINCIPAL
int main(){
    int var = 10;
    printf("Variable antes de duplicar: %i", var);

    //* Llamada a la función con paso por referencia (punteros)
    duplicaPorValor(&var);              // Direccionamos el valor de la operacion a la dirección de memoria de la variable

    //* Visualizamos el valor despues de la función.
    printf("\nVariable despues de llamar a la función: %i", var);

    return 0;
}
/*
Al momento de ejecutar el programa tendremos:

Variable antes de duplicar: 10
Variable despues de llamar a la función: 10
*/
```

### <a href="05 - ParametrosArreglo.c">PASO DE PARAMETROS DE ARREGLOS.</a>
En el paso de parametros para los arreglos se está pasando la dirección de memoria del primer elemento del arreglo. En escencia, se pasa un puntero al primer elemento del arreglo. El puntero permite a la función acceder y manipular los elementos del arreglo. Dicho puntero permite a la función acceder y manipular los
elementos del arreglo directamente en memoria.
```C
// Función que permite el ingreso de los elementos de un arreglo
void llenarArreglo(int Arreglo[], int longitud){
    // Ciclo para recorrer el arreglo
    for(int i = 0; i < longitud; i++){
        printf("\nDe el valor #%i del arreglo: ", i);
        scanf("%i", &Arreglo[i]);
    }
}

// FUNCION PRINCIPAL
int main(){
    int miVector[5];

    //* Pasamos solamente el nombre del arreglo y su dimensión.
    llenarArreglo(miVector, 5);

    // Mostramos sus valores.
    for(int i = 0; i < 5; i++)
        printf("%i\n", miVector[i]);

    return 0;
}
//! Para poder llenar nuestro arreglo desde una función siempre utilizaremos el paso de parametros por referencia.
```
### <a href="06 -  ApuntadoresArreglos.c">APUNTADORES CON ARREGLOS.</a>
Como hemos visto en el tema anterior, es posible utilizar los apuntadores con los arreglos para poder modificar datos desde una función externa, pero de igual manera es posible utilizar apuntadores dentro de la función principal para poder recorrer nuestro apuntador.
```C
// FUNCION PRINCIPAL
int main(){
    int Arreglo[5] = {1, 2, 3, 4, 5};

    //* Declaramos nuestra variable apuntador al inicio de nuestro arreglo
    int *pArreglo = &Arreglo[0];                // Nuestra variable apuntador esta siendo igualada a la dirección de memoria del primer valor

    //* Nos desplazamos por el arreglo sin necesidad de conocer su dimensión.
    while(*pArreglo != NULL){
        printf("%i\n", *pArreglo);
        pArreglo++;                             // Recorremos el arreglo posición por posición.
    }

    return 0;
}
//! Siempre recorreremos nuestro arreglo de esta manera con la variable apuntador.
```