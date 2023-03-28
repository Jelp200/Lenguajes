%{}%

% INTRODUCCIÓN A MATLAB

% Alumno: Peña Paz Jorge Eduardo

% >>"" Ventana de comando"
% Sin punto y coma imprime, con punto y coma no imprime pero declara

% Podemos declarar un vector
% >> Z = [1 3 5 7 9] vector fila
% >> Z = 1 : 2: 9 -> De igual manera podemos declarar un vector fila, aquí empieza desde uno con un incremento de dos hasta nueve

% Para acceder a un valor podemos hacerlo de la siguiente manera
% >> Z(4)

% Para poder declarar una matriz podemos poner el siguiente comadno
% >> W = [3, 7, 6; 1, 4, 5; 8 6 4]
% Siendo este:
% ans =
%       3   7   6
%       1   9   5
%       8   6   4
% Para poder acceder a un valor es necesario poner >> W(2, 3)

% [VER T]

% VENTANA DE FUNCIONES, aquí podemos programar funciones.

% Archivo > Nuevo > Script (Sale ventana en blanco)

% Definimos una variable en tiempo que inicia en cero con incrementos de .01 y termina en 2 * pi

% t = 0 : 0.01 : 2 * pi;
% f = 1;
% A = 3;
% X = A * sin(2 * pi * f * t);
% plot(t, X)
% grid on (Tipo osciloscopio)
% xlabel('Tiempo')
% ylabel('Amplitud')
% title ('Ejemplo')

% Guardamos y lo corremos

