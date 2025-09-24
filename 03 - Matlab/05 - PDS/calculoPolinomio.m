%{
** ######################################################################################################
**      Archivo: 05 - calculoPolinomio.m
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          Se realizara el calculo de las constantes para conocer la respuesta al impulso del sistema.
** ######################################################################################################
%}

% LIMPIEZA DE VARIABLES Y CONSOLA
clear all
clc

% Variables
a1 = input('Ingrese el valor de a del primer polinomio: ');
b1 = input('Ingrese el valor de b del primer polinomio: ');
c1 = input('Ingrese el valor de c del primer polinomio: ');

a2  = input('Ingrese el valor de a del segundo polinomio: ');
b2  = input('Ingrese el valor de b del segundo polinomio: ');
c2  = input('Ingrese el valor de c del segundo polinomio: ');

% Chicharroneras
%* Primera raiz ecuacion 1
raiz1 = (-b1 + sqrt((b1.^2) - (4 * a1 * c1))) / (2 * a1)
%* Segunda raiz ecuacion 1
raiz2 = (-b1 - sqrt((b1 .^ 2) - (4 * a1 * c1))) / (2 * a1)

%* Primera raiz ecuacion 2
raiz3 = (-b2 + sqrt((b2.^2) - (4 * a2 * c2))) / (2 * a2)
%* Segunda raiz ecuacion 2
raiz4 = (-b2 - sqrt((b2 .^ 2) - (4 * a2 * c2))) / (2 * a2)

% Forma polar
r12 = abs(raiz1)             % Modulo para la raiz 1 y 2
r34 = abs(raiz3)             % Modulo para la raiz 3 y 4

angRadR1 = angle(raiz1);
angRadR2 = angle(raiz2);
angRadR3 = angle(raiz3);
angRadR4 = angle(raiz4);

angGradR1 = rad2deg(angRadR1);
angGradR2 = rad2deg(angRadR2);
angGradR3 = rad2deg(angRadR3);
angGradR4 = rad2deg(angRadR4);

disp([num2str(r12), 'e^(', num2str(angGradR1), 'j)'])
disp([num2str(r12), 'e^(', num2str(angGradR2), 'j)'])
disp([num2str(r34), 'e^(', num2str(angGradR3), 'j)'])
disp([num2str(r34), 'e^(', num2str(angGradR4), 'j)'])
