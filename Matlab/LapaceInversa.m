% Transformada inversa de Laplace para resolver problemas de
% señales y sistemas de control clasico.

num = [1];
den = [1 5 1 0];
[r, p, k] = residue(num, den)

%{
    Y los resultados serían:
    
    r =

    0.0455
   -1.0455
    1.0000


p =

   -4.7913
   -0.2087
         0


k =

     []

syms s
partfrac(32/(s^3+5*s^2+s))
pretty(ans)
ilaplace(ans)
}%