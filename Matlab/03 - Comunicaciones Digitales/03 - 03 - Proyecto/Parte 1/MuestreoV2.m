%{
** #################################################################################################################
**      Archivo: MuestreoV2.m
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

opc = 0;                                                                            % Variable opcion

% PANTALLA DE INICIO
disp([char(9) char(9) 'ESIME ZACATENCO | IPN | ICE' char(13) char(9) char(9) 'Comunicaciones digitales'])
disp([char(13) char(9) char(9) 'MESTREO DE SEÑALES'])
disp([char(9) char(9) char(9) '- Peña Paz Jorge Eduardo'])
disp([char(9) char(9) char(9) '- Zárate Méndez Cristopher Geovani'])

cont = input([char(13) char(9) char(9) 'Presione enter para continuar...']);
waitfor(cont)

clc                                                                                 % Limíamos pantalla

% INGRESO DE DATOS
disp([char(9) char(9) 'Nota: Recuerde que la frecuencia de muestreo es 2 veces la frecuencia(s) de la(s) señal(es).'])
Fs = input([char(9) char(9) 'Ingrese la frecuencia de muestreo [Hz]: ']);
Ts = 1 / Fs;                                                                        % Periodo de muestro
t = 0 : Ts / 10 : 2;                                                                % Tiempo de muestreo

% MENU DE MUESTREOS
while (opc ~= 4)
    clc

    FsC = num2str(Fs);

    disp([char(9) char(9) char(9) 'MENU DE MUESTREO'])
    disp([char(9) char(9) 'Frecuencia de muestreo = ' FsC 'Hz' char(13)])
    disp([char(9) char(9) '0.- Nueva frecuencia de muestreo.'])
    disp([char(9) char(9) '1.- Muestreo ideal.'])
    disp([char(9) char(9) '2.- Muestreo Natural.'])
    disp([char(9) char(9) '3.- Muestreo de techo plano.'])
    disp([char(9) char(9) '4.- Salir.'])
    opc = input([char(13) char(9) char(9) 'De una opcion: ']);

    switch opc
    % Nueva frecuencia de muestreo
    case 0
        clc
        disp([char(9) char(9) char(9) 'NUEVA FRECUENCIA DE MUESTREO'])
        Fs = input([char(13) char(9) char(9) 'De la nueva frecuencia [Hz]: ']);

    % MUESTREO IDEAL
    case 1
        clc
        % Ingresamos los datos de la señal original
        disp([char(9) char(9) char(9) 'MUESTREO IDEAL'])
        disp([char(9) char(9) 'Frecuencia de muestreo = ' FsC 'Hz'])
        A = input([char(13) char(9) char(9) 'Ingrese la amplitud de la señal [V]: ']);
        F = input([char(9) char(9) 'Ingrese la frecuencia de la señal [Hz]: ']);
        Tipo = input([char(9) char(9) 'Ingrese el tipo de señal (1 = sen / 2 = cos): ']);

        if Tipo == 1
            y = A * sin(2 * pi * F * t);                                            % Ec. de onda "ƒ(x) = A sen(2π * ω * t)"
        elseif Tipo == 2
            y = A * cos(2 * pi * F * t);                                            % Ec. de onda "ƒ(x) = A cos(2π * ω * t)"
        else
            disp([char(9) char(9) 'De una opcion correcta'])
            return
        end
        
        % GRAFICAMOS LAS SEÑALES
        subplot(2, 1, 1)                                                            % Dos filas, una columna, cuadrante uno
        plot(t, y, 'r', 'LineWidth', 2)                                            % Graficamos tiempo contra la función
        title('Señal original')
        ylabel('f(t)')
        xlabel('tiempo')
        grid on
        subplot(2, 1, 2)                                                            % Dos filas, una columna, cuadrante dos
        m = 1;
        
        for K = 0 : Ts / 10 : 2                                                     % Para K = 0, incrementando Ts / 10, hasta dos
            if mod(K, Ts) == 0                                                      % Si la division de K / Ts su resuido es 0
                Z(m) = y(m);
            else
                Z(m) = 0;
            end
        
            aux1 = [K, K];                                                          % Generamos una variable aux que contrenda un vector con dos datos
            aux2 = [0, Z(m)];                                                       % Generamos una variable aux que contrenda un vector con dos datos
            plot(aux1, aux2, 'b', 'LineWidth', 2)                                   % Graficamos aux1 contra aux2
            title('Muestreo ideal')
            hold on
            grid on
            m = m + 1;
        end

    % MUESTREO NATURAL/REAL
    case 2
        clc
        disp([char(9) char(9) char(9) 'MUESTREO NATURAL'])
        disp([char(9) char(9) 'Frecuencia de muestreo = ' FsC 'Hz'])
        n = input([char(13) char(9) char(9) 'Ingrese el numero de componentes: ']); % Pedimos al usuario que de el numero de señales a muestrear
        
        if (n == 0)
            disp([char(9) char(9) 'De un numero de componentes valido...'])
            return
        else
            S = 0;

            for c = 1 : n
                clc
                cont = num2str(c);
            
                % INGRESAMOS LOS DATOS DE LAS SEÑALES A MUESTREAR
                disp([char(9) char(9) char(9) 'MUESTREO NATURAL'])
                disp([char(9) char(9) 'Frecuencia de muestreo = ' FsC 'Hz'])
                A = input([char(13) char(9) char(9) 'Ingrese la amplitud de la señal [V] ' cont ': ']);
                F = input([char(9) char(9) 'Ingrese la frecuencia de la señal [Hz] ' cont ': ']);
                Tipo = input([char(9) char(9) 'Ingrese el tipo de señal (1 = sen / 2 = cos): ']);
            
                if Tipo == 1
                    y = A * sin(2 * pi * F * t);                                    % Ec. de onda "ƒ(x) = A sen(2π * ω * t)"
                elseif Tipo == 2
                    y = A * cos(2 * pi * F * t);                                    % Ec. de onda "ƒ(x) = A cos(2π * ω * t)"
                else
                    disp([char(9) char(9) 'De una opcion correcta...']);
                    return
                end
            
                S = S + y;
            end
            
            % GRAFICAMOS LAS SEÑALES
            subplot(2, 1, 1)                                                        % Dos filas, una columna, cuadrante uno
            plot(t, S, 'r', 'LineWidth', 3)                                         % Graficamos tiempo contra la suma de funciones
            title('Señal original')
            ylabel('f(t)')
            xlabel('tiempo')
            grid on

            subplot(2, 1, 2)                                                        % Dos filas, una columna, cuadrante dos
            m = 1;
            
            for K = 0 : Ts / 10 : 2                                                 % Para K = 0, incrementando Ts / 10, hasta dos
                if mod(K, Ts) == 0                                                  % Si la division de K / Ts su resuido es 0
                    Z(m) = y(m);
                else
                    Z(m) = 0;
                end
            
                aux1 = [K, K];                                                      % Generamos una variable aux que contrenda un vector con dos datos
                aux2 = [0, Z(m)];                                                   % Generamos una variable aux que contrenda un vector con dos datos
                plot(aux1, aux2, 'b', 'LineWidth', 2)                               % Graficamos aux1 contra aux2
                title('Muestreo natural')
                hold on
                grid on
                m = m + 1;
            end
        end
    
    % MUESTREO DE TECHO PLANO
    case 3
        clear
        disp([char(9) char(9) char(9) 'MUESTREO NATURAL'])
        disp([char(9) char(9) 'Frecuencia de muestreo = ' FsC 'Hz'])
        n = input([char(9) char(9) 'Ingrese el numero de componentes: ']);          % Pedimos al usuario que de el numero de señales a muestrear
        
        if (n == 0)
            disp([char(9) char(9) 'De un numero de componentes valido...'])
            return
        else
            S = 0;

            for c = 1 : n
                clc
                cont = num2str(c);
            
                % INGRESAMOS LOS DATOS DE LAS SEÑALES A MUESTREAR
                disp([char(9) char(9) char(9) 'MUESTREO NATURAL'])
                disp([char(9) char(9) 'Frecuencia de muestreo = ' FsC 'Hz'])
                A = input([char(13) char(9) char(9) 'Ingrese la amplitud de la señal [V] ' cont ': ']);
                F = input([char(9) char(9) 'Ingrese la frecuencia de la señal [Hz] ' cont ': ']);
                Tipo = input([char(9) char(9) 'Ingrese el tipo de señal (1 = sen / 2 = cos): ']);
            
                if Tipo == 1
                    y = A * sin(2 * pi * F * t);                                    % Ec. de onda "ƒ(x) = A sen(2π * ω * t)"
                elseif Tipo == 2
                    y = A * cos(2 * pi * F * t);                                    % Ec. de onda "ƒ(x) = A cos(2π * ω * t)"
                else
                    disp([char(9) char(9) 'De una opcion correcta...']);
                    return
                end
            
                S = S + y;
            end
            
            % GRAFICAMOS LAS SEÑALES
            subplot(2, 1, 1)                                                        % Dos filas, una columna, cuadrante uno
            plot(t, S, 'r', 'LineWidth', 2)                                         % Graficamos tiempo contra la suma de funciones
            title('Señal original')
            ylabel('f(t)')
            xlabel('tiempo')
            grid on

            K = 0 : Ts / 10 : 2;                                                    % Para K = 0, incrementando Ts / 10, hasta dos
            s = S(1 : length(K));
            xn = round(s);
            subplot(2, 1, 2)                                                        % Dos filas, una columna, cuadrante dos
            stairs(K, xn, 'b', 'LineWidth', 2)
            title('Muestreo de techo plano')
            hold on
            grid on
        end
    
    % MUESTREO DE TECHO PLANO
    case 4
        clc
        disp([char(9) char(9) 'Hasta la proxima...'])
    end
end

% ------------------------------------------------  F  I  N  A  L  ------------------------------------------------