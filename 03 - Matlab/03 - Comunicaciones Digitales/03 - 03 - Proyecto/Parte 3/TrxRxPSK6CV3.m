%{
** #################################################################################################################
**      Archivo: TrxRxPSK.m
**      SO: Windows 11
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

opc = 0;                                                                            % Variable opcion
k = 3;                                                                              % #bits por signo

% PANTALLA DE INICIO
disp([char(9) char(9) 'ESIME ZACATENCO | IPN | ICE' char(13) char(9) char(9) 'Comunicaciones digitales'])
disp([char(13) char(9) char(9) 'Trx/Rx PSK'])
disp([char(9) char(9) char(9) '- Peña Paz Jorge Eduardo'])
disp([char(9) char(9) char(9) '- Martinez Hernandez Daniel'])

cont = input([char(13) char(9) char(9) 'Presione enter para continuar...']);
waitfor(cont)

clc                                                                                 % Limíamos pantalla

while (opc ~= 3)
    clc 
    disp([char(9) char(9) char(9) 'MENU DE PSK']);
    disp([char(9) char(9) '1.- Transmitir mensaje.']);
    disp([char(9) char(9) '2.- Recibir mensaje.']);
    disp([char(9) char(9) '3.- Salir']);
    opc = input([char(13) char(9) char(9) 'De una opcion: ']);

    switch opc
        % TRANSMISION DEL MENSAJE
        case 1
            clc
            disp([char(9) char(9) char(9) 'TRANSMISOR']);
            
            % INGRESAMOS UNA CADENA
            cadena = input('        Ingrese el mensaje a convertir: ', 's');

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
            Mm = 2 .^ k;

            % GUARDAMOS EN UN ARCHIVO DE TEXTO
            nArchivo = 'PSK.txt';
            fileID = fopen(nArchivo, 'w');
            fprintf(fileID, '\n\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣴⣾⣿⣿⣿⣿⣶⣶⣶⣤⣤⡀                             ESIME UNIDAD ZACATENCO      | IPN | 2023');
            fprintf(fileID, '\n\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀COMUNICACIONES DIGITALES    | 6CV3');
            fprintf(fileID, '\n\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄                       AUTOR: Jorge Peña');
            fprintf(fileID, '\n\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀');
            fprintf(fileID, '\n\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀');
            fprintf(fileID, '\n\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀');
            fprintf(fileID, '\n\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀');
            fprintf(fileID, '\n\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀');
            fprintf(fileID, '\n\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣤⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀');
            fprintf(fileID, '\n\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡄⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀');
            fprintf(fileID, '\n\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⠿⠿⠿⠿⣿⣦⣄⠀⠀⠀⠀⠀⢼⣿⣿⡿⠋⠉⠀⠈⢙⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀');
            fprintf(fileID, '\n\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣷⣶⣾⣿⣿⣷⣶⣄⠀⠀⠀⠀⠸⠃⣠⣴⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀');
            fprintf(fileID, '\n\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⠿⢿⣿⣿⣿⣿⣿⡿⠀⠀⠀⠀⠀⠀⠻⠿⣿⣿⣿⠿⠟⠋⠉⢻⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀');
            fprintf(fileID, '\n\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⠁⠀⠀⠈⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⣿⣿⣿⣿⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀');
            fprintf(fileID, '\n\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀');
            fprintf(fileID, '\n\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⣿⣿⣿⣿⣧⣄⣀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠤⢤⣤⣤⣴⣾⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀');
            fprintf(fileID, '\n\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⡉⠁⠀⠀⠰⣤⣀⠀⠀⢀⣴⡶⠀⠀⠀⠀⣿⣿⡏⢸⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀');
            fprintf(fileID, '\n\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣧⠹⣿⣷⣤⣀⣀⣀⣼⣿⣿⣿⣿⣿⣦⣀⣤⣤⣾⣿⡟⢀⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀');
            fprintf(fileID, '\n\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣿⣿⣿⣿⣿⣧⠘⣿⡿⠿⠿⠿⣿⣿⣇⣀⣹⣿⠿⠿⠟⠛⣿⡟⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀');
            fprintf(fileID, '\n\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⣿⣿⣿⣿⣷⡘⢿⡶⢤⣀⣀⣀⣉⣉⣁⣀⣀⣠⣴⣾⡟⢁⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀');
            fprintf(fileID, '\n\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡌⠁⠀⠀⠈⠻⣿⣿⣿⡟⠛⠉⢹⠟⢠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⣄⡀⠀⠀⠀⠀⠀');
            fprintf(fileID, '\n\t\t⠀⠀⠀⠀⠀⢀⣀⣤⣴⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⣿⣿⣿⡇⠀⠀⠈⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣶⣤');
            fprintf(fileID, '\n\t\t⢀⣤⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡀⠀⠀⢻⣿⣿⡇⠀⠀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿');
            fprintf(fileID, '\n\t\t⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⣄⣸⣿⣿⣧⣤⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿');
            fprintf(fileID, '\n\t\t⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿');
            fprintf(fileID, '\n\nEl número de bits por signo es: %d', k);
            fprintf(fileID, '\n\nLa tabla PSK es:');

            for i = 0 : Mm - 1
                teta = (360 * i) / Mm;
                kB = dec2bin(i, k);
                fprintf(fileID, ['\n\tP', num2str(i), ' = ', num2str(teta), ' -> #bits por signo: ', kB]);
            end

            fprintf(fileID, '\n\nEl codigo es: ');
            fprintf(fileID, '%d ', nMen);                                                        % ESCRIBE BIT POR BIT EN EL ARCHIVO DE TEXTO

            fclose(fileID);

            disp([char(13) char(9) char(9) 'El vector nMen se ha guardado en el archivo: ', nArchivo]);
            cont = input([char(13) char(9) char(9) 'Presione enter para continuar...']);
            waitfor(cont)

        % RECEPCION DEL MENSAJE
        case 2
            clc
            disp([char(9) char(9) char(9) 'RECEPTOR']);

            % INGRESAR NOMBRE DEL ARCHIVO TXT
            nombreArchivo = input('        Ingrese el nombre del archivo (incluyendo la extensión): ', 's');

            % LEER ARCHIVO TXT
            fid = fopen(nombreArchivo, 'r');
            contenido = fscanf(fid, '%s');
            fclose(fid);

            % BUSCAR SECUENCIAS CÓDIGO BINARIO
            expresion = '[0 1]{8}';                                                              % Expresión regular para buscar secuencias de 8 dígitos binarios
            matches = regexp(contenido, expresion, 'match');                                     % Buscar todas las coincidencias

            % DECODIFICAR LAS SECUANCIAS BINARIAS EN UNA CADENA DE TXT
            cadenaTexto = '';
            for i = 1 : numel(matches)
                binario = matches{i};
                caracter = bin2txt(binario);
                cadenaTexto = [cadenaTexto, caracter];
            end

            % MOSTRAR LA CADENA DE TEXTO CÓDIFICADA
            disp([char(13) char(9) char(9) 'El mensaje es: ', cadenaTexto]);

            cont = input([char(13) char(9) char(9) 'Presione enter para continuar...']);
            waitfor(cont)

        case 3
            clc
            disp([char(9) char(9) 'Hasta la proxima...'])
    end
end

% -----------------------------------------------  F U N C I O N E S  ----------------------------------------------
% FUNCION PARA DECODIFICAR UNA SECUENCIA BINARIA A UN CARACTER
function caracter = bin2txt(binario)
	decimal = bin2dec(binario);
	caracter = char(decimal);
end