%{
** ######################################################################################################
**      Archivo: 03 - 15 - EspectroSenhalFiltradaBLS.m
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          En esta parte de la practica se visualizara el espectro de la señal modulada de la BLS.
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
Wport = 2 * pi * fport;
Amen = 2;
fmen = 1;
Wmen = 2 * pi * fmen;

t = 0 : T : 2;                          % Definimos el intervalo

Sportc = A * cos(Wport .* t);           % Declaramos las funciónes
Sports = A * sin(Wport .* t);
Smenc = Amen * cos(Wmen .* t);
Smens = Amen * sin(Wmen .* t);
Smod = Sportc .* (Smenc + 1) + Sports .* (Smens);
SMOD = (1 / Fs) .* real(fft(Smod, Fs));
F = 0 : (Fs / 2) - 1;

stem(F, SMOD(F + 1), 'r')                           % Graficamos
title('Espectro de la señal modulada de BLS')
xlabel('f')
ylabel('F(t)')
grid on