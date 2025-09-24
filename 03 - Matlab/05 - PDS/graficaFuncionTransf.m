%{
** ######################################################################################################
**      Archivo: 06 - graficaFuncionTransf.m
**      SO: Windows 11
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

% GRAFICACIÓN DE LA FUNCION DE TRANSFERENCIA
vr = 0 : 0.01 : 2;
vw = -pi : pi/100 : pi;

for in1 = 1 : numel(vr)
    for in2 = 1 : numel(vw)
        z(in1, in2) = vr(in1) * exp(1j * 2 * pi * vw(in2));
    end
end

Nz = 1 - (1.87935 * z.^(-1)) + z.^(-2);
Dz = 1 - (0.4 * z.^(-1)) + 0.16 * z.^(-2);
Hz = Nz ./ Dz;

% GRAFICACIÓN DE LA RESPUESTA AL IMPULSO
surface(real(z),imag(z),abs(Hz), 'EdgeColor', '#94414e', 'FaceColor','#c04a5c')
grid
view(3)
zlim([0 2])