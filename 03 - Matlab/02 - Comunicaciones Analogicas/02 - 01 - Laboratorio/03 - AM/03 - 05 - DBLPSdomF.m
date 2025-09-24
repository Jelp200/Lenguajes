%{
** ######################################################################################################
**      Archivo: 03 - 05 - DBLPSdomF.m
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          En esta parte de la practica se realizara la T.F para así poder obtener la modulación de
**          DBLPS en el domino de la frecuencia.
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
SPORT = (1 / Fs) .* real(fft(Sport, Fs));
F = 0 : (Fs / 2) - 1;
stem(F, SPORT(F + 1), 'r')              % Graficamos los datos discretos
title('Espectro señal portadora')
xlabel('f')
ylabel('F(w)')
grid on