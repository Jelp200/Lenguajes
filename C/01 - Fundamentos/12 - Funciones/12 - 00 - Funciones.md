# Funciones :package:
Lo más básico para poder entender las funciones es saber su estructura, y es de la siguiente manera
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