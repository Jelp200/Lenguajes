%{
** ######################################################################################################
**      Archivo: 03 - 04 - Filtraje.m
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          En esta parte de la practica se recuperara la señal original, para ello la filtraremos con un
**          filtro Butterworth de 1er Orden y utilizaremos la función "butter" en matlab.
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
fn = Fs / 2;                            % Teorema de Nyquist
fcn = 1 / fn;
[num den] = butter(2, fcn);
Sfil = filter(num, den, Sdesm);         % Señal filtrada

plot(t, Sfil)
title('Gráfica de la señal desmodulada original')
grid on