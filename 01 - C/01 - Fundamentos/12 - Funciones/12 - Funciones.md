# FUNCIONES :package:
Ahoora abarcaremos un tema no solo importante en el lenguaje C, sino tambien en los demás lenguajes de programación.

Las funciones son la parte más importante del lenguaje de programación en C, deido a que en C la programación es orientada a acciones, y estas
acciones pueden ser representadas en funciones, con las funciones podemos ahorarnos líneas y líneas de código con tan solo delcarar un bloque
de código que cumpla con las condiciones que deseamos, a continuación mostramos los tipos de funciones que se manejan en C y su estructura para
así comprender de mejor manera este tema: 
```C
/*
#####################################################
##########      FUNCIONES SIN RETORNO      ##########
#####################################################
*/

// Directivas de preprocesador.
#include <stdio.h>

// Prototipos de funciones.
void nombreFuncion();

// Funcion principal,
int main(void){
    /*
        ...
        Código en C
        ...
    */
   return 0;
}

// Funciones.
void nombreFuncion(){
    /*
        ...
        Código en C de la funcion
        ...
    */
}
```

```C
/*
#####################################################
##########      FUNCIONES CON RETORNO      ##########
#####################################################
*/

// Directivas de preprocesador.
#include <stdio.h>

// Prototipos de funciones.
tipoDato nombreFuncion(parametros);

// Funcion principal,
int main(void){
    /*
        ...
        Código en C
        ...
    */
   return 0;
}

// Funciones.
tipoDato nombreFuncion(parametros){
    /*
        ...
        Código en C de la funcion
        ...
    */
   return expresión;
}
```

```C
/*
#####################################################
##########        FUNCION RECURSIVA        ##########
#####################################################
*/

funcion(parametro){
    if(n = 1){
        return n;
    }else{
        funcion(parametro);     // Se vuelve a llamar dentro de la misma función
    }
}
```
A continuacion podra visualizar los ejemplos dando click en alguno de ellos.
<ul>
    <li><a href="../12 - Funciones/Codigos/12 - 01 - FuncionesSinRetorno.c">Funciones sin retorno</a></li>
    <li><a href="../12 - Funciones/Codigos/12 - 02 - FuncionesConRetorno.c">Funciones con retorno</a></li>
    <li><a href="../12 - Funciones/Codigos/12 - 03 - FuncionRecursiva.c">Funcion recursiva 1</a></li>
    <li><a href="../12 - Funciones/Codigos/12 - 04 - FuncionRecursiva.c">Funcion recursiva 2</a></li>
</ul>