%{
** ######################################################################################################
**      Archivo: 03 - 10 - AMPortadoraAltaPot.m
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
** ######################################################################################################
%}

clear all
clf                                     % Elimina las figuras
clc

% MAIN PROGRAM
Fs = 128;                               % Declaramos las cntes
T = 1 / Fs;
A = 5;
N = 3;                                  % Nivel de C.D.
fport = 13;
Amen = 2;
fmen = 1;

t = 0 : T : 2;                          % Definimos el intervalo

Sport = A * cos(2 * pi* fport * t);     % Declaramos las funciónes
Smen = N + (Amen * cos(2 * pi * fmen * t));
Smod = Sport .* Smen;

plot(t, Smod)                          % Graficamos
title('Señal de AM comercial en el tiempo')
xlabel('f')
ylabel('F(t)')
grid on