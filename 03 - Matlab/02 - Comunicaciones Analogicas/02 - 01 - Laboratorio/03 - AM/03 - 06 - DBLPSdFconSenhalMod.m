%{
** ######################################################################################################
**      Archivo: 03 - 06 - DBLPSdomF.m
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          En esta parte de la practica se visualizara la señal portadora y moduladora en el dominio de
**          la frecuencia.
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
fmen = 10;

t = 0 : T : 2;                          % Definimos el intervalo

Sport = A * cos(2 * pi* fport * t);     % Declaramos las funciónes
Smen = Amen * cos(2 * pi * fmen * t);
SPORT = (1 / Fs) .* real(fft(Sport, Fs));
SMEN = (1 / Fs) .* real(fft(Smen, Fs));
F = 0 : (Fs / 2) - 1;
stem(F, SPORT(F + 1), 'r')              % Graficamos los datos discretos
hold on
stem(F, SMEN(F + 1))
hold off
title('Espectro señal portadora y mensaje')
xlabel('f')
ylabel('F(w)')
grid on