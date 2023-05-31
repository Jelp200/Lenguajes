%{
** ######################################################################################################
**      Archivo: 01 - GraficasSeparadas.m
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          En esta parte de la practica se pretende aproximaremos a traves de la serie trigonometrica de
**           fourier.
**              1.- Una función rectangular con 2, 3 y 4 terminos.
** ######################################################################################################
%}

clear all
clf                                     % Elimina las figuras
clc

% MAIN PROGRAM

% Definimos desde donde a donde se condiera medio ciclo (pi) y en cuantos
% pasos.
t = 0 : pi / 97 : pi;
y = (4 / pi) * sin(t);                  % Escribimos el eje "y"

% Subdividimos la gráfica con el comando subplot en una gráfica de 2 x 2 y
% se denota en donde se dinujara.
subplot(2, 2, 1)
plot(t, y)
title('Aproximación con la fundamental')
ylabel('f(t)')
grid on
axis([0 pi 0 1.4])

% 3er ARMONICA

% Dado a que es una función seno con la que se esta aproximando y es impar
% se tomara la tercer armonica sumandola a la anterior
y1 = y + (4 / pi) * sin(3* t) / 3;
subplot(2, 2, 2)
plot(t, y1)
title('Aproximación con 2 armónicas')
grid on
axis([0 pi 0 1.4])

% 5ta ARMONICA

y2 = y1 + (4 / pi) * sin(5 * t) / 5;
subplot(2, 2, 3)
plot(t, y2)
title('Aproximación con 3 armónicas')
grid on
axis([0 pi 0 1.4])

% 7ma ARMONICA

y3 = y2 + (4 / pi) * sin(7 * t) / 7;
subplot(2, 2, 4)
plot(t, y3)
title('Aproximación con 4 armónicas')
grid on
axis([0 pi 0 1.4])