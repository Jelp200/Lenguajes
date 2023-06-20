%{
** ######################################################################################################
**      Archivo: 02 - 04 - RectTriang.m
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          En esta parte de la practica se realizara la convolución entre dos pulsos uno rectangular con
**          un pulso triangular.
** ######################################################################################################
%}

clear all
clf                                     % Elimina las figuras
clc

% MAIN PROGRAM
syms x h t tau y1 y2 y3
x = 1;
h = (.5) * (t - tau);
m = x * h;
y1 = int(m, tau, -1, 't');
y2 = int(m, tau, -1, 1);
y3 = int(m, tau, 't-3', 1);
dt = .25;
T1 = -1 : dt : 1;
T2 = 1 : dt : 2;
T3 = 2 : dt : 4;
Y1 = (1 / 4) * (T1 .^2) + (1 / 2) * T1 + (1 / 4);
Y2 = T2;
Y3 = (1 / 2) * T3 + 2 - (1 / 4) * (T3 .^ 2);

plot(T1, Y1, T2, Y2, 'r', T3, Y3, 'g')
grid on
title('Convolución de pulso cuadrado con triangulo')