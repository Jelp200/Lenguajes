%{
** #################################################################################################################
**      Archivo: 11 - 01 - Switch.m
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**                   MATLAB R2023a
**
**      Notas:
**          switch expresion
**              case expresionCase
**                  ...
**                  Código dentro de el case
**                  ...
**              case expresionCase
**                  ...
**                  Código dentro de el case
**                  ...
**              ...
**              otherwise
**                  ...
**                  Código dentro del otherwise
**                  ...
**          end
** #################################################################################################################
%}

n = input('De un numero del 1 al 3');

switch n
    case 1
        disp(['Eligio el numero' n])
    case 2
        disp(['Eligio el numero' n])
    case 3
        disp(['Eligio el numero' n])
end