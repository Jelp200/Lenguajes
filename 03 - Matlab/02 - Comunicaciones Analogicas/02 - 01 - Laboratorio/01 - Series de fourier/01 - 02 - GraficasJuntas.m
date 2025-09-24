%{
** ######################################################################################################
**      Archivo: 02 - GraficasJuntas.m
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          En esta parte de la practica se pretende aproximaremos a traves de la serie trigonometrica de
**           fourier.
**              2.- En una misma gráfica la aproximación de un pulso con tres términos.
** ######################################################################################################
%}

clear all
clf                                     % Elimina las figuras
clc

% MAIN PROGRAM

% Definimos cuantos terminos tendra la serie.
n = 7;
cn = 4 / pi;

% Definimos el inicio y termino.
t = 0 : 0.001 : pi;

% Generamos un vector y lo rellenamos de ceros.
x = zeros(size(t));
hold on                                 % Comndo de sujeción
for n = 1 : 2 : n                       % Inicio de ciclo reiterativo
    y = cn * (1/n) * sin(n * t);
    x = y + x;
    plot(t, x)
end
title('Aproximación con tres terminos')
hold off