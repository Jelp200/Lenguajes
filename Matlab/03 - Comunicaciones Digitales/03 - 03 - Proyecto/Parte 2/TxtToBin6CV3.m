%{
** #################################################################################################################
**      Archivo: TxtToBin6CV3.m
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Autores:
**          Peña Paz Jorge Eduardo
**          Zárate Méndez Cristopher Geovani
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
cadena = input('Ingrese el mensaje a convertir: ', 's');

% CONVERTIMOS LA CADENA A SU EQUIVALENTE BINARIO
bN = dec2bin(cadena, 8);

% CONVERTIMOS CADA GRUPO DE 8b EN EQUIVALENTE DECIMAL Y LOS ALMACENAMOS EN
% LA MATRIZ "En"
for t1 = 1 : length(cadena)
    for t2 = 1 : 8
        En(t1, t2) = bin2dec(bN(t1, t2));
    end
end

% CONCATENAMOS TODOS LOS ELEMENTOS DE LA MATRIZ "En" EN UN SOLO VECTOR
% LLAMADO "P_aux"
conteo = 1;
for k1 = 1 : length(En(:, 1))
    for k2 = 1: 8
        P_aux(conteo) = En(k1, k2);
        conteo = conteo + 1;
    end
end

% (VARIABLES AUXILIARES)
M = P_aux;                                                                          % EL CONTENIDO DE "P_aux" SE COPIA EN "M"
MsjNuevo = M;                                                                       % EL CONTENIDO DE "M" SE COPIA EN "MsjNuevo"

k = input('Ingrese el número de bits por simbolo: ');

% AGREGAMOS CEROS AL FINAL DEL VECTOR "MsjNuevo" HASTA QUE SU LONGITUD SEA
% MÚLTIPLO DE "k"
for b = 1 : k
    x = length(MsjNuevo);
    if mod(x, k2) ~= 0
        MsjNuevo(x + 1) = 1;
    else
        break
    end
end

nMen = MsjNuevo;                                                                    % EL CONTENIDO DE "MsjNuevo" SE COPIA EN "nMen"

% GUARDAMOS EN UN ARCHIVO DE TEXTO
nArchivo = 'nuevoMensaje.txt';
fileID = fopen(nArchivo, 'w');
fprintf(fileID, '%d', nMen);
fclose(fileID);

disp(['El vector nMen se ha guardado en el archivo: ', nArchivo]);