%{
** #########################################################################################
**      Archivo: 01 - IntroduccionMatlab.m
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**      Notas:
**          En este archivo veremos los conceptos necesarios para poder entender MatLab para
**          el curso de comunicaciones digitales.
** #########################################################################################
%}

%{
    Al momento de abrir matlab tendremos una venta en blanco, a esta ventana la conocemos
    como "Ventana de comando", en dicha ventana aparecera lo siguiente:

    >>

    Siendo los signos anteriores donde podremos escribir el comando en cuestion.
%}

%{
----------------------------------------------------------------------------------------------
    - DECLARACIÓN DE VARIABLES
    
    Un punto a destacar en MatLab es que podemos utilizar el ";", la unica diferencia a otros
    lenguajes de programación es que sin este ";" imprimiremos lo declarado, pero con el ";"
    no imprimiremos pero si delcararemos la variable en cuention.

    Para poder declarar una variable haremos lo siguiente:
%}

X = 3;
Y = 7;
X + Y

%{
----------------------------------------------------------------------------------------------
    - DECLARACIÓN DE UN VECTOR

    Para poder declarar un vector haremos lo siguiente:

    >> Z = [1, 3, 5, 7, 9]                  ->  Vector fila
           [1][2][3][4][5]                  ->  Posición
%}

Z = [1, 3, 5, 7, 9]                       % -> Podemos quitar las comas y dejar solo espacios.
% Z = [1 3 5 7 9]
%{
    Otra forma de declarar los vectores es la siguiente; podemos observar que el vector antes
    declarado comienza en uno, e incrementa de dos en dos hasta nuevo, esto puede verse de la
    siguiente manera:

    >> Z = 1 : 2 : 9                        -> Vector que comienza en uno, incremento en dos
                                               hasta nueve.
%}

%{
    - ACCESO A VALORES
    
    Para poder acceder a un valor dentro de un vector es necesario teclear lo siguiente:

    >> Z(n)                                 -> Siendo "n" la posición del vector la cual queremos
                                               visualizar en la ventana de comandos

    Ejemplo, digamos que deseamos acceder al valor 4 del vector fila, entonces en vez de "n"
    pondremos 4, y sabemos que el valor almacenado en 4 es el siguiente:

    >> Z = [1, 3, 5, 7, 9]                  ->  Vector fila
           [1][2][3][4][5]                  ->  Posición
%}

Z(4)                       % -> Visualizamos el valor en la posición 4.
%!  Nota: La posición inicial es 1 en vez de 0 como en otros lenguajes de programación.

%{
    - OPERACIONES CON VECTORES
    
    Las operaciones que podemos realizar con vectores en MatLab son ls mismas que en papel, podemos
    pedir la longitud del vector "length", el valor máximo que existe en el vector "max", el valor
    minimo que existe en el vector "min" y podemos ordenarlo gracias a un algoritmo de ordenamiento.

    De igual forma podemos realizar operaciones entre vectores, pero siempre recordando las bases
    matematicas, dichos vectores deben tener la misma cantidad de elementos para poder ser compa_
    tibles, quitando la suma y resta de vectores las demas operaciones que deseemos realizar deben
    ir acompañadas del operador producto punto.
%}

V = [1 6 9 17 4 8 11]                     % -> Declaramos un vector desordenado.

length(V)                                 % -> Longitud del vector = 7
max(V)                                    % -> Valor máximo del vector = 17
min(V)                                    % -> Valor minimo del vector = 1
sort(V)                                   % -> V = [1 4 6 8 9 11 17]

A = [1, 4, 4];
B = [7 8 6];

A + B                                    % -> A + B = [8 12 10]
A - B                                    % -> A - B = [-6 -4 2]
A .* B                                   % -> A .* B = [7 32 24]
A ./ B
A .^ 2                                   % -> A .^ 2 = [1 16 16]
%!  Nota: Hay palabras reservadas en MatLab que puedes servirnos de mucho estas son "help [palabraR]" y "doc [palabraR]".

%{
----------------------------------------------------------------------------------------------
    - DECLARACIÓN DE UNA MATRIZ

    Para poder declarar una matriz haremos lo siguiente:

    >> M = [3, 7, 6; 1, 9, 5; 8 6 4]        ->  Matriz 3 x 3
    
    Siendo lo anterior lo siguiente:

        ┌               ┐
        │   3   7   6   │
    M = │   1   9   5   │
        │   8   6   4   │
        └               ┘
%}

M = [3, 7, 6; 1, 9, 5; 8 6 4]              % -> El ";" nos indican el termino de la fila.

%{
    - ACCESO A VALORES
    
    Para poder acceder a un valor especiifco de una matriz tecleamos lo siguiente:

    >> M(f, c)                              -> Siendo "f" la fila y "c" la columna donde se
                                               encuentra el dato que visualizaremos en la ventana
                                               de comandos.

    Ejemplo, digamos que deseamos acceder al valor 9 de la matriz, entonces tendremos:

    >> M(2, 2)                              -> Fila dos, columna dos.
%}

M(2, 2)

%{
----------------------------------------------------------------------------------------------
    - VENTANA DE FUNCIONES

    La ventana de funciones, como su nombre lo dice, es aquella ventana la cual nos deja prog_
    ramar funciones desde cero, para ello realizamos los siguientes pasos.

    Nos vamos a "Archivo", después a "Nuevo" y al último "Script", hecho lo anterior de manera
    correcta podremos visualizar una ventana en balnco en la cual podemos empezar a códificar,
    realicemos un ejemplo para poder comprender de mejor manera.

    VEASE EL ARCHIVO LLAMADO "02 - GraficarFunciones.m"


    - DIVIDIR PANTALLAS

    Podemos visualizar diferentes datos en nuestra pantalla de MatLab, para ello utilizamos la
    palabra reservada "subplot" o subgráficar en español, para ello realicemos un ejemplo,
    gráfiquemos en la misma pantalla la funcion seno, coseno y la suma de estás dos.

    VEASE EL ARCHIVO LLAMADO "03 - SubPlots.m"


    - PROGRAMAR FUNCIONES

    Algo muy interesante en MatLab es que podemos generar/programar funciones para después
    utilizarlas en programas u operaciones, una analogía interesante es que podemos visualizar
    a dichas funciones como archivos de cabecera, headers o imports, los anteriores se utilizan
    en lenguajes tales como C/C++, Java y Python.

    VEASE EL ARCHIVO LLAMADO "04 - ProgramarFunciones.m"
%}