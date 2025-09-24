%{
** ######################################################################################################
**      Archivo: 02 - 02 - PulsosRect2.m
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          En esta parte de la practica se realizara la convolución entre dos pulsos rectangulares con
**          la funcion pre establecida por matlab llamada "conv".
** ######################################################################################################
%}

clear all
clf                                     % Elimina las figuras
clc

% MAIN PROGRAM
N = 17;

% Incrementos de la función
dt = 1 / N;
t = 0 : dt : 1;
x = (1 / 2) * ones(size(t));
h = ones(size(t));
y = conv(x, h) * dt;
t1 = 0 : dt : 2;

plot(t1, y)
grid on
axis([0 2 .1 .63])
grid on
title('Convolución de pulsos cuadrados con conv')