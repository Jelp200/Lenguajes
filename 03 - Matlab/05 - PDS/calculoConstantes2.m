%{
** ######################################################################################################
**      Archivo: 03 - CalculoConstantes2.m
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          Se realizara el calculo de las constantes para conocer la respuesta al impulso del sistema.
** ######################################################################################################
%}

clear all
clc

% Contantes
a = cos((4 * pi) / 9);
b = sin((4 * pi) / 9);
c = cos((2 * pi) / 9);
d = 1;
e = sin((2 * pi) / 9);
f = 0;
g =  cos((6 * pi) / 9);
h = sin((6 * pi) / 9);

% 1er ecuacion "(C1 * A) + (C2 * B) = Z"
A = a - (0.4 * c) + (0.16 * d);
B = b - (0.4 * e) + (0.16 * f);
Z = a - (1.87935 * c) + d;

% 2da ecuacion "(C1 * E) + (C2 * F) = W"
E = g - (0.4 * a) + (0.16 * c);
F = h - (0.4 * b) + (0.16 * e);
W = g - (1.87935 * a) + c;

% Calculo constante C1
C1 = (Z/A) - (B/A) * (((A*W) -(E*Z)) / ((A * F) - (E*B)))

% Calculo constante C2
C2 = ((A * W) - (E * Z)) / ((A * F) - (E*B))

K0 = C1.^ 2
K1 = C2.^ 2
M = sqrt(K0 + K1)
