% PROGRAMAR FUNCIONES

% Generaremos una función que regrese la media
function [X, Y] = valorMedio(n)
X = mean(n);
Y = X.^2;                   % ALT + 94 = ^
end

%{ 
    NOTA: Una vez realizada la declarativa de la funcion, este archivo tomara el nombre de la funcion
    declarada, es por ello que no se debe cambiar el nombre a dicho archivo, este archivo al ser de
    ejemplo no tiene importancia, pero si se desea trabajar con dicha función aqui programada, se debe
    cambiar el nombre del archivo al nombre de la función establecida en el programa.
%}