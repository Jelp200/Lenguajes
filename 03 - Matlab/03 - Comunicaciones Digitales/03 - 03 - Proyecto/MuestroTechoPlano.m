%{
** #################################################################################################################
**      Archivo: MuestreoTechoPlano.m
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

clc                                                     % Limpiamos pantalla
clear                                                   % Limpiamos el caché

Fs = input('Ingrese la frecuencia de muestreo: ');      % Frecuencia de muestreo !OJO¡ Dicha Fs tiene que ser por lo
                                                        % menos 2 veces mayor a F ingresada
Ts = 1 / Fs;                                            % Periodo de muestro
t = 0 : Ts / 10 : 2;                                    % Tiempo de muestreo

n = input('Ingrese el numero de componentes: ');        % Pedimos al usuario que de el numero de señales a muestrear

S = 0;                                                  % Variable para almacenar la suma de componentes

for c = 1 : n
    cont = num2str(c);

    % INGRESAMOS LOS DATOS DE LAS SEÑALES A MUESTREAR
    A = input(['Ingrese la amplitud de la señal ' cont ': ']);         % Pedimos la amplitud
    F = input(['Ingrese la frecuencia de la señal ' cont ': ']);       % Pedimos la frecuencia de la señal
    Tipo = input('Ingrese el tipo de señal (1 = sen / 2 = cos): ');

    if Tipo == 1
        y = A * sin(2 * pi * F * t);                        % Ec. de onda "ƒ(x) = A sen(2π * ω * t)"
    elseif Tipo == 2
        y = A * cos(2 * pi * F * t);                        % Ec. de onda "ƒ(x) = A cos(2π * ω * t)"
    else
        disp('De una opcion correcta');
        return
    end

    S = S + y;
end

% GRAFICAMOS LAS SEÑALES
subplot(2, 1, 1)                                        % Dos filas, una columna, cuadrante uno
plot(t, S)                                              % Graficamos tiempo contra la suma de funciones
title('Señal original')
ylabel('f(t)')
xlabel('tiempo')
grid on

n = 0 : Ts / 10 : 2;
s = S(1 : length(n));
xn = round(s);
subplot(2, 1, 2)
stairs(n, xn)
title('Muestreo de techo plano')
xlabel('tiempo')
hold on
grid on