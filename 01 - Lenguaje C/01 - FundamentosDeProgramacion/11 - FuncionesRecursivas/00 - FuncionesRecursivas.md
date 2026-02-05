# FUNCIONES RECURSIVAS EN C :package:

Las funciones recursivas, como su nombre lo dice, son funciones que se vuelven a llamar o acuden a ellas de nuevo, es así que se tienen dos tipos de funciones en C, el caso "base" y el caso recursivo, la estructura de una función recursiva está dada por:

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
    nombreDeLaFuncion(Parametros);
    // Código en la función (instrucciones).
}
```

A continuación, el siguiente ejemplo permite visualizar la factorial de un número gracias a la recursividad de las funciones.

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// PROTOTIPO(S) DE FUNCION(ES)
long Factorial(int a);

// FUNCIÓN PRINCIPAL
int main(){
    int n;
    printf("Escriba un numero: "); scanf("%d", &n);
    printf("\nEl factorial de %d es: %d", Factorial(n));
    return 0;
}

// FUNCION(ES)
long Factorial(int a){
    if(a <= 1) return 1;
    else return (a * Factorial(a - 1));
}
```

```mermaid
flowchart TD
    %% Flujo Principal
    subgraph Main [int main]
        M1([Inicio]) --> M2[/Leer n/]
        M2 --> M3[Llamada: Factorial n]
        M3 --> M4[/Imprimir Resultado/]
        M4 --> M5[return 0]
        M5 --> M6([Fin])
    end

    %% Función Recursiva
    subgraph Recursion [long Factorial]
        direction TB
        F1([Inicio de Función]) --> F2{¿a <= 1?}
        
        %% Caso Base
        F2 -- "Sí (Caso Base)" --> F3{{return 1}}
        
        %% Caso Recursivo
        F2 -- "No" --> F4[Preparar: a - 1]
        F4 --> F5[Llamada Recursiva: Factorial]
        F5 --> F6[Calcular: a * Resultado]
        F6 --> F7{{return resultado}}
        
        F3 --> F8([Salida])
        F7 --> F8
    end

    %% Conexiones de Control
    M3 -.-> F1
    F8 -.-> M3
    F5 -.-> F1

    %% Estilos Profesionales
    classDef terminador fill:#ffffff,stroke:#333,stroke-width:2px;
    classDef logica fill:#d1e6ff,stroke:#000;
    classDef accion fill:#ffe6cc,stroke:#000;
    classDef retorno fill:#e8f5e9,stroke:#2e7d32,stroke-width:2px;
    classDef contenedor fill:#f9f9f9,stroke:#666,stroke-dasharray: 5 5;

    class M1,M6,F1,F8 terminador;
    class F2 logica;
    class M3,M5,F4,F5,F6 accion;
    class M2,M4 entradaSalida;
    class F3,F7 retorno;
    class Main,Recursion contenedor;
```

El proceso del código es el siguiente para `n = 3`:

```mermaid
flowchart TD
    %% Inicio del Programa
    Start([Inicio]) --> Read[/Leer n = 3/]
    Read --> Call1[Llamada: Factorial 3]

    %% Stack Frame 1: a = 3
    subgraph Frame3 [Factorial con a = 3]
        direction TB
        F3_Cond{¿3 <= 1?} -- No --> F3_Rec[3 * Factorial 2]
    end

    %% Stack Frame 2: a = 2
    subgraph Frame2 [Factorial con a = 2]
        direction TB
        F2_Cond{¿2 <= 1?} -- No --> F2_Rec[2 * Factorial 1]
    end

    %% Stack Frame 3: a = 1 (Caso Base)
    subgraph Frame1 [Factorial con a = 1]
        direction TB
        F1_Cond{¿1 <= 1?} -- Sí --> F1_Ret{{return 1}}
    end

    %% Retornos de Valores
    F3_Rec --> F3_Fin{{return 6}}
    F2_Rec --> F2_Fin{{return 2}}
    
    %% Conexiones de la Pila
    Call1 -.-> F3_Cond
    F3_Rec -.-> F2_Cond
    F2_Rec -.-> F1_Cond
    
    %% Regreso de Valores
    F1_Ret -- "retorna 1" --> F2_Rec
    F2_Fin -- "retorna 2" --> F3_Rec
    F3_Fin -- "retorna 6" --> Print[/Imprimir: 6/]
    
    Print --> End([Fin])

    %% Estilos Profesionales
    classDef terminador fill:#ffffff,stroke:#333,stroke-width:2px;
    classDef logica fill:#d1e6ff,stroke:#000;
    classDef accion fill:#ffe6cc,stroke:#000;
    classDef retorno fill:#e8f5e9,stroke:#2e7d32,stroke-width:2px;
    classDef stack fill:#f9f9f9,stroke:#666,stroke-dasharray: 5 5;

    class Start,End,Frame1,Frame2,Frame3 stack;
    class F3_Cond,F2_Cond,F1_Cond logica;
    class Read,Print entradaSalida;
    class F1_Ret,F2_Fin,F3_Fin retorno;
```

Se puede observar que en primera instancia se llama a la función factorial de 3, se evalúa el valor dado por el usuario dentro de ella y el valor dado por el usuario se multiplica por la función factorial de `3 - 1`, ósea, la función factorial de 2, al hacer esto es necesario calcular el factorial de 2 y a su vez, el factorial de 1, una vez calculados el factorial de `n - 1`  lo que se hace es multiplicar el resultado de cada factorial calculado por la función, siendo así que el factorial de 3 es igual a 6.

Ahora bien, si se desea visualizar los resultados de los números que participan activamente en dicha factorial, se hace lo siguiente:

```C
// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// PROTOTIPO(S) DE FUNCION(ES)
long Factorial(int a);

// FUNCIÓN PRINCIPAL
int main(){
    int n;
    printf("Escriba un numero: "); scanf("%d", &n);
    for(int i = 0;i <= n; i++){
        printf("\nEl factorial de %d es: %d", i, Factorial(n));
    }
    return 0;
}

// FUNCION(ES)
long Factorial(int a){
    if(a <= 1) return 1;
    else return (a * Factorial(a - 1));
}
```

```mermaid
flowchart TD
    %% Bloque Principal
    Start([Inicio]) --> Init[i = 0]
    Init --> Cond_i{i <= n}
    
    subgraph Bucle_For [Ciclo de Impresión]
        direction TB
        Cond_i -- Sí --> Call[Llamada: Factorial i]
        
        %% Salto a la Recursión
        subgraph Funcion_Recursiva [long Factorial]
            direction TB
            R_Base{a <= 1} -- Sí --> R_Base_Ret{{return 1}}
            R_Base -- No --> R_Rec[a * Factorial a-1]
        end
        
        Call -.-> R_Base
        R_Base_Ret -.-> Print
        R_Rec -.-> Print[/Imprimir Resultado/]
        
        Print --> Inc_i[i++]
        Inc_i --> Cond_i
    end
    
    Cond_i -- No --> End_Main[return 0]
    End_Main --> Fin([Fin])

    %% Estilos Profesionales
    classDef terminador fill:#ffffff,stroke:#333,stroke-width:2px;
    classDef logica fill:#d1e6ff,stroke:#000;
    classDef accion fill:#ffe6cc,stroke:#000;
    classDef retorno fill:#e8f5e9,stroke:#2e7d32,stroke-width:2px;
    classDef contenedor fill:#f9f9f9,stroke:#666,stroke-dasharray: 5 5;

    class Start,Fin,R_Base_Ret terminador;
    class Cond_i,R_Base logica;
    class Call,Print,Inc_i,Init,End_Main accion;
    class R_Rec retorno;
    class Bucle_For,Funcion_Recursiva contenedor;
```

Se puede observar que los códigos anteriormente vistos llaman a la función factorial y una vez hecho esto la misma función se llama a si misma para poder realizar las operaciones correspondientes dentro del programa.

Regresar al menú anterior [click auí](../00%20-%20Fundamentos.md).

Regresar al inicio [click auí](../../Inicio.md).
