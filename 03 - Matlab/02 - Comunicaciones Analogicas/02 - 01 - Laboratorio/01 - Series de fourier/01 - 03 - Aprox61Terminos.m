%{
** ######################################################################################################
**      Archivo: 03 - Aprox61Terminos.m
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          En esta parte de la practica se pretende aproximaremos a traves de la serie trigonometrica de
**           fourier.
**              3.- Aproximación de un pulso con 61 terminos.
** ######################################################################################################
%}

clear all
clf                                     % Elimina las figuras
clc

% MAIN PROGRAM

% Definimos los terminos que tendrá la serie.
n = 61;
cn = 4 / pi;

% Definimos el inicio y termino.
t = 0 : 0.001 : pi;
% Generamos un vector y lo rellenamos de ceros.
x = zeros(size(t));
for n = 1 : 2 : n                       % Inicio de ciclo reiterativo
    y = cn * (1/n) * sin(n * t);
    x = y + x;
    plot(t, x)
end
title('Aproximación con 61 terminos')