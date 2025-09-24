%{
** ######################################################################################################
**      Archivo: 02 - Matrices.m
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          Aquí podran encontrar lo siguiente:
**              - Declaración de una matriz
**              - Acceso a valores
** ######################################################################################################
%}

% -------------------------- D E C L A R A C I Ó N   D E   U N A   M A T R I Z --------------------------

% Para poder delcarar una matriz hacemos lo siguiente:

M = [3 7 6; 1 2 0; 4 5 8];                  % Matriz de 3 * 3

%{
    Siendo lo anterior lo siguiente:
        ┌               ┐
        │   3   7   6   │
    M = │   1   2   0   │
        │   4   5   8   │
        └               ┘
    Donde el ";" nos indica el termino de una fila.
%}

% ----------------------------------- A C C E S O   A   V A L O R E S ------------------------------------

%{
    Para poder acceder a los valores de una matriz tenemos tres metodos:
        1.- Acceso por subíndices
        2.- Acceso lineal
%}

%{
        A C C E S O   P O R   S U B Í N D I C E S
    
    Es el metodo de acceso más utilizado debido a que para ello solo indicamos la fila y columna correspon_
    diente a la cual deseamos acceder.
    
        nombreMatriz(fila, columa)                          -> Metodo más común

    Si deseamos visualizar todos los datos de una fila tenemos tres metodos:

        nombreMatriz(fila, [columnas])                      -> Primer metodo
        nombreMatriz(fila, :)                               -> Segundo metodo
        nombreMatriz(fila, [1 : n])                         -> Tercer metodo

    Ahora bien si deseamos visualizar los datos en especifico tenemos un metodos más:

        nombreMatriz(fila, columnaInicio : columnaFinal)    -> Cuarto metodo
%}

SI_1 = M(3, 2);

SI_2 = M(1, [1, 2, 3]);
SI_3 = M(2, :);
SI_4 = M(3, [1 : 3]);

%{
        A C C E S O   L I N E A L
    
    Matlab nos permite tratar a los arreglos n-D como arrelos de 1-D cuando deseamos acceder
    solo a una dimension de dicho arreglo n-D, esto se puede realizar de la siguiente manera:
    
        nombreMatriz(elemento)

    !OJO¡ Las matrices en Matlab son almacenadas en el tipo de orden de mayor columna, esto
    quiere decir lo siguiente:

        ┌               ┐
        │   3   7   6   │
        │  [1] [4] [7]  │     
    M = │   1   2   0   │
        │  [2] [5] [8]  │
        │   4   5   8   │
        └  [3] [6] [9]  ┘

    Ahora bien, si deseamos visualizar un vector dada una matriz hacemos lo siguiente:

        nombreMatriz(elementoInicio : elementoFinal)

    Si deseamos visualizar una matriz más pequeña dada nuestra matriz original tenemos lo sig:

        nombreMatriz([elemento1, elementoN ; elemento2, elementoN])

    Por ultimo podemos obtener un vector columna dada una matriz de n-D.

        nombreMatriz(:)
%}

    LI_1 = M(8);

    LI_2 = M(2 : 4);

    LI_3 = M([1, 2 ; 3, 4])

    LI_4 = M(:)