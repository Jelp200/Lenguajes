# BLUEPILL :large_blue_circle:
<div>
    <img src="/IMGS/uControladores/STM32/BP.png">
</div>
La BluePill es un uControlador con diferentes usos, puede ser utilizada para dar soluciones a aplicaciones simples como apagar y encender un led, o
tambien puede ser utilizada para procesamiento digital de señales, en esta carpeta veremos sus conceptos básicos, cómo leer su datasheet y como poder
programar nuestro uControlador, veremos desde aplicaciones con C, hasta aplicaciones con C++.
<ul>
    <li><a href="00 - ConceptosBasicos.md">Conceptos básicos</a></li>
    <li><a href="#">Aplicaciones con C</a></li>
    <li><a href="#">Aplicaciones con C++</a></li>
</ul>

### STM32F103 PINOUT
<img src="01 - 00 - Extras/PINOUT_DIAGRAMA.png">

### STM32F103 DOCUMENTACIÓN IMPORTANTE
<ul>
    <li><a href="01 - 00 - Extras/stm32f103c8.pdf">Hoja de datos</a></li>
    <li><a href="01 - 00 - Extras/STM32F103xx ManualDeReferancia.pdf">Manual de referencia</a></li>
</ul>

### PLANTILLA
Al igual que en cualquier otro lenguaje de programación o entorno de desarrollo, contaremos con una plantilla la cual nos permitira estructurar de
una mejor manera nuestro código, esto es muy recomendable para sistemas embebidos debido a que alginas veces los códigos pueden ser muy extensos.
```C
/*
** #########################################################################################
**  Archivo         :   [nombreDelArchivo.c / nombreDelArchivo.cpp]
**  Proyecto        :   [nombreDelProyecto]
**  Herramienta(s)  :   [Herramientas utilizadas]
**  Autores         :
**                      Peña Paz Jorge Eduardo (Jelp200)
**  Descripcion     :
**                      Aquí va la descripción del programa o aplicación que se esta o se
**                      realizara.
** #########################################################################################
*/

/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++ I N C L U D E S ++++++++++++++++++++++++++++++ 
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
#include <aquiVanTusIncludes.h>

/* ..........................................................................
.............................. D E F I N E (S) ..............................
.......................................................................... */
#define tusDefines "Valores"
/* --------------------------------------------------------------------------
-------------------- V A R I A B L E S   G L O B A L E S --------------------
-------------------------------------------------------------------------- */
char[7] tusVariablesGlobales = "Valores"

/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++ P R O T O T I P O (S)   D E   F U N C I O N E S ++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
void tusPrototiposDeFunciones(void);

/* ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||| F U N C I O N   P R I N C I P A L |||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| */
int main(void){
	// Aquí va tu función principal y su respectivo while.
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ F U N C I O N E S ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
void tusPrototiposDeFunciones(void){
    // Aqui van tus funciones
}

/*
*****************************************************************************
********************************* N O T A S *********************************
*****************************************************************************

Este espacio esta dedicado para realizar notas o aclarar algunos puntos de la
aplicación o solucion a realizar.
*/

```