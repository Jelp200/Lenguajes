# Estructuras :construction:
Una estrctura puede ser vista como un grupo de elementos los cuales están bajo un solo nombre para un manejo conveniente, una 
estructura puede definirse de la siguiente manera:
```C
struct nombreEstructura{
    tipoDato_Miembro nombreMiembro;
};
```

Tenemos dos tipos de declaraciones habituales para definir una variable tipo estructura:
### 1er forma
```C
// Definicion de una variable tipo estructura despues de la estructura.
struct nombreEstructura{
    tipoDato_Miembro1 nombreMiembro1;
    tipoDato_Miembro2 nombreMiembro2;
    tipoDato_MiembroN nombreMiembroN;
} nombreVariableEstructura1, nombreVariableEstructura2;
```
### 2da forma
```C
// Definicion de una variable tipo estructura aparte de la estrctura.
struct nombreEstructura{
    tipoDato_Miembro1 nombreMiembro1;
    tipoDato_Miembro2 nombreMiembro2;
    tipoDato_MiembroN nombreMiembroN;
};

struct nombreEstructura nombreVariableEstructura;
```

Para poder ingresar datos en estas estructuras podemos hacerlo de dos maneras diferentes:
### 1er forma (operador .)
```C
nombreVariableEstructura.nombreMiembro = valor;
```
### 2da forma (operador ->)
```C
punteroEstructura -> nombreMiembro = valor;
```

Y para poder visualizar o recuperar los datos de estas estrcturas podemos hacerlo de dos maneras diferentes:
### 1er forma (asignación por variables)
```C
nombreVariable = nombreVariableEstructura.nombreMiembro;
nombreVariable = punteroEstructura -> nombreMiembro;

```
### 2da forma (printf o puts)
```C
printf(“%tipoDato”, nombreVariableEstructura.nombreMiembro);
printf(“%tipoDato”, punteroEstructura -> nombreMiembro);
```

## Typedef :label:
Un elemento importante que nos puede ayudar a simplificar las estructuras es la palabra reservada typedef la cual nos
permite crear un alias a un tipo de dato existente, y sabemos que las estructuras son tratadas como cualquier otro tipo de
dato en C (solo que dichos datos son de tipo complejo).

Para poder definir un uevo tipo de dato para una estrctura debemos de tener una estrctura ya creada y tener la siguiente
línea de código:
```C
typedef struct nombreEstructura nuevoNombre;
```

Y así nos evitamos escribir por cada vez que necesitemos declarar una variable de este tipo lo siguiente:
 ```C
struct nombreEstructura nombreVariableEstructura;
```

## Arreglos de estructuras :package:
Los arreglos de estructuras nos permiten almacenar diversos valores de diferentes tipos todos juntos, agrupados en si como
estructuras.
```C
struct nombreEstructura{
    tipoDato_Miembro1 nombreMiembro1;
    tipoDato_Miembro2 nombreMiembro2;
    tipoDato_MiembroN nombreMiembroN;
} nombreVariableEstructura[n];
```

O tambien:
```C
struct nombreEstructura{
    tipoDato_Miembro1 nombreMiembro1;
    tipoDato_Miembro2 nombreMiembro2;
    tipoDato_MiembroN nombreMiembroN;
};

struct nombreEstructura nombreVariableEstructura[n];
```

Así podemos ver que asignamos un arreglo de "n" elementos. Para poder acceder a los miembros es necesario hacer lo siguiente:
```C
strcpy(nombreVariableEstructura[n].nombreMiembroN, “Cadena de texto”);
nombreVariableEstructura[n].nombreMiembroN = valor;
```

## Estructuras anidadas :heavy_plus_sign:
Las estructuras anidadas nos permiten ahorarnos código ya que en algunas ocasiones tenemos miembros en común dentro de las
estructuras, su sintaxis es la siguiente:
```C
struct miembrosComunes{
    tipoDato_Miembro1 nombreMiembro1;
    tipoDato_Miembro2 nombreMiembro2;
    tipoDato_MiembroN nombreMiembroN;
};

typedef struct miembrosComunes miembrosComunes;

// Incorporamos la estructura en otras.
struct estructuraAnidada1{
    tipoDato_Miembro1 nombreMiembro1;
    tipoDato_Miembro2 nombreMiembro2;
    tipoDato_MiembroN nombreMiembroN;
    miembrosComunes nombreMiembroAnidado1;
};

struct estructuraAnidadaN{
    tipoDato_Miembro1 nombreMiembro1;
    tipoDato_Miembro2 nombreMiembro2;
    tipoDato_MiembroN nombreMiembroN;
    miembrosComunes nombreMiembroAnidadoN;
};
```

# Uniones :reunion:
Las uniones son una estructura para poder ahorrar espacio de memoria, podemos declararlas de la siguiente manera
```C
union nombreUnion{
    tipoDato_Miembro nombreMiembro;
};
```

Tenemos dos tipos de declaraciones habituales para definir una variable tipo union:
### 1er forma
```C
// Definicion de una variable tipo union despues de la union.
union nombreUnion{
    tipoDato_Miembro1 nombreMiembro1;
    tipoDato_Miembro2 nombreMiembro2;
    tipoDato_MiembroN nombreMiembroN;
} nombreVariableUnion, nombreVariableUnion;
```
### 2da forma
```C
// Definicion de una variable tipo union aparte de la union.
union nombreUnion{
    tipoDato_Miembro1 nombreMiembro1;
    tipoDato_Miembro2 nombreMiembro2;
    tipoDato_MiembroN nombreMiembroN;
};

union nombreUnion nombreVariableUnion;
```

Para poder ingresar datos en estas uniones podemos hacerlo de dos maneras diferentes:
### 1er forma (operador .)
```C
nombreVariableUnion.nombreMiembro = valor;
```
### 2da forma (operador ->)
```C
punteroUnion -> nombreMiembro = valor;
```

Y para poder visualizar o recuperar los datos de estas estrcturas podemos hacerlo de dos maneras diferentes:
### 1er forma (asignación por variables)
```C
nombreVariable = nombreVariableUnion.nombreMiembro;
nombreVariable = punteroUnion -> nombreMiembro;

```
### 2da forma (printf o puts)
```C
printf(“%tipoDato”, nombreVariableUnion.nombreMiembro);
printf(“%tipoDato”, punteroUnion -> nombreMiembro);
```