%{
** ######################################################################################################
**      Archivo: 03 - 09 - EspectroSenhalFiltrada.m
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          CHECAR BIEN EN CLASE
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
Sdesm = Smod .* Sport;
fn = Fs / 2;
fcn = 1 / fn;
[num den] = butter(2, fcn);
Sfil = filter(num, den, Sdesm);         % Señal filtrada
SFIL = (1 / Fs) .* real(fft(Sdesm, Fs));
F =  0 : (Fs / 2) - 1;

stem(F, SFIL(F + 1))                    % Graficamos
title('Espectro de la señal filtrada original')
xlabel('f')
ylabel('F(t)')
grid on