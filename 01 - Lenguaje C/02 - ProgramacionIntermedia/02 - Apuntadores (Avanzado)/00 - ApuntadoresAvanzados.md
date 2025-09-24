# APUNTADORES AVANZADOS EN C :arrow_right:

Es necesario recordar que los apuntadores son variables las cuales permiten almacenar una dirección de memoria de un dato o una variable. Para declarar un apuntador en C se realiza lo siguiente:

```C
tipoDato *nombreApuntador;
```

Dentro de C, aparte de tener el paso de parámetros por valor, por referencia, de arreglos y apuntadores con arreglos, se tienen:

## <a href="02 - 01 - ApuntadoresDobles.c">Apuntadores Dobles `**ptr`</a>

Los apuntadores dobles o apuntador a apuntador, son apuntadores los cuales permiten almacenar la dirección de memoria de otro apuntador. El primer apuntador es utilizado para almacenar la dirección de memoria de una variable, y el segundo apuntador es utilizado para almacenar la dirección de memoria del primer apuntador. Pero ¿Por qué se hace esto? Esto se hace con la finalidad de:

- Manejar estructuras dinámicas como listas enlazadas.
- Manipular arreglos dinámicos de cadenas o estructuras.
- Modificar variables dentro de funciones usando doble indirección.

La sintaxis de un apuntador doble es la siguiente:

```C
tipoDato **nombreApuntadorDoble;
```

Y se puede inicializar de la siguiente manera:

```C
variable = &nombreApuntadorSimple;                          // Después de la declaración
tipoDato **nombreApuntadorDoble = &nombreApuntadorSimple;   // Con la declaración
```

Para poder acceder al valor al cual apunta el apuntador doble, se necesita desreferenciar con el operador `*` dos veces, es decir:

```C
*nombreApuntadorSimple;                 // Da la dirección de memoria del apuntador simple.
**nombreApuntadorDoble;                 // Da la dirección de memoria del apuntador doble.
```

A continuación, un ejemplo de apuntadores dobles:

```C
int main(){
    //* Variable
    int var = 10;

    //* Apuntador a la variable entera
    int *ptr1 = &var;

    //* Apuntador al apuntador
    int **ptr2 = &ptr1;

    printf("var: %d\n", var);           // var = 10
    printf("*ptr1: %d\n", *ptr1);       // *ptr1 = 10
    printf("**ptr2: %d\n", **ptr1);     // **ptr2 = 10
    return 0;
}
```

Ilustrando el ejemplo anterior.

<div><img src="../../../imgs/01 - Lenguaje C/02 - ProgramacionIntermedia/02 - Apuntadores (Avanzado)/PunteroPuntero.png"></div>

###### **_Nota 1._** El tamaño de la variable del apuntador doble siempre será igual a la de los apuntadores normales.

## <a href="02 - 02 - ApuntadoresFunciones.c">Apuntadores a Funciones</a>

Los apuntadores a funciones son un tipo de apuntadores los cuales almacenan una dirección de memoria en una función. Permite que las funciones se pasen como argumentos y se invoquen de forma dinámica. Es útil en técnicas como funciones de devolución de llamada, programas controlados por eventos y polimorfismo (un concepto en el que una función u operador se comporta de forma diferente según el contexto).

La sintaxis para declarar una función con apuntadores es:

```C
tipoDato (*nombreApuntador)(tipoDatoComoParametro);
```

El parentesis que encapsula al apuntador es necesario, ya que si no tiene este encapsulado, se tratara como una función simple con la diferencia que el tipo de retorno sería el operador `*` y el nombre del apuntador.

Para poder inicializar dicha función es necesario hacer uso del operador de dirección y almacenarlo en la misma variable con el nombre del apuntador que se le asigno, osea:

```C
tipoDato (*nombreApuntador)(tipoDatoComoParametro);

nombreApuntador = &nombreFuncion;
```

De igual forma es posible dejar de lado el operador de asignación y tratar como tal a la función sin dicho operador, con la diferencia que este apuntador sería un apuntador constante.

```C
tipoDato (*nombreApuntador)(tipoDatoComoParametro);

nombreApuntador = nombreFuncion;
```

A continuación, un ejemplo de apuntadores a funciones:

```C
// Funcion
int suma(int a, int b){
    return a + b;
}

// Función principal
int main(){
    //* Declara una función apuntador que concuerda con la función suma
    int (*fptr)(int, int);

    //* Asignando el apuntador a la función suma
    fptr = &suma;

    //* Llama a la función vía el apuntador
    printf("%d", fptr(10, 5));                  // 15
    
    return 0;
}
```

Algunas propiedades de estos apuntadores a funciones son:

- Apunta a la dirección de memoria de la función en el segmento de código.
- Requiere las mismas caracteristicas que la función (Tipo de dato de retorno y lista de parametros).
- Puede apuntar a diferentes funciones con las mismas caracteristicas.
- No se pueden realizar operaciones aritméticas como incremento o decremento.
- No se pueden realizar operaciones aritméticas como incremento o decremento.

## <a href="./02 - 05 - PEYAMA.c">Paso de estructuras y arreglos mediante apuntadores.</a>

- Paso de estructuras mediante apuntadores.

Pasar una estructura por referencia (utilizando apuntadores) es más eficiente que pasarla por valor, especialmente para estructuras grandes. Se usa un apuntador a la estructura para evitar copias innecesarias y mejorar el rendimiento. Es posible pasar por referencia una estructura de la siguiente forma:

```C
//* PASO DE ESTRUCTURAS POR REFERENCIA.

// Estructura
struct Persona{
    char nombre[50];
    int edad;
};

// Función
void imprimirPersona(struct Persona *ptr){
    printf("Nombre: %s\n", ptr -> nombre);
    printf("Edad: %d\n", ptr -> edad);
}

// Función principal
int main(){
    struct Persona p1 = {"Jorge", 24};
    imprimirPersona(&p1);                   // Pasar la estructura por referencia.
    return 0;
}
```

- Paso de arreglos mediante apuntadores.

En C, los arreglos se pasan a funciones como punteros a su primer elemento.

```C
//* PASO DE ARREGLOS POR REFERENCIA.

// Función
void imprimirArreglo(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Función principal
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    imprimirArreglo(arr, 5);                // Pasar el arreglo por referencia
    return 0;
}
```

## <a href="02 - 03 - OAAA.c">Operaciones Aritméticas Avanzadas con Apuntadores</a>

Existen varias operaciones las cuales pueden ser realizadas con apuntadores, dichas operaciones son un poco diferentes a las utilizadas de forma matematica. Estas operaciones son:

- Incremento/Decremento de un apuntador. Cuando un apuntador se incrementa, este se incrementa por el tamaño del tipo de dato de la variable apuntador. De igual forma pasa lo mismo con el decremento, este se decrementa por el tañao del tipo de la variable apuntador.

<div><img src="../../../imgs/01 - Lenguaje C/02 - ProgramacionIntermedia/02 - Apuntadores (Avanzado)/IDPuntero.png"></div>

###### **_Nota 2._** El tamaño de la variable del apuntador de la imagen de ejemplo es de 32b (4B), osea una variable apuntador flotante.

- Suma de un entero a un apuntador. Cuando a un apuntador se le suma un tipo de dato entero, lo primero que pasa es que el valor del entero es multiplicado por el tamaño en Bytes del entero y consecuentemente se agrega al valor de la dirección de memoria de la variable apuntador.

<div><img src="../../../imgs/01 - Lenguaje C/02 - ProgramacionIntermedia/02 - Apuntadores (Avanzado)/SPuntero.png"></div>

- Resta de un entero a un apuntador. Cuando a un apuntador se le resta un tipo de dato entero, lo primero que pasa es que el valor del entero es multiplicado por el tamaño en Bytes del entero y consecuentemente se quita al valor de la dirección de memoria de la variable apuntador.

<div><img src="../../../imgs/01 - Lenguaje C/02 - ProgramacionIntermedia/02 - Apuntadores (Avanzado)/RPuntero.png"></div>

- Resta de dos apuntadores. La resta de dos apuntadores es posible solo cuando estos son del mismo tipo de dato. El resultado se da cuando se calcula la diferencia entre las direcciones de memoria de los dos apuntadores, y se calcula cuantos Bytes de datos existen de diferencia entre estos dos, por ejemplo:

```txt
Dos apuntadores de tipo entero, digamos ptr1(address:1000) y ptr2(address:1004) se restan. La resta entre las direcciones de memoria es 4B. Dado que es tamaño de un entero son 4B, el incremento entre ptr1 y ptr2 viene dado por (4/4) = 1.
```

- Aritmetica de apuntadores en Arreglos. Los punteros contienen direcciones. Sumar dos direcciones no tiene sentido porque no se sabe a qué apuntarían. Restar dos direcciones permite calcular el desplazamiento entre las dos direcciones. Un nombre de arreglo actúa como una constante de puntero. El valor de esta constante de puntero es la dirección del primer elemento.

## <a href="./02 - 04 - ComparativaApuntadores.c">Comparativa de Apuntadores</a>

Es posible comparar dos apuntadores utilizando los operadores de asignación `>, <, >=, <=, == y !=`. Esto retorna verdadero si la condición es valida, sino, retorna falso. Los pasos, para poder realizar la comparativa entre apuntadores son:

1. Inicializar los valores enteros y asignarles un apuntador.
2. Checar la condición utilizando la comparativa.
3. Visualizar la salida.

- Comparativa a NULL. Un apuntador puede ser comparado o asignado a NULL. Estos apuntadores se denominan apuntadores NULL y se utilizan en varios métodos de manejo de errores relacionados con apuntadores.

```C
// Función principal
int main(){
    int *ptr = NULL;

    if(ptr == NULL)
        printf("El apuntador en NULL");
    else
        printf("El apuntador no es NULL");

    return 0;
}
```

- Comparación de apuntadores utilizando un arreglo. En el siguiente enfoque, se obtiene el recuento de números pares e impares en un arreglo. Vamos a implementar esto mediante un apuntador.

1. Primero, declara la longitud de una matriz y los elementos de la matriz.
2. Declara la variable puntero y apúntala al primer elemento de una matriz.
3. Inicializa count_even y count_odd. Itera el bucle for y comprueba las condiciones para la cantidad de elementos pares e impares en una matriz.
4. Incrementa la ubicación del puntero ptr++ al siguiente elemento de una matriz para realizar más iteraciones.
5. Imprime el resultado.

```C
// Función principal
int main(){
    int n = 10;         // Longitud del arreglo

    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int* ptr;           // Declaración de la variable apuntador

    ptr = arr;          // El apuntador apunta al primer elemento del arreglo

    int count_even = 0;
    int count_odd = 0;

    for (int i = 0; i < n; i++) {
        if (*ptr % 2 == 0) 
            count_even++;
        if (*ptr % 2 != 0) 
            count_odd++;

        ptr++;          // Apuntando al siguiente elemento del arreglo
    }

    printf("El número de elementos pares en un arreglo es: %d", count_even);

    printf("\nEl número de elementos impares en un arreglo es: %d", count_odd);

    return 0;
}
```

Regresar al menú de intermedio <a href="../00 - Intermedio.md">Click aquí</a>.
