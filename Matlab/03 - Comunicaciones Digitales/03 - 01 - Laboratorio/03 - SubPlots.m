% DIVIDIR LAS PANTALLAS

% Inicialización de variables
t = 0 : 0.01 : 2 * pi;
f = 1;
A = 2;

% Declaramos el seno y coseno
X = A * sin(2 * pi * f * t);
Y = A * cos(2 * pi * f * t);

% Hacemos las divisiones
subplot(1, 3, 1)                    % Una fila, tres columnas, cuadrante uno
plot(t, X)
title('Seno')
grid on

subplot(1, 3, 2)                    % Una fila, tres columnas, cuadrante dos
plot(t, X)
title('Coseno')
grid on

subplot(1, 3, 3)                    % Una fila, tres columnas, cuadrante tres
plot(t, X + Y)
title('Suma')
grid on

% NOTA: Por cada division que deseamos es necesario utilizar "subplot(fila, columna, cuadrante)"