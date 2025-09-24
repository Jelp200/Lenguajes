%{
** ######################################################################################################
**      Archivo: 08 - fraccionesParciales1.m
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**                  Script para graficar la respuesta al impulso de un sistema.
** ######################################################################################################
%}

clear all

fprintf('--------------------------------------------------------------------------\n');
angGradCPX1 = 60;
angRadCPX1 = deg2rad(angGradCPX1);
CPX1 = (0.4) * (cos(angRadCPX1) + 1i * sin(angRadCPX1))

angGradCPX2 = -60;
angRadCPX2 = deg2rad(angGradCPX2);
CPX2 = (0.4) * (cos(angRadCPX2) + 1i * sin(angRadCPX2))

angGradCPX3 = 40;
angRadCPX3 = deg2rad(angGradCPX3);
CPX3 = (1) * (cos(angRadCPX3) + 1i * sin(angRadCPX3))

angGradCPX4 = -40;
angRadCPX4 = deg2rad(angGradCPX4);
CPX4 = (1) * (cos(angRadCPX4) + 1i * sin(angRadCPX4))

% Valor cartesiano de la exponencial
coef = input('Digite el coeficiente de z: ');
angGrad = input('Digite el angulo el grados de z: ');
angRad = deg2rad(angGrad);
resultado = coef * (cos(angRad) + 1i * sin(angRad))

% Valor fraccion parcial
A = input('Digite el valor de A: ');
g = input('Digite el valor de g: ');

z = resultado;

a = (z.^3) - ((z.^2) * (A + cos(angRad))) + ((z) * (1 + A * cos(angRad))) - cos(angRad);
b = (z - complex(0.2, 0.3464)) * (z - complex(0.2, -0.3464)) * (z - complex(0.7660, -0.6428));

div = a/b