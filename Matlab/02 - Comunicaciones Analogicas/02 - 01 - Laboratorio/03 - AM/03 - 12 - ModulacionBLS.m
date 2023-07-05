%{
** ######################################################################################################
**      Archivo: 03 - 12 - ModulaciónBLS.m
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          En esta parte de la practica se visualizara la señal modulada de BLS.
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

Sportc = A * cos(Wport .* t);            % Declaramos las funciónes
Sports = sin(Wport .* t);
Smenc = Amen * cos(Wmen .* t);
Smens = Amen * sin(Wmen .* t);
Smod = Sportc .* (Smenc + 1) + Sports .* (Smens);

plot(t, Smod)                          % Graficamos
title('Señal modulada de BLS')
xlabel('f')
ylabel('F(t)')
grid on