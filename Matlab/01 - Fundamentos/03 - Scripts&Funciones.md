# SCRIPTS :scroll:

Los <i>scripts</i> son una serie de comandos que se ejecutan en un orden predefinido dentro de Matlab.
Los scripts no aceptan entradas ni regresan algún resultado, en si, los scripts son un equivalente a typear comandos directamente en la ventanda de
comandos de Matlab, un ejemplo de un script es el siguiente:
```Matlab
alto = 10;
ancho = 3;
area = alto * ancho;
%{
    Este script define la altura, el ancho y el area, en el area de trabajo con el valor de 10, 3 y 30.
%}
```
El código anterior es casi lo mismo que escribir en la ventana de comandos lo siguiente:
```Matlab
>> alto = 10;
>> ancho = 3;
>> area = alto * ancho;
```

# FUNCIONES :package:

Las <i>funciones</i> son mucho más flexibles y extendibles. A comparación de los scripts, las funciones aceptan entradas y pueden regresar resultados
cuando se les llama. Una función tiene su propio espacio de trabajo, esto quiere decir que las operaciones implicitas/internas de la función no
cambian las variables que llaman.

Las funciones se definen de la siguiente manera:
```Matlab
function [salida] = nombreDeLaFuncion(entrada)
    %{
        ...
        Código en Matlab
        ...
    %}
end

%{
    La palabra reservada "function" siempre irá cuando se desee generar una función, después de dicha palabra reservada tendremos [...] los cuales
    nos permiten declarar variables las cuales serán la salida, despuéso tendremos el nombre de nuestra funcion seguido de (...) los cuales nos
    permitiran saber que valores van a ser ingresados y por ultimo el termino de nuestra función.
%}
```
Veamos un ejemplo paso a paso para declarar una función.
```Matlab
function [x, y, z] = nombreDeLaFuncion(entrada)                 % Generamos la función con su lista de valores de salida.

function[x, y, z] = miFuncion(a, b, c)                          % Por ultimo nombramos a la función y declaramos los valores con los cuales la
                                                                % funcion va a poder trabajar.

%{
    !OJO¡ Generalmente el nombre que tiene la función es el nombre que tomara el archivo.
%}
```
Ahora veamos como podemos re-escribir el script ya antes códificado de modo que utilicemos funciones.
```Matlab
% calcAreaRectangulo.m

function [area] = calcAreaRectangulo(h, b)
    area = h * b;
end
```
Si demeamos poder utilizar la función en otro archivo de matlab lo unico que tenemos que hacer es lo siguiente:
```Matlab
% pruebaAreaRectangulo.m

H = 100;
B = 20;
A = calcAreaRectangulo(H, B);                                   % Llamamos a la función ya antes programada y pasamos los parametros deseados.
```