%{
** ######################################################################################################
**      Archivo: 07 - comprobacionFncTransf.m
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**                  Script para graficar la respuesta al impulso de un sistema.
** ######################################################################################################
%}

% LIMPIEZA DE VARIABLES, CONSOLA Y GRÁFICAS
clear all
close all
clc

% VARIABLES
r = deg2rad(40);
t = deg2rad(20);
p = deg2rad(60);
ra = 0.4;

% Calculo forma cartesiana
CPX = 1 * (cos(r) + 1i *sin(r))

a = CPX - ((2) * (cos(t + r))) + 1;
b = CPX - ((ra) * (2) * (cos(p + r))) + 0.4;
h = a / b;

disp(['El resultado de forma cartesiana es: ', num2str(h)])

% Calculo forma polar
rP = abs(h);
angRad = angle(h);
angGrad = rad2deg(angRad);

disp(['El resultado de forma polar es: ', num2str(rP),  '*e^(-i', num2str(angGrad), '°)'])