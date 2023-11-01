# BLUEPILL C :croissant: :large_blue_circle:
Como hemos dicho, la Blue Pill es un uControlador el cual nos da la facilidad de crear código en C para poder dar soluciones a multiples tareas o
problemas los cuales tengamos, todo esto a un muy bajo costo.

A diferencia de la programación pura en C, la programación en C para uControladores no es muy complicada pero si es necesario conocer las caracteristicas
del uControlador que deseemos programar para así evitarnos problemas y tener soluciones eficientes y efectivas, para ello necesitamos ir a las hojas de
datos o datasheet y visualizar todo lo que querramos conocer de nuestro uControlador. En este caso podremos conseguir la datasheet de la blue pill en la
página de su fabricante.

- <a href="/01 - BLUEPILL/01 - 00 - Extras/stm32f103c8.pdf">Datasheet SMT32F103x8</a>

Una vez conociendo las caracteristicas electricas de nuestro uControlador, sus puertos, registros, etc., podemos comenzar a programar nuestro uControlador
y dar soluciones a diferentes problemas. 

### Creación y configuración de un proyecto en uVision.
Para poder comenzar a programar nuestra bluepill utilizaremos uVision IDE, este IDE nos permitira trabajar de una muy buena manera con nuestro uC, pero de
igual manera podemos trabajar con el IDE de ST, que a diferencia de uVision el STM32-CubeIDE tendra interfaces graficas para poder realizar configuraciones,
lo cual uVision no tiene.

Creación de un proyecto en uVision:
```txt
Project
└──> New uVision Project
     └──> Elegimos/Creamos la carpeta donde se almacenara el proyecto
          └──> Nombramos el archivo
               └──> Guardar
```
Configuración de un proyecto en uVision:
```txt
Seleccionamos el dispositivo (STM32F103C8)
├──> CMSIS (CORE)
└──> Device (STARTUP)
     └──> TsdPeriph Drivers (Framework, GPIO, RCC)
          └──> Ok
```
Una vez teniendo nuestro proyeto lo que haremos sera crear un archivo principal donde ira nuestro código, para ello hacemos lo siguiente:
```txt
Abrimos la carpeta Target 1
└──> Click derecho en Source Group 1 y seleccionamos "Add New Item Group"
     └──> Seleccionamos C File (.c) y nombramos el archivo como "main.c"
          └──> Add
```

### Estructura de un programa en C para uControladores.
```C
/* ##########################################################################
############################## I N C L U D E S ############################## 
########################################################################## */
#include <libreriasNecesarias.h>

/* °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° D E F I N E (S) °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° */
#define VARIABLE valor

/* --------------------------------------------------------------------------
-------------------- V A R I A B L E S   G L O B A L E S --------------------
-------------------------------------------------------------------------- */
const int variableGlobal;

/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++ P R O T O T I P O (S)   D E   F U N C I O N E S ++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
void funciones(int parametrosFunciones);

/* ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||| F U N C I O N   P R I N C I P A L |||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| */
int main(void){
    /*
    ...
    Código en C
    ...
    */

    // Bucle infinito que el uControlador ejecutara
    while(1){
        /*
        ...
        Código en C que el uControlador ejecutara
        ...
        */
    }
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ F U N C I O N E S ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
void funciones(int parametrosFunciones){
	/*
    ...
    Código en C
    ...
    */
}
```
### Recomendaciones.
Es recomendable que anes de comenzar a programar tener un diagrama de flujo y un diagrama electrico (si es necesario) para poder dar solucion a nuestro
problema.