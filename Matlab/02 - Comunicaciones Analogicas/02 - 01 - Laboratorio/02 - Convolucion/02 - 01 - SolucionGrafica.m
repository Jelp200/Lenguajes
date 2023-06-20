%{
** ######################################################################################################
**      Archivo: 02 - 01 - SolucionGrafica.m
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          En esta parte de la practica se pretende introducir al usuario a la solucion gráfica de la 
**          convolución.
** ######################################################################################################
%}

clear all
clf                                     % Elimina las figuras
clc

% MAIN PROGRAM

%1ER PARTE.
syms x h t m tau;                       % Declaramos las var simbolicas

x = 1;                                  % Se escriben las funciones en valores a convolucionar
h = exp(-(t - tau));

m = x * h;                              % Multiplicamos las funciones

y = int(m, 'tau', 0, 't');              % Integramos respecto a tau en el intervalo de 0 a t

ezplot(y, 0, 7)                         % Se gráfica la función
grid on

% 2DA PARTE.
clear x h

x = exp(-(t - tau));
h = 1;
m = x * h;
y = int(m, 'tau', 0, 't');
ezplot(y, 0, 7)
grid on