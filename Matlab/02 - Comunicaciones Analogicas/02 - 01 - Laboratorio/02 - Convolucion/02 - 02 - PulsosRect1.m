%{
** ######################################################################################################
**      Archivo: 02 - 02 - PulsosRect1.m
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          En esta parte de la practica se realizara la convolución entre dos pulsos rectangulares sin
**          utilizar la funcion pre establecida por matlab llamada "conv".
** ######################################################################################################
%}

clear all
clf                                     % Elimina las figuras
clc

% MAIN PROGRAM
dt = .25;
T1 = 0 : dt : 1;
y1 = (1 / 2) * T1;
T2 = 1 : dt : 2;
y2 = 1 - (1 / 2) * T2;

plot(T1, y1, T2, y2, 'b')
grid on
title('Convolución de pulsos cuadrados')