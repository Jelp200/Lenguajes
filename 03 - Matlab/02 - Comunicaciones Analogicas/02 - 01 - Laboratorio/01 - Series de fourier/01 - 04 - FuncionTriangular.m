%{
** ######################################################################################################
**      Archivo: 04 - FUncionTriangular.m
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          En esta parte de la practica se pretende aproximaremos a traves de la serie trigonometrica de
**           fourier.
**              3.- Una función triangular con 3 términos.
** ######################################################################################################
%}

clear all
clf                                     % Elimina las figuras
clc

% MAIN PROGRAM

% Definimos el inicio y termino.
t = 0 : 0.001 : 2;
y = (1/2);
cn = 1 / pi;

% Ec. del primer termino.
y1 = y - cn * sin(2 * pi * t);

% Ec. del segundo termino.
y2 = y1 - cn * (1/2) * sin(4 * pi * t);

% Ec. del tercer termino.
y3 = y2 - cn * (1/3) * sin(6 * pi * t);

plot(t, y3)
title('Aproximación con 4 terminos de la serie trigonométrica de Fourier')
xlabel('t')
ylabel('y(t)')