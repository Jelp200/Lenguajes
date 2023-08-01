%{
** #################################################################################################################
**      Archivo: 12 - 02 - 03 - ForsAnidados.m
**      SO: Windows 10
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          for variable1 = limiteInferior1 : incremento : limiteSuperior1
**              for variable2 = limiteInferior2 : incremento : limiteSuperior2
**                  ...
**                  Código en m
**                  ...
**              end
**          end
** #################################################################################################################
%}

% EJEMPLO 1

ch = 'IPN';
m = 3;

for c = ch                  % Para "c" igual con "ch"
    for k = 1 : m           % Para "k" igual con uno hasta "m", incrementando de uno en uno
        disp([c num2str(k)])
    end
end

% EJEMPLO 2

N = 10;
n = 3;
a1 = 0;                     % Primer elemento de la serie de Fibonacci
a2 = 2;                     % Segundo elemento de la serie de Fibonacci

for j = 1 : N
    for k = 1 : n
        an = a1 + a2;
        a1 = a2;
        a2 = an;
    end
    disp(an)
end
