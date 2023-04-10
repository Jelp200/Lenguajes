%{
** #################################################################################################################
**      Archivo: fncTrabajo.m
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          Código de apoyo para el código principal "04 - Funciones.m"
** #################################################################################################################
%}

    % Declaramos la función de trabajo de la siguiente manera:
    function Y = fncTrabajo(fnc, X)
    Y = fnc(3);                         % Se llama a la función de trabajo y "fun" tomara el valor de 3
    Y = Y + X;                          % Se agrega un número escalar a la función