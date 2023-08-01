%{
** #################################################################################################################
**      Archivo: MuestreoIdeal.m
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

Fs = input('Ingrese la frecuencia de muestreo: ');      % Frecuencia de muestreo !OJO¡ Dicha Fs tiene que ser por lo
                                                        % menos 2 veces mayor a F ingresada
Ts = 1 / Fs;                                            % Periodo de muestro
t = 0 : Ts / 10 : 2;                                    % Tiempo de muestreo

% INGRESAMOS LOS DATOS DE LA SEÑAL A MUESTREAR
A = input('Ingrese la amplitud de la señal: ');         % Pedimos la amplitud
F = input('Ingrese la frecuencia de la señal: ');       % Pedimos la frecuencia de la señal
Tipo = input('Ingrese el tipo de señal (1 = sen / 2 = cos): ');

if Tipo == 1
    y = A * sin(2 * pi * F * t);                        % Ec. de onda "ƒ(x) = A sen(2π * ω * t)"
elseif Tipo == 2
    y = A * cos(2 * pi * F * t);                        % Ec. de onda "ƒ(x) = A cos(2π * ω * t)"
else
    disp('De una opcion correcta');
    return
end

% GRAFICAMOS LAS SEÑALES
subplot(2, 1, 1)                                        % Dos filas, una columna, cuadrante uno
plot(t, y)                                              % Graficamos tiempo contra la función
title('Señal original')
ylabel('f(t)')
xlabel('tiempo')
grid on
subplot(2, 1, 2)                                        % Dos filas, una columna, cuadrante dos
m = 1;

for K = 0 : Ts / 10 : 2                                  % Para K = 0, incrementando Ts / 10, hasta dos
    if mod(K, Ts) == 0                                  % Si la division de K / Ts su resuido es 0
        Z(m) = y(m);
    else
        Z(m) = 0;
    end

    aux1 = [K, K];                                      % Generamos una variable aux que contrenda un vector con dos datos
    aux2 = [0, Z(m)];                                   % Generamos una variable aux que contrenda un vector con dos datos
    plot(aux1, aux2, 'b')                               % Graficamos aux1 contra aux2
    hold on
    grid on
    m = m + 1;
end