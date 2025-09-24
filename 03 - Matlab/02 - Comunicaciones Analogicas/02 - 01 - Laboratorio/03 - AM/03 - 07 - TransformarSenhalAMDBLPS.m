%{
** ######################################################################################################
**      Archivo: 03 - 07 - TransformarSenhalAMDBLPS.m
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          En esta parte de la practica se transformara la señal moduladora y se tendrá el espectro de
**          DBLPS
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
Smod = Sport .* Smen;
SMOD =  (1 / Fs) .* real(fft(Smod, Fs));
F =  0 : (Fs / 2) - 1;

stem(F, SMOD(F + 1), 'r')               % Graficamos
title('Espectro de la señal AM de DBL')
xlabel('f')
ylabel('F(t)')
grid on