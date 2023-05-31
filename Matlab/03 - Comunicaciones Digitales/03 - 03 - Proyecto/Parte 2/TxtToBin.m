%{
** #################################################################################################################
**      Archivo: TxtToBin.m
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Autores:
**          Peña P. Jorge E.
**
**      Institución:
**          Instituto Politécnico Nacional
**
**      Escuela:
**          Escuela de ingeniería mecánica y eléctrica
**
**      Carrera:
**          Ingeniería en comunicaciones y electrónica
** #################################################################################################################
%}

% -----------------------------------------------  I  N  I  C  I  O  -----------------------------------------------

clc                                                                                 % Limpiamos pantalla
clear                                                                               % Limpiamos el caché

% INGRESAMOS UNA CADENA
cadena = input('Ingrese la cadena a convertir: ', 's');

% CONVERTIMOS LA CADENA A SU EQUIVALENTE BINARIO
bN = dec2bin(cadena);

% MOSTRAMOS EL RESULTADO
disp(['La representación binaria de "', cadena, '" es:'])
disp(bN)