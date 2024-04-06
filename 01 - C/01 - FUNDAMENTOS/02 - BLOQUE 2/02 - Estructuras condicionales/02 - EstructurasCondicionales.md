# ESTRUCTURAS CONDICIONALES :question:
La estructuras condicionales dentro del lenguaje de programación C son una parte fundamental, no solo para el lenguaje de programación en C, sino tambien en cualquier otro lenguaje de programación ya sea C++, PY, Java, etc., es por ello que es necesario comprender de una manera muy buena este tema, debido a que no solo nos servira aquí, sino tambien en otros lenguajes o materias de estudio en la ingenieria.

La programación de estructuras condicionales esta dada por una palabrita muy importante <b><i>"if"</i></b>, esta palabra en inglés tiene como significado en español <b><i>"si"</i></b>, es por ello que cuando codificamos una sentencia if podemos leerlo de la siguiente manera:
```C
if(condicion){
    /*
    Bloque de código a ejecutarse si la
    condicion se cumple.
    */
}

/*
Si la condición se cumple, el código a ejecutar es el que se encuentra encerrado entre las llaves del if, sino,
el código saltara la condición if y seguira su rumbo
*/
```
Pero no solo tenemos condicionales simples como la anterior, sino tambien condicionales multiples, anidadas y un operador "?" el cual denominamos como operador ternario, veamos cada una de ellas.

<ul>
  <li><a href="02 - 01 - if.c">Condicional simple.</a></li>
  Una condicional simple es aquella la cual nos permite preguntar una sola vez y si no se cumple dicha condicional el programa sigue su curso sin problema alguno, esta se declara de la siguiente manera:

  ```C
  if(condicion){
    /*
    Código si se cumple la cóndición 1.
    */
  }
  ```
  Siendo su diagrama de flujo el siguiente:
  <div>
    <img src="../../../../IMGS/01 - C/01 - FUNDAMENTOS/02 - BLOQUE 2/CondicionalSimple.png">
  </div>

  <li><a href="02 - 02 - ifs.c">Condicional multiple.</a></li>
  Una condicional multiple es aquella la cual nos permite preguntar una sola vez y si no se cumple dicha condicional el programa sigue su curso sin problema alguno, esto hasta que se encuentre otra condicional la cual esta en el mismo bloque de código, se declara  de la siguiente manera:
  
  ```C
  if(condicion1){
    /*
    Código si se cumple la cóndición 1.
    */
  }
  if(condicion2){
    /*
    Código si se cumple la cóndición 2.
    */
  }
  if(condicionN){
    /*
    Código si se cumple la cóndición n.
    */
  }
  ```
  Siendo su diagrama de flujo el siguiente:
  <div>
    <img src="../../../../IMGS/01 - C/01 - FUNDAMENTOS/02 - BLOQUE 2/CondicionalMultiple.png">
  </div>

  <li><a href="02 - 03 - ifAnidados.c">Condicionales anidadas.</a></li>
  La condicionales anidadas son aquellas que se encuentran dentro de otra condicional, esto quiere decir que si se cumple la cóndición entra en ella y dentro de dicha condicón se encuentran multiples condicionales o más condicionales anidadas.
  
  ```C
  if(condicion1){
    /*
    Código si se cumple la cóndición 1.
    */
   if(condicion2){
        /*
        Código si se cumple la cóndición 2.
        */
        if(condicionM){
            /*
            Código si se cumple la cóndición M.
            */
        }
    }
    if(condicionN){
        /*
        Código si se cumple la cóndición n.
        ...
        IF's
        ...
        */
    }
  }
  ```
  Siendo su diagrama de flujo el siguiente:
  <div>
    <img src="../../../../IMGS/01 - C/01 - FUNDAMENTOS/02 - BLOQUE 2/CondicionalAnidado.png">
  </div>

  <li><a href="02 - 04 - ifElse.c">Condicionales sino.</a></li>
  La condicionales sino son aquellas las cuales nos permiten realizar una condicional y si esta no se cumple entra a otro bloque de código el cual realiza una acción si no se cumple dicha condicional.
  
  ```C
  if(condicion1){
    /*
    Código si se cumple la cóndición 1.
    */
  }else{
    /*
    Código si no se cumple la cóndición 1.
    */
  }
  ```
  Siendo su diagrama de flujo el siguiente:
  <div>
    <img src="../../../../IMGS/01 - C/01 - FUNDAMENTOS/02 - BLOQUE 2/CondicionalSino.png">
  </div>

  <li><a href="02 - 05 - ifElseIf.c">Condicionales sino si.</a></li>
  La condicionales sino si son aquellas las cuales nos permiten realizar una condicional y si esta no se cumple entra a otro bloque de código el cual realiza una acción si no se cumple dicha condicional, este bloque condicional puede tener una segunda condicional.
  
  ```C
  if(condicion1){
    /*
    Código si se cumple la cóndición 1.
    */
  }else if(condicion2){
    /*
    Código si se cumple la cóndición 2.
    */
  }else if(condicionN){
    /*
    Código si se cumple la cóndición N.
    */
  }
  ```
  Siendo su diagrama de flujo el siguiente:
  <div>
    <img src="../../../../IMGS/01 - C/01 - FUNDAMENTOS/02 - BLOQUE 2/CondicionalSinosi.png">
  </div>

  <li><a href="02 - 06 - operadorTernario.c">Operador ternario.</a></li>
  El operador ternario es otro tipo de condicional el cual nos permite evaluar pero de una manera diferente:

  ```C
  (Condicion) ? Expresión 1 : Expresión 2;
  ```
  Este se puede ver de la siguiente manera:
  ```C
  (Condición) if (Valida, ejecuta esté código) else (Falsa, ejecuta esté código);
  ```
</ul>

