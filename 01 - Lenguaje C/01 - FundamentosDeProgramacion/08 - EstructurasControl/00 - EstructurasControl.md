# ESTRUCTURAS DE CONTROL :military_helmet:

Las estructuras de control como su nombre lo dice, son estructuras que permiten realizar un control de una parte o bloques de código siempre y cuando se cumplan ciertas condiciones.

## [While](./10%20-%2001%20-%20while.c)

La estructura de control `while` (mientras) permite realizar una acción mientras se cumpla su condición inicial, su diagrama de flujo y declaración son:

```C
while(condicion_a_cumplir) {
    // Proceso ciclico a realizar si se cumple la condición
}
```

```mermaid
flowchart LR
	%% Definicion de nodos
	A([Inicio]) --> B{Condicion}
	B -- Si --> C[Proceso]
	C --> B
	
	%% Camino de salida (No)
	B -- No --> D([Fin])
	
	%% Estilos
	classDef terminador fill:#ffffff,stroke:#333,stroke-width:2px;
    classDef decision fill:#d1e6ff,stroke:#000,stroke-width:1px;
    classDef proceso fill:#ffe6cc,stroke:#000,stroke-width:1px;
    
    class A,D terminador;
    class B decision;
    class C proceso
    
    %% Colores de flechas
    linkStyle 1 stroke:green,stroke-width:2px,color:green;
    linkStyle 3 stroke:red,stroke-width:2px,color:red;
```

## [Do/While](./10%20-%2002%20-%20doWhile.c)

La estructura de control `do – while` (hacer mientras) a diferencia de la estructura de control `while`, realiza un bucle el cual se rompe si una condición dada por el programador o el usuario se cumple, su diagrama de flujo y declaración están dados de la siguiente manera:

```C
do {
    // Proceso ciclico a realizar si se cumple la condición
} while(condicion_a_cumplir);
```

```mermaid
flowchart LR
	%% Definicion de Nodos
	A([Inicio]) --> B[Proceso]
	B --> C{Condicion}
	C -- No --> B
	
	%% Caminos de salida (No)
    C -- Si --> E([Fin])
    
    %% Estilos
	classDef terminador fill:#ffffff,stroke:#333,stroke-width:2px;
    classDef decision fill:#d1e6ff,stroke:#000,stroke-width:1px;
    classDef proceso fill:#ffe6cc,stroke:#000,stroke-width:1px;
    
    class A,E terminador;
    class C decision;
    class B proceso
    
    %% Colores de flechas
    linkStyle 3 stroke:green,stroke-width:2px,color:green;
    linkStyle 2 stroke:red,stroke-width:2px,color:red;
```

## [For](./10%20-%2003%20-%20for.c)

El ciclo `for` (para) es un bucle el cual permite realizar un código para ciertas condiciones iniciales declaradas `n` número de veces.

Algo importante que destacar es que estos ciclos `for` permiten ingresar datos dentro de un arreglo de tamaño `n`, por lo cual para poder llenar dicho arreglo lo que se hace es que el ciclo o bucle recorre cada elemento del arreglo para poder llenarlo con su respectivo dato, su diagrama de flujo y declaración están dados de la siguiente manera:

```mermaid
flowchart LR
    %% Nodos
    Start([Inicio]) --> Init[i = 'n']
    Init --> Loop{i <, > o = Limite}
    
    %% Cuerpo
    Loop -- Si --> Body[Proceso]
    Body --> Next[Incremento o Decremento]
    Next --> Loop
    
    %% Salida
    Loop -- No ----> End([Fin])

    %% Estilos Profesionales para Typora
    classDef terminador fill:#ffffff,stroke:#333,stroke-width:2px;
    classDef logica fill:#d1e6ff,stroke:#000;
    classDef accion fill:#ffe6cc,stroke:#000;
    classDef control fill:#f5f5f5,stroke:#999,stroke-dasharray: 5 5;

    class Start,End terminador;
    class Loop logica;
    class Body accion;
    class Init,Next control;

    %% Flechas
    linkStyle 2 stroke:green,stroke-width:2px;
    linkStyle 5 stroke:red,stroke-width:2px;
```

Se puede observar que para poder utilizar un ciclo al menos en el lenguaje de programación C/C++ es necesario tener una variable la cual permite controlar dicho ciclo, la mayoría de las veces por convicción esta variable es llamada `i`, está `i` comenzara desde algún lugar y llega a otro, y siempre dará ciertos pasos, ya sea hacía atrás o hacía adelante.

```C
for(inicializacion; condicion; pasos){
    // ...
    // Código a ejecutarse dentro del ciclo
    // ...
}
```

## [For Anidados](./10%20-%2003%20-%20for.c)

Al igual que las estructuras condicionales `if`, los ciclos `for` de igual manera pueden ser anidados, su diagrama de flujo y declaración están dados de la siguiente manera:

- Dos ciclos for anidados:

```mermaid
flowchart LR
    %% Nodos Ciclo Externo
    Start([Inicio]) --> Init_i[i = 'n']
    Init_i --> Loop_i{i < Limite_i}
    
    %% Subgrafo para el Ciclo Interno
    subgraph Ciclo_Interno [Alcance del Ciclo Externo]
        direction TB
        Init_j[j = 'm'] --> Loop_j{j < Limite_j}
        
        %% Cuerpo y Control Interno
        Loop_j -- Si --> Body[Proceso Principal]
        Body --> Next_j[Incremento j]
        Next_j --> Loop_j
    end

    %% Conexiones entre ciclos
    Loop_i -- Si --> Init_j
    Loop_j -- No --> Next_i[Incremento i]
    Next_i --> Loop_i

    %% Salida Final
    Loop_i -- No ----> End([Fin])

    %% Estilos Profesionales para Typora
    classDef terminador fill:#ffffff,stroke:#333,stroke-width:2px;
    classDef logica fill:#d1e6ff,stroke:#000;
    classDef accion fill:#ffe6cc,stroke:#000;
    classDef control fill:#f5f5f5,stroke:#999,stroke-dasharray: 5 5;

    class Start,End terminador;
    class Loop_i,Loop_j logica;
    class Body accion;
    class Init_i,Next_i,Init_j,Next_j control;

    %% Flechas de Control (Sí = Verde, No = Rojo)
    linkStyle 2,4 stroke:green,stroke-width:2px;
    linkStyle 7,9 stroke:red,stroke-width:2px;
```



- Tres ciclos for anidados:

```mermaid
flowchart TD
    %% Nodos Raíz
    Start([Inicio]) --> Init_i[i = 'n']
    Init_i --> Loop_i{i < Limite_i}

    subgraph Ciclo_i [Nivel Externo: i]
        direction TB
        
        subgraph Ciclo_j [Nivel Medio: j]
            direction TB
            Init_j[j = 'm'] --> Loop_j{j < Limite_j}
            
            subgraph Ciclo_k [Nivel Interno: k]
                direction TB
                Init_k[k = 'p'] --> Loop_k{k < Limite_k}
                
                %% Nodos de Proceso e Incremento k
                Loop_k -- Si --> Body[Proceso Principal]
                Body --> Next_k[Incremento k]
                Next_k --> Loop_k
            end
            
            %% Control del Ciclo j
            Loop_j -- Si --> Init_k
            Loop_k -- No --> Next_j[Incremento j]
            Next_j --> Loop_j
        end
        
        %% Control del Ciclo i
        Loop_i -- Si --> Init_j
        Loop_j -- No --> Next_i[Incremento i]
        Next_i --> Loop_i
    end

    %% Salida Final
    Loop_i -- No ----> End([Fin])

    %% Estilos Profesionales
    classDef terminador fill:#ffffff,stroke:#333,stroke-width:2px;
    classDef logica fill:#d1e6ff,stroke:#000;
    classDef accion fill:#ffe6cc,stroke:#000;
    classDef control fill:#f5f5f5,stroke:#999,stroke-dasharray: 5 5;

    class Start,End terminador;
    class Loop_i,Loop_j,Loop_k logica;
    class Body accion;
    class Init_i,Next_i,Init_j,Next_j,Init_k,Next_k control;

    %% --- CORRECCIÓN DE ÍNDICES ---
    %% Verdes (Caminos "Si"): 2, 4, 6
    linkStyle 2,4,6 stroke:green,stroke-width:2px,color:green;
    %% Rojos (Caminos "No"): 9, 11, 13
    linkStyle 9,11,13 stroke:red,stroke-width:2px,color:red;
```

```C
for(inicializacion_1; condicion_1; pasos) {
    for(inicializacion_2; condicion_2; pasos) {
        for(inicializacion_n; condicion_n; pasos) {
            // Código a ejecutarse dentro del ciclo “n”
        }
         // Código a ejecutarse dentro del ciclo 2
    }
     // Código a ejecutarse dentro del ciclo 2
}
```

Algo importante a denotar es que por convicción después de utilizar la variable `i` dentro de un ciclo se utilizara las siguientes letras del abecedario para poder utilizarlas en los otros ciclos (`j`, `k`, etc.).

Regresar al menú anterior [click auí](../00%20-%20Fundamentos.md).

Regresar al inicio [click auí](../../Inicio.md).
