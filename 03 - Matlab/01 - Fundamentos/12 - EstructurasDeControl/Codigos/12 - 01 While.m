%{
** #################################################################################################################
**      Archivo: 12 - 01 - While.m
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          while condicion
**              ...
**              Código en m
**              ...
**          end
** #################################################################################################################
%}

S = 0;

while (S ~= 10)
    clc

    A = input('De un numero: ');
    B = input('De un numero: ');

    S = A + B;

    SS = num2str(S);

    if (S ~= 10)
        disp(['La suma es: ' SS])
        seguir = input('');
        waitfor(seguir)
    else
        disp(['La suma es: ' SS ', adios.'])
        seguir = input('');
        waitfor(seguir)
    end
end