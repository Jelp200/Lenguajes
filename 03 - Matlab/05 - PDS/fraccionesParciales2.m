%{
** ######################################################################################################
**      Archivo: 09 - fraccionesParciales2.m
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**                  Script para graficar la respuesta al impulso de un sistema.
** ######################################################################################################
%}

clear all
clc

% Definimos los numeros complejos
CPX1 = 0.569 + 0.3415i;
CPX2 = 0.569 - 0.3415i;
CPX3 = -0.16 + 0.1768i;
CPX4 = -0.16 - 0.1768i;

% Calculamos sus magnitudes y angulos
MAG12 = abs(CPX1);
MAG34 = abs(CPX3);

%* Angulos en radianes
ANG1 = angle(CPX1);
ANG2 = angle(CPX2);
ANG3 = angle(CPX3);
ANG4 = angle(CPX4);

%* Angulos en grados
ANG1G = rad2deg(ANG1);
ANG2G = rad2deg(ANG2);
ANG3G = rad2deg(ANG3);
ANG4G = rad2deg(ANG4);

% Expresamos los numeros complejos en forma polar
disp([num2str(MAG12), 'e^(j', num2str(ANG1G), '°)'])
disp([num2str(MAG12), 'e^(j', num2str(ANG2G), '°)'])
disp([num2str(MAG34), 'e^(j', num2str(ANG3G), '°)'])
disp([num2str(MAG34), 'e^(j', num2str(ANG4G), '°)'])