%{
** ######################################################################################################
**      Archivo: 05 - MatricesCelda.m
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          Las matrices celda son un complemento del tema de matrices, estas matrices celda pueden conca_
**          tenar elementos de la misma clase dentro de ellas mismas (a excepción de unos raros casos tal
**          como las funciones de trabajo). Estos pueden ser:
**              - Numeros escalares o por default.
**              - Caracteres
**              - Cadenas
**
**          Veamos unos ejemplos de ello.
** ######################################################################################################
%}

% Matrices númericas
    MN = [1, -2, 3.14, 4/5, 5^6; pi, inf, 7/0, nan, log(0)];

% Matrices caracter
    MC = ['I' 'P' 'N'];

% Matrices de cadena
    MS = ['ESIME ' 'Zacatenco ' '| ' 'ICE'];

%{
    !OJO¡ A pesar de que ambos utilizan [...], el resultado de las clases integradas son difetentes, para
    poder visualizar esto utilizamos la siguiente palabra reservada

        whos

    Por lo tanto las operaciones que podemos realizar con cada matriz son un poco diferente.
%}

    whos

%{
    Ahora bien, sabemos que un vector regular no nos deja guardar un mix de variables de diferentes clases,
    o diferentes tipos de cadenas de caracteres. Aquí es donde las "Matrices celda" entran en acción. En
    una matriz celda podemos tener varios tipos de objetos "datos" en Matlab, es por ello que la clase
    puede ser diferente en cada celda de la matriz. Para ello utilizamos las llaves {...} alrededor de los
    elementos que deseamos almacenar en nuestra matriz celda.

    Veamos un ejemplo:
%}

    MC = {MN; MS};                          % Declaramos una variable "MC" y dentro de ella las clases de datos
    MC                                      % Imprimimos la matriz celda
    whos MC                                 % Vemos que tipo de clase es la nueva variable

%{
    !OJO¡ Las matrices celda requieren de mayor capacidad de memoria para poder almacenar lo deseado.

    Para poder acceder al contenido de una celda podemos utilizar las llaves {...} de las sig. manera:

        nombreMatrizCelda{n}                -> Siendo n la clase que deseamos visualizar.
%}

    contenidoMC = MC{1};                    % Guardamos en una variable el contenido al cual deseamos acceder
    contenidoMC                             % Imprimimos dicho contenido

%{
    !OJO¡ MC(1) != MC{1}. Mientras que el último regresa el contenido de la celda, el primero regresa una
    matriz celda que es una submatriz de MC. Similarmente, si tenemos una variable D donde hay almacenada
    una matriz 10 * 5, entonces D(4:8, 1:3) nos regresara una sub matriz 5 * 3 cuya clase es una clase celda,
    mientras C{1:2} no regresa ni un solo objeto, sino que devuelve dos objetos diferentes.
%}

    [X, Y] = MC{1:2}

%{
    Podemos ver que a un vector fila le pasaremos los valores de MC{1:2}, donde:

    X   <-  MN
    Y   <-  MS
%}