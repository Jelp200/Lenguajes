% GRAFICAR FUNCIONES

% Definimos una variable en tiempo que inicia en cero con incrementos de .01 y termina en 2 * pi

t = 0 : 0.01 : 2 * pi;
f = 1;
A = 3;

% GRAFICA 1
X = A * sin(2 * pi * f * t);
plot(t, X, 'g')                             % -> Comando el cual nos deja gráficar los datos ingresados
grid on                                     % -> Vista de osciloscopio
xlabel('Tiempo')                            % -> Leyenda para el eje X
ylabel('Amplitud')                          % -> Leyenda para el eje Y
title('Seno')                               % -> Titulo de la gráfica

% GRAFICA 2
Y = A * cos(2 * pi * f * t);
hold on                                     % -> Comando retenedor, mantiene las graficas en una sola ventana
% figure(2)                                   -> Abre otra ventana
plot(t, Y, 'k')
grid on
xlabel('Tiempo')
ylabel('Amplitud')
title('Coseno')

legend('Sen', 'Cos')                        % -> Legenda que nos ayuda a diferenciar/ubicar cada dato de la gráfica

% Una vez que se ha códificado lo necesario guardamos el archivo y lo corremos.