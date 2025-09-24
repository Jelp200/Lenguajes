%{
** ######################################################################################################
**      Archivo: 00 - DeclaracionDeVariables.m
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          En Matlab a diferencia de otros lenguajes nosotros estaremos trabajando con el tipo de dato
**          más basico, el arreglo, este puede ser un escalar (1-D), vector (2-D), matriz (3-D) o un
**          arreglo multidimensional (M*N), a diferencia de otros lenguajes de programación como C/C++, JS,
**          etc., es que al momento de utilizar el ";" estaremos declarando una variable dada, pero sin
**          dicho ";" lo que haremos sera imprimir lo declarado en la ventana de comando.
**
** ######################################################################################################
%}

%{
    Para poder declarar una varibaleharemos lo siguiente:
    
    nombreVariable = Valor;
%}

% ------------------------------------------ E S C A L A R E S ------------------------------------------

X = 3;
Y = 7;
S = X + Y;
R = X - Y;
M = X * Y;
D = X / Y;

% Imprimimos los valores.
S
R
M
D

% ------------------------------------------- V E C T O R E S -------------------------------------------

VF = [1 2 3 4];                         % Vector fila
VC = [1; 2; 3; 4];                      % Vector columna

% Imprimimos los valores.
VF
VC

% ------------------------------------------- M A T R I C E S -------------------------------------------

M1 = [1 2 3 4; 5 6 7 8];                % 2 filas - 4 columnas
M2 = [1 5;
      2 6;                              % 4 filas - 2 columnas
      3 7;
      4 8];

% Imprimimos los valores.
M1
M2

% ---------------------------------------- C O N V E R S I O N E S ---------------------------------------

%   V E C T O R E S
% Vector fila a vector columna
vfNew = [5 6 7 8];
vcNew = vfNew.';                        % El operador .' nos permite hacer la conversión que deseemos.

% Vector columna a vector fila
vc2New = [9; 10; 11; 12];
vf2New = vc2New.';

%   M A T R I C E S
mNew =[9 10 11 12; 13 14 15 16];        % Matriz 2 * 4
m2New = mNew.';                         % Matriz 4 * 2