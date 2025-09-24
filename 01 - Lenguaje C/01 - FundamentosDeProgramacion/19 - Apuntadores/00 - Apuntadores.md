# APUNTADORES EN C :arrow_right:

Los apuntadores la mayoría de las veces son un dolor de cabeza cuando se comienza a programar, siendo estos uno de los temas **_"más complicados"_** al momento de ingresar al mundo de la programación, por ello en este texto se ha decidido abarcar este tema con ejemplos ilustrados y descripciones no tan rebuscadas.

## <a href="19 - 01 - espacioMemoriaVariable.c">Introducción</a>

Para comenzar a comprender los apuntadores es necesario recordar que al momento de declara una variable lo que se hace es reservar un espacio de memoria en la computadora para que dicha variable sea almacenada, es decir, la variable será almacenada en un cajón de memoria.

```txt
              M E M O R I A              D A T O S  I N G R E S A D O S
╔══════════════════════════════════════╗
║       0x[Direccion de memoria]       ║    <-        13
╚══════════════════════════════════════╝
```

Dentro del lenguaje C es posible visualizar el espacio de memoria en el cual se ha almacenado una variable, esto se hace de la siguiente manera:

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(){
    // Se declara la variable
    int variable = 13;
    // Se visualiza el número en consola
    printf("El número es: %i: ", variable);
    // Se visualiza la dirección de memoria
    printf("La dirección de memoria es: %i: ", &variable);
    return 0;
}
```

Pero ¿Qué es lo que hace la computadora? La computadora lo que hace es ingresar dicho valor declarado en una posición de memoria, algo así como un oficinista que ingresa un documento a un archivero.

## <a href="19 - 02 - pasoDeValor.c">Apuntadores</a>

Una vez recordando que las variables son almacenadas en una dirección de memoria establecida por la computadora, es hora de entrar en materia.
Un apuntador en pocas palabras es una variable, una variable la cual puede almacenar la dirección de memoria de un dato o una variable, en otras palabras, un apuntador lo que hace es literalmente apuntar al espacio físico de la memoria donde se almacena la variable con su respectivo dato y guardarlo.

```txt
              M E M O R I A
╔══════════════════════════════════════╗
║       0x[Direccion de memoria]       ║    <-      VariableApuntador
╚══════════════════════════════════════╝
```

Ahora bien, para poder declarar una variable tipo apuntador lo que se hace es lo siguiente:

```C
tipoDato *nombreVarApuntador;
```

Es posible observar que un apuntador se declara tal cual, como una variable normal, con la púnica diferencia que se debe poner un `*` (asterisco) entre el tipo de dato y el nombre de la variable del apuntador o puntero, entonces, si se desea declarar varias variables del mismo tipo puntero en la misma declaración lo que se hace es lo siguiente:

```C
int *pVarInt1, *pVarInt2;
float *pVarFloat1, *pVarFloat2;
char *pCharVar1, *pCharVar2;
```

Se ha visto el como declarar las variables tipo puntero o apuntador, pero ¿Cómo es posible guardar el valor en la dirección de memoria? Para poder guardar el valor de una variable en la dirección de memoria lo que se hace es utilizar un operador con el que se trabaja siempre, el operador `&` o **_ampersand_** permite obtener la dirección de memoria de una variable, por ello también es llamado **_operador de dirección_**. Ahora es cuando tiene sentido que al momento de utilizar la función de entrada `scanf` es necesario incorporar en lo parámetros de la función el operador de dirección seguido del nombre de la variable donde se desea ingresar el valor, ya que se hace alusión a que en dicha dirección de memoria se ingresa el valor deseado.

```C
scanf("%tipoDato", &Variable);
```

Dicho lo anterior, se puede pasar el valor de una dirección de memoria al apuntador de la siguiente manera:

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(){
    // Se declara la variable
    int variable = 13;
    // Se declara la variable apuntador
    int *p_variable;
    // Se asigna la dirección de memoria
    p_variable = &variable;
    return 0;
}
```

Se puede observar que no es necesario utilizar nuevamente el operador `*` al momento de asignar la dirección de memoria a la variable apuntador.
Un punto importante que destacar es que **_el apuntador si o si debe inicializarse ya sea en una dirección de memoria, en 0 o_** `NULL`.
Para poder visualizar el valor almacenado en la dirección de memoria de la variable apuntador lo que se haces es simplemente imprimir los datos.

```C
printf("Dato variable: %i: ", variable);
printf("\nDato variable apuntador: %i: ", *p_variable);

printf("\nPosicion variable: %p: ", &variable);
printf("\nPosicion variable puntero: %i: ", & p_variable);
```

Se puede observar que al momento de visualizar los datos de la variable apuntador, el primer `printf` utiliza `*` debido a que se desea mostrar el valor dentro de la dirección de memoria, mientras que el segundo `printf` no se tiene el `*` ya que se desea únicamente la dirección de memoria y esta variable ya ha sido igualada con dicha dirección de memoria.

### <a href="19 - 03 - pasoDeParametrosPorValor.c">Paso de parámetros por valor</a>

El paso de parámetros por valor es el más utilizado en la programación en C, esto debido a que es utilizado cuando se desea ingresar datos a un programa. Dicho **_paso de parámetros lo que hace es enviar una copia del valor de la variable original a la función la cual esta llamando a la variable_**. Esto quiere decir que cualquier modificación realizada al parámetro dentro de la función no afectara a la variable global.

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// PROTOTIPO(S) DE FUNCION(ES)
int duplicaPorValor(int x);

// FUNCIÓN PRINCIPAL
int main(){
    int variable = 10;
    printf("Variable antes de duplicar: %i: ", variable);
    // Llamada a la función con paso de valor
    duplicaPorValor(variable);
    // Llamada a la función con paso de valor
    printf("\nVariable después de llamar: %i: ", variable);
    return 0;
}
// FUNCION(ES)
int duplicaPorValor(int x){
    int x *= 2;
}
```

Lo que sucede en el programa anterior es que copia el valor original y se pasa a la función, por lo que no se modifica el valor que se ha dado, el valor que si se modifica es el de la variable dentro de la función, ósea, la variable `x`.

### <a href="19 - 04 - pasoDeParametrosPorReferencia.c">Paso de parámetros por referencia</a>

El paso de parámetros por referencia a comparación del paso de parámetros por valor **_permite modificar el valor de la variable gracias a los apuntadores_**. Esto se refiere que, al momento de pasar un puntero a la función, dicha función puede modificar directamente el contenido de la memoria referenciada por ese puntero, afectando así la variable original.

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// PROTOTIPO(S) DE FUNCION(ES)
int duplicaPorReferencia(int *x);

// FUNCIÓN PRINCIPAL
int main(){
    int variable = 10;
    printf("Variable antes de duplicar: %i: ", variable);
    // Llamada a la función con paso por referencia
    duplicaPorReferencia(&variable);
    // Llamada a la función con paso de valor
    printf("\nVariable después de llamar: %i: ", variable);
    return 0;
}
// FUNCION(ES)
int duplicaPorValor(int *x){
    int *x *= 2;
}
```

Es posible observar que se utiliza el operador de dirección para poder así direccionar el valor de la operacion realizada a la dirección de memoria de la variable.

### <a href="19 - 05 - parametrosArreglos.c">Paso de parámetros de arreglos</a>

Es importante decir que **_para poder llenar un arreglo desde una función externa siempre se utiliza el paso de parámetros por referencia_**. Conociendo lo anterior se puede decir que **_el paso de parámetros para los arreglos permite pasar la dirección de memoria del primer elemento o posición del arreglo. Dicho puntero permite a la función externa acceder y manipular los elementos del arreglo directamente en memoria_**.

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <stdlib.h>

// PROTOTIPO(S) DE FUNCION(ES)
void llenarArreglo(int Arreglo[], int Longitud);

// FUNCIÓN PRINCIPAL
int main(){
    int miVector[5];
    // Se pasa solamente el nombre del arreglo y su longitud
    duplicaPorReferencia(miVector, 5);
    // Se muestran sus valores
    for(int i = 0; i < 5; i++){
        printf(“%i\n”, miVector[i]);
    }
   return 0;
}

// FUNCION(ES)
void llenarArreglo(int Arreglo[], int Longitud){
    for(int i = 0; i < longitud; i++){
        printf(“\nIngrese el valor de #%i”, i + 1);
        scanf(“%i”, &Arreglo[i]);
    }
}
```

## <a href="./19 - 06 - apuntadoresConArreglos.c">Apuntadores con arreglos</a>

Como ya se ha visto, **_es posible utilizar los apuntadores junto con los arreglos para así poder modificar sus datos desde una función externa, pero de igual manera es posible utilizar apuntadores dentro de la función principal para poder recorrer un arreglo_**.

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main(){
    int Arreglo[5] = {1, 2, 3, 4, 5};
    // Se declara la variable puntero igualándola al arreglo
    int *pArreglo = Arreglo;
    // Se recorre el arreglo
    while(pArreglo < Arreglo + 5){
        printf(“%i\n”, *pArreglo);
    }
    return 0;
}
```

Regresar al menú de fundamentos <a href="../../01 - FundamentosDeProgramacion/00 - Fundamentos.md">Click aquí</a>.
