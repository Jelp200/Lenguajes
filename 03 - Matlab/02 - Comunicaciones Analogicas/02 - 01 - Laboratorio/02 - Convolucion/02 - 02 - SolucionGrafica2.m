%{
** ######################################################################################################
**      Archivo: 02 - 02 - SolucionGrafica2.m
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          En esta parte de la practica se pretende introducir al usuario a la solucion gráfica de la 
**          convolución.
** ######################################################################################################
%}

clear
clf                                     % Elimina las figuras
clc

% MAIN PROGRAM

%2DA PARTE.
syms x h t m tau;                       % Declaramos las var simbolicas

x = exp(-(t - tau));                    % Se escriben las funciones en valores a convolucionar
h = 1;

m = x * h;                              % Multiplicamos las funciones

y = int(m, 'tau', 0, 't');              % Integramos respecto a tau en el intervalo de 0 a t

ezplot(y, 0, 17)                         % Se gráfica la función
grid on