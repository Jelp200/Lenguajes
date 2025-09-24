# ESTRUCTURA GENERAL DE UN PROGRAMA EN C :croissant:

Programar en el lenguaje C es muy sencillo; para ello es importante saber el como se estructura de forma general un programa en C, su estructura básica esta dada por las siguientes partes:

## Estructura

```C
/*
** #########################################################################################
**      Archivo: 01 - EstructuraGeneral.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>

// FUNCION PRINCIPAL
int main(void){
    /*
        ...
        Código en C
        ...
    */
    return 0;
}
```

### 1. Descripción del programa

En esta parte del programa se tiene la oportunidad de describir el programa; nombre del archivo, sistema operativo, herramientas utilizadas y demás cosas importantes que se crea necesaria para que cualquier otro programador/ingeniero sepa de lo que va el código o programa.

### 2. Directivas de preprocesador

Las directivas de preprocesador tambien llamadas headers, librerias o archivos de cabecera, son todas aquellas funciones que el programa necesita para poder trabajar de forma optima.

### 3. Función principal

La función principal es aquella en la cual se tendrá el bloque de código principal del programa.

###### **_Nota._** Es posible observar que se tienen comentarios multilinea (/* ... */) y comentarios de una sola linea (//).

Regresar al menú de fundamentos <a href="../01 - FundamentosDeProgramacion/00 - Fundamentos.md">Click aquí</a>.