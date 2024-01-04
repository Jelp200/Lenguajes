%{
** ######################################################################################################
**      Archivo: 00 - CalculoCntes.m
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          En este programa se calcularan las constantes necesarias para poder realizar el proyecto
**          final de pds.
** ######################################################################################################
%}

clear all
clc

% Parámetros de la ecuación
A = 3.72431;
alpha = 0.4;
beta = 60;
theta = -42.483;

% Rango de índices para la respuesta al impulso
n = 0:50;

% Definir la función de respuesta al impulso
h = A * alpha^2 * 2 * cos(deg2rad(beta * n - theta)) + 4.5 * (n == 0);

% Graficar la respuesta al impulso
stem(n, h, 'LineWidth', 1.5, 'Marker', 'o', 'MarkerSize', 5);
title('Respuesta al Impulso');
xlabel('n');
ylabel('h[n]');
grid on;

