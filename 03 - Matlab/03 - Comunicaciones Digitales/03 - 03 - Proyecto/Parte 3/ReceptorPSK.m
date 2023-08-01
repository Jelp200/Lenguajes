%{
** #################################################################################################################
**      Archivo: ReceptorPSK.m
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Autores:
**          Peña Paz Jorge Eduardo
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

% Ingresar el nombre del archivo de texto
nombreArchivo = input('Ingrese el nombre del archivo de texto (incluyendo la extensión): ', 's');

% Leer el archivo de texto
fid = fopen(nombreArchivo, 'r');
contenido = fscanf(fid, '%s');
fclose(fid);

% Buscar secuencias de código binario
expresion = '[0 1]{8}'; % Expresión regular para buscar secuencias de 8 dígitos binarios
matches = regexp(contenido, expresion, 'match'); % Buscar todas las coincidencias

% Decodificar las secuencias binarias en una cadena de texto
cadenaTexto = '';
for i = 1:numel(matches)
	binario = matches{i};
	caracter = bin2txt(binario);
	cadenaTexto = [cadenaTexto, caracter];
end

% Mostrar la cadena de texto decodificada
disp('Mensaje decodificado:');
disp(cadenaTexto);

% Función para decodificar una secuencia binaria a un caracter
function caracter = bin2txt(binario)
	decimal = bin2dec(binario);
	caracter = char(decimal);
end
