%{
** ######################################################################################################
**      Archivo: 03 - 17 - EspectroSenhalFiltradaBLI.m
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          En esta parte de la practica se visualizara el espectro de la señal filtrada de la BLI.
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
Smod = Sportc .* (Smenc + 1) - Sports .* (Smens);
Sdesm = Smod .* Sportc;

Fn = Fs / 2;                            % Frec de Nyquisy
Fcn = 1 / Fn;                           % Frec de corte

[num den] = butter(2, Fcn);
Sfil = filter(num, den, Sdesm);
SFIL = (1 / Fs) .* real(fft(Sfil, Fs));
F = 0 : (Fs / 2) - 1;

stem(F, SFIL(F + 1), 'r')                           % Graficamos
title('Espectro de la señal filtrada de BLI')
xlabel('f')
ylabel('F(t)')
grid on