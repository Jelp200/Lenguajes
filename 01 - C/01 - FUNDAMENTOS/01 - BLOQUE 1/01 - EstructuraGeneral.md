# ESTRUCTURA GENERALD DE UN PROGRAMA EN C :croissant:
Programar en C es muy facil, para ello es muy importante saber el como se estructura un programa en C, su estructura básica esta dada por las siguientes partes:

### 1. Encabezado.
En esta parte del programa nosotros tendremos la oportunidad de describir nuestro programa, el nombre del archivo, el sistema operativo, las herramientas utilizadas y demás cosas que nosotros creamos necesarias para que cualquier otro programador/ingeniero sepa de lo que va nuestro código o programa.

### 2. Directivas de preprocesador.
Las directivas de preprocesador o librerias son todas aquellas las cuales nos ayudarán a programar, como su nombre lo dice, son "librerias" las cuales nos permiten mandar a llamar ya sea funciones u otro tipo de herramientas las cuales necesitemos para poder dar solución a nuestros programas. Estas directivas o librerias pueden venir implicitas en el propio lenguaje de programación o nosotros mismos podemos crear librerias para soluciones especificas.

### 3. Función principal.
La función principal como su nombre nos dice es aquella función la cual nos permitira ejecutar el programa.

### Estructura.
Una vez conociendo las partes de la estructura juntemoslas y veamos como se estructura nuestro programa basico en C.
```C
/*
** #########################################################################################
**      Archivo: 01 - EstructuraGeneral.md
**      SO: GNU/Linux
**      Herramienta: Visual Studio Code
**      Notas:
**          En este archivo veremos la estructura general de un programa en C.
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

###### <b><i>Nota.</i></b> Podemos observar que tenemos comentarios multilinea (/* ... */) y comentarios de una sola linea (//).