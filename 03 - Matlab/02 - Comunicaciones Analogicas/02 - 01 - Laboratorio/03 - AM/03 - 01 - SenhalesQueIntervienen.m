%{
** ######################################################################################################
**      Archivo: 03 - 01 - SenhalesQueIntervienen.m
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          En esta parte de la practica se realizara presentación de las dos señales que intervienen en
**          la modulación.
** ######################################################################################################
%}

clear all
clf                                     % Elimina las figuras
clc

% MAIN PROGRAM
Fs = 128;                               % Declaramos las cntes
T = 1 / Fs;
A = 5;
fport = 13;
Amen = 2;
fmen = 1;

t = 0 : T : 2;                          % Definimos el intervalo

Sport = A * cos(2 * pi* fport * t);     % Declaramos las funciónes
Smen = Amen * cos(2 * pi * fmen * t);

plot(t, Sport)                          % Graficamos las funciones
hold on
plot(t, Smen)
hold off
title('Gráfica de las señales portadora y mensaje')
ylabel('f(t)')
xlabel('t')
grid on