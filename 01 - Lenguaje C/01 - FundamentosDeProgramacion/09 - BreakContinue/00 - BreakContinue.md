# BREAK Y CONTINUE :croissant:

`break` y `continue` actúan como sentencias de control dentro del código, ya que estas dos sentencias permiten tanto terminar/romper o continuar una secuencia de comandos dentro del código.

```mermaid
flowchart TD
    %% Nodos
    A([Inicio]) --> B[i = 0]
    B --> C{i < n}
    
    subgraph Cuerpo [Ámbito del Ciclo]
        direction TB
        C -- "Sí" --> D{¿Continue?}
        
        %% Flujo de Continue: Verde
        D -- "Sí" --> E[i++]
        E -- "Retorno" --> C
        
        %% Flujo de Break: Rojo
        D -- "No" --> F{¿Break?}
        F -- "Sí" ----> G
    end
    
    %% Flujo Normal y Salidas
    F -- "No" --> H[Proceso Principal]
    H --> E
    
    C -- "No" --> G([Fin])

    %% Estilos de Nodos
    classDef terminador fill:#ffffff,stroke:#333,stroke-width:2px;
    classDef logica fill:#d1e6ff,stroke:#000;
    classDef accion fill:#ffe6cc,stroke:#000;
    classDef control fill:#f5f5f5,stroke:#999,stroke-dasharray: 5 5;

    class A,G terminador;
    class C,D,F logica;
    class H accion;
    class B,E control;

    %% ESTILOS DE FLECHAS
    linkStyle default stroke-width:1px;
```



## Break

Terminan una iteración (repetición) dada por el programa y de igual manera rompe el ciclo completo dentro del programa o sección de código en cuestión (termina el programa).

## Continue

Terminan una iteración (repetición) y pasa a la siguiente iteración en seguida a la terminada, en sí, rompe el programa o sección de código en el sector indicado y lo siguiente después de ese sector (no termina el programa).

Código de ejemplo [click aquí](./09%20-%2001%20-%20breakContinue.c).



Regresar al menú anterior [click auí](../00%20-%20Fundamentos.md).

Regresar al inicio [click auí](../../Inicio.md).
