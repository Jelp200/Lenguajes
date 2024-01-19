%{
** ######################################################################################################
**      Archivo: 02 - graficaRespuestaImpulso.m
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**                  Script para graficar la respuesta al impulso de un sistema.
** ######################################################################################################
%}

% LIMPIEZA DE VARIABLES, CONSOLA Y GRÁFICAS
clear all
close all
clc

% Definicion de variables
n = 0:0.01:5;
k = 8.57748;
f = 3.7891 * (0.4.^n) * 2 .* cos(60 * n + 179.2112) + k * dirac(n);

% Graficacion de la respuesta al impulso
idx = f == Inf;                 % find Inf
f(idx) = 1;                     % Set Inf to finite value
plot(n, f,'r');
title('Respuesta al impulso');
xlabel('n');
ylabel('f(n)');
grid on;