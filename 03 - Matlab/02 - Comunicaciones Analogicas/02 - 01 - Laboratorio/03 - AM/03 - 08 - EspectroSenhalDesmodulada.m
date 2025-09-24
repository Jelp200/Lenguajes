%{
** ######################################################################################################
**      Archivo: 03 - 08 - EspectroSenhalDesmodulada.m
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          En esta parte de la practica se obtendra el espectro de la señal desmodulada.
** ######################################################################################################
%}

clear all
clf                                     % Elimina las figuras
clc

% MAIN PROGRAM
Fs = 128;                               % Declaramos las cntes
T = 1 / Fs;
A = 5;
fport = 15;
Amen = 2;
fmen = 1;

t = 0 : T : 2;                          % Definimos el intervalo

Sport = A * cos(2 * pi* fport * t);     % Declaramos las funciónes
Smen = Amen * cos(2 * pi * fmen * t);
Smod = Sport .* Smen;
Sdesmod = Smod .* Sport;
F =  0 : (Fs / 2) - 1;

stem(F, Sdesmod(F + 1), 'r')               % Graficamos
title('Espectro de la señal de DBLPS desmodulada antes del filtro')
xlabel('f')
ylabel('F(t)')
grid on