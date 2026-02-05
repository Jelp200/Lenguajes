# ESTRUCTURAS DE SELECCION :question:

Las estructuras de selección `switch – case` a diferencia se la estructura condicional `if`, son estructuras las cuales tener múltiples casos y de estos múltiples casos poder seleccionar uno que cumpla la condición de dicho caso, una analogía muy utilizada en las estructuras de selección es la de un menú, su diagrama de flujo y declaración están dados de la siguiente manera:

```mermaid
flowchart LR
    %% Nodos principales
    Start([Inicio]) --> Prep{{Preparación}}
    Prep --> C1{Caso 1}
    
    %% Ramas de Casos
    C1 -- Sí --> P1[Proceso]
    C1 -- No --> Cn{Caso 'n'}
    Cn -- Sí --> Pn[Proceso]
    Cn -- No --> Pd[Proceso error/default]
    
    %% Convergencia a Fin
    P1 --> End([Fin])
    Pn --> End
    Pd --> End

    %% Configuración de Estilos Profesionales
    classDef terminador fill:#ffffff,stroke:#333,stroke-width:2px;
    classDef preparacion fill:#f3e5f5,stroke:#7b1fa2,stroke-width:1px;
    classDef logica fill:#d1e6ff,stroke:#000;
    classDef accion fill:#ffe6cc,stroke:#000;

    class Start,End terminador;
    class Prep preparacion;
    class C1,Cn logica;
    class P1,Pn,Pd accion;

    %% Estilos de flechas
    linkStyle 2,4 stroke:#4caf50,stroke-width:2px;
    linkStyle 3,5 stroke:#f44336,stroke-width:2px;
```

```C
switch(preparacion){
    case 1: // Código case 1;
        break;
    // …
    case n: // Código case n;
        break;
    default: // Código default;
        break;
}
```

Código de ejemplo [click aquí](./08%20-%2001%20-%20switchCase.c).

Regresar al menú anterior [click auí](../00%20-%20Fundamentos.md).

Regresar al inicio [click auí](../../Inicio.md).
