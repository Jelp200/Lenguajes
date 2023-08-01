%{
** #################################################################################################################
**      Archivo: 07 - TiposDeDatos.m
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          En Matlab hay tres funciones funciones importantes para poder generar/crear matrices e iniciarlar ya sea
**          en ceros, unos, o su matriz de identidad.
** #################################################################################################################
%}

% --------------------------------------------- M A T R I Z   D E   0's --------------------------------------------
z1 = zeros(5);                  % Generamos una matriz de 0´s de tamaño 5 * 5
z1 = zeros(2, 3);               % Generamos una matriz de 0´s de tamaño 2 * 3

% --------------------------------------------- M A T R I Z   D E   1's --------------------------------------------
o1 = ones(5);                   % Generamos una matriz de 1´s de tamaño 5 * 5
o1 = ones(2, 3);                % Generamos una matriz de 1´s de tamaño 2 * 3

% -------------------------------------- M A T R I Z   D E   I D E N T I D A D --------------------------------------
i1 = eye(5);                    % Generamos una matriz de identidad de tamaño 5 * 5
i1 = eye(2, 3);                 % Generamos una matriz de identidad de tamaño 2 * 3