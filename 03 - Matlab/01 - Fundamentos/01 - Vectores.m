%{
** ######################################################################################################
**      Archivo: 01 - Vecores.m
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          Aquí podran encontrar lo siguiente:
**              - Declaración de un vector
**              - Acceso a valores
**              - Operaciones con vectores
** ######################################################################################################
%}

% --------------------------- D E C L A R A C I Ó N   D E   U N   V E C T O R ---------------------------

% Para poder declarar un vector fila hacemos lo siguiente:

VF1 = [1, 3, 5, 7, 9];                  % FORMA 1
%    [1][2][3][4][5]                    -> Posición

VF2 = [1 3 5 7 9];                      % FORMA 2

%{
    Otra forma de declarar los vectores es la siguiente:

    Podemos observar que en los vectores antes declarados el inicio de dichos vectores comienzan en uno,
    e incrementa de dos en dos hasta nueve, esto puede verse de la siguiente manera:
%}

VF3 = 1 : 2 : 9;                        % FORMA 3
%{
    El vector anterior comienza en uno, incrementando de dos en dos hasta nueve, esto puede verse de la
    siguiente manera:

    1 + 2 = 3, 3 + 2 = 5, 5 + 2 = 7, 7 + 2 = 9

    VF3 = [1 3 5 7 9]
%}

% Para poder declarar un vector columna hacemos lo siguiente:

VC1 = [1; 3; 5; 6; 7; 0];
% ----------------------------------- A C C E S O   A   V A L O R E S ------------------------------------

%{
    Para poderacceder a un valor dentro de un vector es necesario lo siguiente.

        nombreArreglo(posicionVector)
%}

VF3(4)

% Podemos crear variables para poder almacenar el valor de dichas posiciones

valorVF3 = VF3(3);

% --------------------------- O P E R A C I O N E S   C O N   V E C T O R E S ----------------------------

%{
    Las operaciones que podemos realizar con vectores en Matlab tienen las mismas bases matematicas de
    siempre; los vectores deben contener la misma cantidad de elementos para ser compatibles. Quitando la
    suma y resta de vectores, las demás operaciones que deseemos realizar deber ir acompañadas del opera_
    dor producto punto.
%}

VF4 = 0 : 4 : 16;
VF5 = 2 : 2 : 10;

SV = VF4 + VF5;                         % [0 4 8 12 16] + [2 4 6 8 10] = [2 8 12 20 26]
RV = VF4 - VF5;                         % [0 4 8 12 16] - [2 4 6 8 10] = [-2 0 2 4 6]
PV = VF4 .* VF5;                        % [0 4 8 12 16] * [2 4 6 8 10] = [0 16 48 96 160]
CV = VF4 ./ VF5;                        % [0 4 8 12 16] / [2 4 6 8 10] = [0 1 (4/3) (3/2) (8/5)]
VE = VF4 .^ 3;                          % [0 4 8 12 16] ^ 3

%{
    Además, podemos pedir la longitud "length", valor máximo "max", valor minimo "min" y de igual menra
    podemos ordenar nuestro vector, veamos.
%}

VF6 = [1 6 9 17 4 8 11]                  % Vector desordenado

length(VF6)                              % Longitud del vector = 7
max(VF6)                                 % -> Valor máximo del vector = 17
min(VF6)                                 % -> Valor minimo del vector = 1
sort(VF6)                                % -> V = [1 4 6 8 9 11 17]

% De igual manera podemos utilizar lo mismo para un vector columna