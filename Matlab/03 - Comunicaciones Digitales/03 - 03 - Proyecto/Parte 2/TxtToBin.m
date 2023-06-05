%{
** #################################################################################################################
**      Archivo: Proyecto2V2.m
**
**      Institución:
**          Instituto Politécnico Nacional
**
**      Escuela:
**          Escuela de ingeniería mecánica y eléctrica
** #################################################################################################################
%}

clc
clear

cadena = input('Ingrese el mensaje a convertir: ', 's');
bN = dec2bin(cadena, 8);

for t1 = 1 : length(cadena)
    for t2 = 1 : 8
        En(t1, t2) = bin2dec(bN(t1, t2));
    end
end

conteo = 1;
for k1 = 1 : length(En(:, 1))
    for k2 = 1: 8
        P_aux(conteo) = En(k1, k2);
        conteo = conteo + 1;
    end
end

M = P_aux;
MNvo = M;

k = input('Ingrese el número de bits por simbolo: ');
kc = 2 .^ k;
for b = 1 : k
    x = length(MNvo);
    if mod(x, k2) ~= 0
        MsjNuevo(x + 1) = 1;
    else
        break
    end
end

nmen = MNvo;

nA = 'nuevoMensajeP.txt';
fileID = fopen(nA, 'w');
fprintf(fileID, '\n\t\tESIME UNIDAD ZACATENCO | IPN | 2023 | COMUNICACIONES DIGITALES | 6CV3');
fprintf(fileID, '\n\nCódigo: ');
fprintf(fileID, '%d ', nmen);
fprintf(fileID, '\n\nk = %d', k);
fprintf(fileID, '\n\n\tBINARIO\t| DECIMAL');
for i = 0 : kc - 1
    kbin = dec2bin(i, k);
    fprintf(fileID, ['\n\t', kbin, '    | ', num2str(i)]);
end

fclose(fileID);

disp(['El archivo de texto generado es: ', nA]);