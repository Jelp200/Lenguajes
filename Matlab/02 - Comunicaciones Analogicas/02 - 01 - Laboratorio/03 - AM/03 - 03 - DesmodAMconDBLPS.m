%{
** ######################################################################################################
**      Archivo: 03 - 03 - DesmodAMconDBLPS.m
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          En esta parte de la practica se realizara la desmodulación en AM de la señal con DBLPS, por
**          lo que haremos será multiplicar nuevamente por la portadora.
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
Smod = Sport .* Smen;                   % Señal modulada
Sdesm = Smod .* Sport;                  % Señal desmodulada

plot(t, Sdesm)
title('Gráfica de la señal desmodulada')
grid on