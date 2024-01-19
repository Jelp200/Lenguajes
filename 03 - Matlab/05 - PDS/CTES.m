a=0.4973*exp(j*60);
b=0.4973*exp(j*-60);
e=0.2473*exp(j*119.64);
f=0.2473*exp(j*-119.64);
z=-1.11803;
w=-0.36803;

C1 = (z / a) - (b / a) * (((a * w) - (e * z)) / ((a * f) - (e * b)));

% Calculo constante C2
C2 = ((a * w) - (e * z)) / ((a * f) - (e * b));

disp(C1);
disp(C2);


