%{
** ######################################################################################################
**      Archivo: 00 - FuncionesBasicasEnComunicaciones.m
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          En esta practica se pretende conocer los elementos básicos de la programación en Matlab, así
**          como gráficar las funciones más importantes de comunicaciones, tales como el seno, coseno,
**          exponencial, triangular y rectangular.
**
**          La funcion seno es una función periodica (Por programa).
**          La funcion seno, coseno, triangular, cuadrada, exponencial es una función periodica (General)
** ######################################################################################################
%}

clear
clc

%! GRAFICA DEL SENO

% Definimos la variable en tiempo que inicializa en 0 con ingrementos ((2 * pi) / 100) y termina en 2 * pi (18 * pi)
ts = 0 : ((2 * pi) / 100) : 2 * pi;
ys = sin(ts);

tc = 0 : ((2 * pi) / 100) : 2 * pi;
yc = cos(tc);

tt = [0 pi 2*pi];
xt = [0 3 0];

tcc = [-6 -6 0 0 6 6];
xcc = [0 -1 -1 1 1 0];

% GRAFICA SIN
subplot(1, 5, 1)
plot(ts, ys, 'r')
grid on
xlabel('Tiempo')
ylabel('Amplitud')
title('Seno')

%! GRAFICA DEL COSENO
subplot(1, 5, 2)
plot(tc, yc, 'b')
grid on
xlabel('Tiempo')
title('Coseno')

% GRAFICA EXPONENCIAL
subplot(1, 5, 3)
plot(ts, ys, 'g')
grid on
xlabel('Tiempo')
title('Exponencial')

%! GRAFICA TRIANGULAR
subplot(1, 5, 4)
plot(tt, xt, 'm')
grid on
xlabel('Tiempo')
title('Triangular')

%! GRAFICA CUADRADA
subplot(1, 5, 5)
plot(tcc, xcc, 'k')
grid on
xlabel('Tiempo')
title('Cuadrada')
