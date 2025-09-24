%{
** #################################################################################################################
**      Archivo: 10 - 03 - If-ElseIf.m
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          Podemos ver un If-Else-If de la siguiente manera:
**              if condicion1
**                  ...
**                  Código si se cumple la condición 1.
**                  ...
**              else
**                  if condicion2
**                      ...
**                      Código se cumple la condición 2.
**                      ...
**                  end
**              end
**
**          Pero tambien podemos verlo de la siguiente manera:
**              if condicion1
**                  ...
**                  Código si se cumple la condición 1.
**                  ...
**              elseif condicion2
**                  ...
**                  Código si se cumple la condición 2.
**                  ...
**              end
**
**          Como podemos observar en el segundo bloque de código ahorramos más líneas de código y tambien tenemos una
**          sintaxis más agradable para el programador, a lo anterior podemos llamarla como "nested condition".
** #################################################################################################################
%}

% Forma 1.

    A = 9;

    if mod(A, 2) == 0
        disp('El numero es par')
    else
        if mod(A, 3) == 0
            disp('3 es divisior de A')
        end
    end

% Forma 2.

    B = 21;

    if mod(B, 2) == 0
        disp('El numero es par')
    elseif mod(B, 3) == 0
        disp('3 es divisor de B')
    end

%{
    Una ventaja importante que tiene esta condicion anidada es que podemos agragar los "elseif" que deseemos, con el 
    unico detalle que si la condicion anterior a una condición siguiente que cumple las caracteristicas es verdadera,
    esta primer condcion cerrara el bloque de condicionales y tomara el valor de dicho bloque condicional, veamos:
%}

    C = 15;

    if mod(C, 2) == 0
        disp('El numero es par')
    elseif mod(C, 3) == 0                       % Cumple la condición, entra al bloque de código y toma ere valor para
        disp('3 es divisor de C')               % para todo el código restante.
    elseif mod(C, 5) == 0                       % Cumple la condicón pero ya no entra al bloque de código
        disp('5 es divisor de C')
    end

%{
    Por ultimo, podemos incorporar a nuestro If-ElseIf un "else" al final por si cualquiera de nuestras condiciones
    anteriores no se cumple, veamos:
%}

    D = 11;

    if mod(D, 2) == 0
        disp('El numero es par')
    elseif mod(D, 3) == 0
        disp('3 es divisor de D')
    elseif mod(D, 5) == 0
        disp('5 es divisor de D')
    else
        disp('2, 3 y 5 no son divisores de D')
    end