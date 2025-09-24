%{
** ######################################################################################################
**      Archivo: 05 - 3&5Terminos.m
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          En esta parte de la practica se pretende aproximaremos a traves de una serie exponencial de
**          Fourier.
**              5.- Una función triangular.
** ######################################################################################################
%}

clear all
clf                                     % Elimina las figuras
clc

% MAIN PROGRAM

% Definimos el inicio y termino.
t = 0 : 1/100 : 2;

fo = 1 / 2;
cnte = j / (2 * pi);

c1 = exp(-j * 2 * pi * t);
c1c = exp(j * 2 * pi * t);
c1s = cnte * (c1 - c1c);
c1r = real(c1s);
c1t = fo + c1r;
subplot(1, 2, 1)
plot(t, c1t)
title('Aproximacion de la fnc exp con 3 terminos')

c2 = exp(j * 2 * pi * t * 2);
c2c = exp(-j * 2 * pi * t * 2);
c2s = cnte * (c2 - c2c) / 2;
c2r = real(c2s);
c2t = c1t + c2r;
subplot(1, 2, 2)
plot(t, c2t)
title('Aproximacion de la fnc exp con 5 terminos')