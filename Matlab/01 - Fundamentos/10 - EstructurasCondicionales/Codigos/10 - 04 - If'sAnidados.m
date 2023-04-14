%{
** #################################################################################################################
**      Archivo: 10 - 04 - If'sAnidados.m
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          if condicion1
**              ...
**              Condición si se cumple la condición 1
**              ...
**              if condicion2
**                  ...
**                  Condición si se cumple la condición 2
**                  ...
**                  if condicion3
**                      ...
**                      Código si se cumple la condición 3
**                      ...
**                  end
**              end
**          else
**              ...
**              Código si no se cumple la condición
**              ...
**          end
** #################################################################################################################
%}

% Ejemplo 1

    A = 2;

    if mod(A, 2) == 0
        disp('El numero es par')
        if mod(A, 3) == 0
            disp('3 es divisor de A')
            if mod(A, 5) == 0
                disp('5 es divisor de A')
            end
        end
    else
        disp('El numero es impar')
    end

% Ejemplo 2

    for B = 5 : 10                              % El for ejecuta todo el código desde 5 a 10
        C = num2str(B);                         % "num2str (Number to string)" convierte un entero a caracter

        if mod(B, 2) == 0                       % Condicional que pregunta si B es par
            if mod(B, 3) == 0                   % Condicional que pregunta si 3 el divisor de B
                disp(['3 es divisor de: ' C])   % Imprime el numero por el cual se puede dividir entre 3
            elseif mod(B, 4) == 0               % Condicional que si B no es divisor de 3, entonces pregunta si es divisor de 4
                disp(['4 es divisor de: ' C])   % Imprime el numero por el cual se puede dividir entre 4
            else                                % Sino es par
                disp([C ' es par'])             % Imprime el numero que es par
            end % Fin del segundo if
        elseif mod(B, 3) == 0                   % Condicional que si B no es par, entonces pregunta si es divisor de 3
            disp(['3 es divisor de: ' C])       % Imprime el numero por el cual se puede dividir entre 3
        else                                    % Sino es par o divisor de 3 entoces es impar
            disp([C ' es impar'])                 % Imprime el numero que es impar
        end % Fin del primer if
    end % Fin del for