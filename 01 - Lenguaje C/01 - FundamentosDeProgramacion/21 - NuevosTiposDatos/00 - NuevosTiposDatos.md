# NUEVOS TIPOS DE DATOS EN C :floppy_disk:

## Introducción

Cuando cse comienza a trabajar de una manera más profesional con C es posible que se necesite crear tipos de datos que el programador rquiera, para ello se tiene:

### <a href="21 - 01 - Typedef.c">Tipos de datos definidos</a>

Los tipos de datos definidos por el usuario `typedef` permiten crear sinónimos de tipos de datos previamente ya definidos, su sintaxis está dada por:

```C
typedef tipoDato nuevoTipoDeDato;
```

Por ejemplo, si en vez de utilizar la palabra reservada `int` para saber que es un tipo de dato entero, se puede hacer lo siguiente:

```C
typedef int entero;
```

Lo que C hace es que cuando el programador escribe "entro" el programa identificara que realmente se esta definiendo una variable tipo entera, pero con otra definición.
Por lo regular los tipos de datos definidos por el usuario son utilizados cuando se pretende manejar tipos de datos complejos, ósea, estructuras, un ejemplo es el siguiente:

```C
typedef struct{
    int dia;
    int mes;
    int anho;
} fecha;
fecha fechaHoy;
fecha fechaNacimiento;
```

### Tipos de datos supercomplejos

Como bien se ha visto, un dato complejo es aquel el cual está compuesto por otros tipos de datos, por ejemplo, un arreglo, estructura y unión. Pero es completamente valido que los datos que componen a un tipo de dato complejo sean a su vez de tipo complejo, entonces, es posible tener un arreglo de estructuras, o una estructura cuyos miembros sean arreglo u otras estructuras.
Por ejemplo, se tiene el siguiente vector cuyos elementos son estructuras:

```C
struct fecha{
    int dia;
    int mes;
    int anho;
};
struct fecha listaFechas[100];
```

La variable denominada `listaFechas` es un vector de 100 elementos en donde cada elemento es una estructura la cual contiene todos los miembros definidos en la estructura. Para poder acceder al miembro `anho` del elemento 13 del arreglo y poder asignarle el valor de 16, se hace lo siguiente:

```C
listaFechas[13].anho = 16;
```

Otro caso es el de las estructuras anidadas, por ejemplo:

```C
struct fecha{
    int dia;
    int mes;
    int anho;
};
struct hora{
    int Hr;
    int Min;
    int Seg;
};
struct calendario{
    struct fecha Fecha;
    struct hora Hora;
};
struct calendario fechaHoy;
```

Y si se desea acceder a los miembros se tendría lo siguiente:

```C
fechaHoy.Fecha.dia = 11;
fechaHoy.Fecha.mes = 7;
fechaHoy.Fecha.anho = 2024;
fechaHoy.Hora.Hr = 14;
fechaHoy.Hora.Min = 30;
fechaHoy.Hora.Seg = 45;

```

Como se puede observar, es necesario llamar a la variable de la estructura la cual se desea modificar y a su respectivo miembro.

Regresar al menú de fundamentos <a href="../../01 - FundamentosDeProgramacion/00 - Fundamentos.md">Click aquí</a>.
