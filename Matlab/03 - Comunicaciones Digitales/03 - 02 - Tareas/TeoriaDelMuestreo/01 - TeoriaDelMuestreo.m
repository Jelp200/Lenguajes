%{
** #################################################################################################################
**      Archivo: TeoriaDekMuestreo
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

clc                                                     % Limpiamos pantalla
clear                                                   % Limpiamos el caché

% Frecuencia de muestreo
Fs = input('Ingrese la frecuencia de muestreo [Hz]: ');

Ts = 1 / Fs;
t = 0 : Ts / 10 : 2;

% Nuemero de omponentes
n = input('Ingrese el numero de componentes: ');

S = 0;

for c = 1 : n
    cont = num2str(c);

    clc
    disp(['La frecuencia de muestreo es: ' num2str(Fs) '[Hz]'])

    % Ingreso de datos
    A = input(['Ingrese la amplitud de la señal ' cont ' [V]: ']);
    Fo = input(['Ingrese la frecuencia de la señal ' cont ' [Hz]: ']);
    Type = input('Ingrese el tipo de señal (1 = sin / 2 = cos): ');

    switch Type
        case 1
            y = A * sin(2 * pi * Fo * t);
        case 2
            y = A * cos(2 * pi * Fo * t);
        otherwise
            disp('De una opcion correcta...')
            return
    end

    S = S + y;

end

% GRAFICAMOS LAS SEÑALES
plot(t, S)                                              % Graficamos tiempo contra la suma de funciones
title('Señal original')
ylabel('V')
xlabel('Tiempo')
grid on