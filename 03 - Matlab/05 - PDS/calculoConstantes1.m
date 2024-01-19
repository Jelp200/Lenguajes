%{
** ######################################################################################################
**      Archivo: 01 - CalculoConstantes1.m
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          Se realizara el calculo de las constantes para conocer la respuesta al impulso del sistema.
** ######################################################################################################
%}

clear all
clc

%* a
angGradCPX1 = 60;
angRadCPX1 = deg2rad(angGradCPX1);
CPX1 = 0.49 * (cos(angRadCPX1) + 1i * sin(angRadCPX1))

%* b
angGradCPX2 = -60;
angRadCPX2 = deg2rad(angGradCPX2);
CPX2 = 0.49 * (cos(angRadCPX2) + 1i * sin(angRadCPX2))

%* e
angGradCPX3 = 120;
angRadCPX3 = deg2rad(angGradCPX3);
CPX3 = .2473 * (cos(angRadCPX3) + 1i * sin(angRadCPX3))

%* f
angGradCPX4 = -120;
angRadCPX4 = deg2rad(angGradCPX4);
CPX4 = .2473 * (cos(angRadCPX4) + 1i * sin(angRadCPX4))

z = -1.11803;                                                       % Valor de z
w = -036803;                                                         % Valor de w


% Calculo constante C1
C1 = (z / CPX1) - (CPX2 / CPX1) * (((CPX1 * w) - (CPX3 * z)) / ((CPX1 * CPX4) - (CPX3 * CPX2)))

% Calculo constante C2
C2 = ((CPX1 * w) - (CPX3 * z)) / ((CPX1 * CPX4) - (CPX3 * CPX2))

%* FORMA CARTESIANA A POLAR
RC1 = abs(C1);                                                       % Magnitud de C1
angRadC1 = angle(C1);                                                % Angulo de C1 en radianes
angGradC1 = rad2deg(angRadC1);                                      % Angulo de C1 en grados
disp([num2str(RC1), 'e^(', num2str(angGradC1), 'j)'])

RC2 = abs(C2);                                                       % Magnitud de C2
angRadC2 = angle(C2);                                                % Angulo de C2 en radianes
angGradC2 = rad2deg(angRadC2);                                      % Angulo de C2 en grados
disp([num2str(RC2), 'e^(', num2str(angGradC2), 'j)'])