# FUNCIONES EN C :package:

Las funciones dentro de la programación son una parte más que importante, se puede decir que una función proporciona una forma conveniente de encapsular datos y cálculos que se pueden emplear después sin preocuparse de su implementación. Con funciones que se diseñen adecuadamente, es posible ignorar el cómo se realiza el trabajo, si no, es suficiente saber que se hace.
Se pueden declarar funciones dentro del lenguaje de programación C de la siguiente manera:

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// PROTOTIPO(S) DE FUNCION(ES)
tipoFuncion nombreDeLaFuncion(Parametros);

// FUNCIÓN PRINCIPAL
int main(){
    // Código en C
    return 0;
}

// FUNCION(ES)
tipoFuncion nombreDeLaFuncion(Parametros){
    // Código en la función (instrucciones).
}
```

## [Funciones sin retorno](./10%20-%2001%20-%20FuncionesSinRetorno.c)

Una función sin retorno, como su nombre lo dice, es una función la cual no regresa ningún valor dentro de su encapsulado, está dada por:

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// PROTOTIPO(S) DE FUNCION(ES)
void nombreDeLaFuncion(Parametros);

// FUNCIÓN PRINCIPAL
int main(){
    // Código en C
    return 0;
}

// FUNCION(ES)
void nombreDeLaFuncion(Parametros){
    // Código en la función (instrucciones).
}
```

```mermaid
flowchart LR
    %% Definición de la Función
    subgraph Funcion_Void [void nombreFuncion]
        direction TB
        A([Inicio de Función]) --> B[Declaración de variables locales]
        B --> C{¿Condición?}
        
        C -- Sí --> D[Ejecutar Tarea A]
        C -- No --> E[Ejecutar Tarea B]
        
        D --> F([Retorno Implícito])
        E --> F
    end

    %% Ejemplo de llamada desde el Main
    Main([main]) -- "Llamada a función" --> Funcion_Void

    %% Estilos Profesionales para Typora
    classDef terminador fill:#ffffff,stroke:#333,stroke-width:2px;
    classDef logica fill:#d1e6ff,stroke:#000;
    classDef accion fill:#ffe6cc,stroke:#000;
    classDef contenedor fill:#f9f9f9,stroke:#666,stroke-dasharray: 5 5;

    class A,F,Main terminador;
    class C logica;
    class B,D,E accion;
    class Funcion_Void contenedor;
```



El siguiente ejemplo permite visualizar un texto en consola gracias a las funciones.

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// PROTOTIPO(S) DE FUNCION(ES)
void msjFuncion();

// FUNCIÓN PRINCIPAL
int main(){
    msjFuncion();
    return 0;
}
// FUNCION(ES)
void msjFuncion(){
    printf(“ESIME ZACATENCO | IPN | ICE | ELECTRÓNICA”);
}
```

Siendo su diagrama de flujo el siguiente:

```mermaid
flowchart LR
    %% Flujo del Programa Principal
    subgraph Programa_Principal [int main]
        M1([Inicio]) --> M2[Llamada a msjFuncion]
        M2 --> M3[return 0]
        M3 --> M4([Fin])
    end

    %% Definición de la Función Void
    subgraph Definicion_Funcion [void msjFuncion]
        direction TB
        F1([Inicio de Función]) --> F2[/Imprimir: ESIME ZACATENCO.../]
        F2 --> F3([Retorno Implícito])
    end

    %% Conexión Lógica (Llamada y Retorno)
    M2 -.-> F1
    F3 -.-> M3

    %% Estilos Profesionales
    classDef terminador fill:#ffffff,stroke:#333,stroke-width:2px;
    classDef accion fill:#ffe6cc,stroke:#000,stroke-width:1px;
    classDef entradaSalida fill:#fff9c4,stroke:#fbc02d,stroke-width:1px;
    classDef contenedor fill:#f9f9f9,stroke:#666,stroke-dasharray: 5 5;

    class M1,M4,F1,F3 terminador;
    class M2,M3 accion;
    class F2 entradaSalida;
    class Programa_Principal,Definicion_Funcion contenedor;
```

## [Funciones con retorno](./10%20-%2002%20-%20FuncionesConRetorno.c)

Es una función la cual regresa algún valor dentro de su encapsulado, está dada por:

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// PROTOTIPO(S) DE FUNCION(ES)
tipoDato nombreDeLaFuncion(Parametros);

// FUNCIÓN PRINCIPAL
int main(){
    // Código en C
    return 0;
}
// FUNCION(ES)
tipoDato nombreDeLaFuncion(Parametros){
    // Código en la función (instrucciones).
}
```

El siguiente ejemplo permite realizar la suma de dos números gracias a las funciones.

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// PROTOTIPO(S) DE FUNCION(ES)
int Sumar(int n1, int n2);

// FUNCIÓN PRINCIPAL
int main() {
    int a, b;
    printf("De el 1er numero: "); scanf("%i", &a);
    printf("De el 2do numero: "); scanf("%i", &b);
    printf("La suma de %i y %i es: %i", a, b, Sumar(a, b));
    return 0;
}

// FUNCION(ES)
int Sumar(int n1, int n2) {
    int Suma = 0;
    Suma = n1 + n2;
    return Suma;
}
```

Siendo su diagrama de flujo el siguiente:

```mermaid
flowchart TD
    %% Flujo del Programa Principal
    subgraph Programa_Principal [int main]
        M1([Inicio]) --> M2[/Leer a, b/]
        M2 --> M3[Llamada: Sumar a, b]
        M3 --> M4[/Imprimir Resultado/]
        M4 --> M5[return 0]
        M5 --> M6([Fin])
    end

    %% Definición de la Función con Retorno y Parámetros
    subgraph Definicion_Funcion [int Sumar]
        direction TB
        F1([Inicio de Función]) --> F2[Recibir n1, n2]
        F2 --> F3[Suma = n1 + n2]
        F3 --> F4{{return Suma}}
        F4 --> F5([Salida de Función])
    end

    %% Conexiones de Control (Paso de Parámetros y Retorno)
    M3 -.-> F1
    F5 -.-> M3

    %% Estilos Profesionales para Typora
    classDef terminador fill:#ffffff,stroke:#333,stroke-width:2px;
    classDef accion fill:#ffe6cc,stroke:#000,stroke-width:1px;
    classDef entradaSalida fill:#fff9c4,stroke:#fbc02d,stroke-width:1px;
    classDef retorno fill:#e8f5e9,stroke:#2e7d32,stroke-width:2px;
    classDef contenedor fill:#f9f9f9,stroke:#666,stroke-dasharray: 5 5;

    class M1,M6,F1,F5 terminador;
    class M3,M5,F2,F3 accion;
    class M2,M4 entradaSalida;
    class F4 retorno;
    class Programa_Principal,Definicion_Funcion contenedor;
```



Regresar al menú anterior [click auí](../00%20-%20Fundamentos.md).

Regresar al inicio [click auí](../../Inicio.md).
