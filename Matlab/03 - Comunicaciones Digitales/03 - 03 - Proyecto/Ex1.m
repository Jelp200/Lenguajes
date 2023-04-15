n=0;

y=0;

Xp=0; Xr=0; yr=0;

ini=input('inicio=   ');

fin=input('fin=   ');

incre=input('incremento=   ');

t=ini:incre:fin;

S=input('#de frec. de muestreo=   ');

disp(' dame el numero de componentes en nuestro muestreo\n');

     num=input('#de componentes=   ');

     A1=1:num;

     fa1=1:num;

     yr1=1:num;

     for n=1:num

        A1(n)=input('amplitud (A) para componente=   ');

        f1(n)=input(' frecuencia(f) para componente=   '); %guardar todas las frecuencias

      A=f1(n);

        if f1(n)<-0.5*S || f1(n)>0.5*S

           Num=1;

           fa1(n)=f1(n)-Num*S;

           while fa1(n)<-0.5*S || fa1(n)>0.5*S

           Num=Num+1;

           fa1(n)=f1(n)- Num*S;   %guardar todas la fa

           disp('1-fenomeno alias\n')  % tambien decir hay fenomeno alias

      B= genvarname({'SI'});

       C=fa1(n);

           end

       else

           fa1(n)= f1(n);

           disp('0-sin fenomeno alias\n') %o no hay fenomeno alias

        B= genvarname({'NO'});

        C=fa1(n);

       end

         disp('determina si es una funcion seno (0) o coseno(1)\n');

        op = input ('cual es tu opcion: ');

            switch op

                case 0

                    y= sin((2*pi*f1(n))*t);

            D=sprintf('%dSen(%d*pi*t)',A1(n),2*fa1(n));

                    yr= sin(2*pi*fa1(n)*t);

                case 1

                    y= cos((2*pi*f1(n))*t);

                    yr= cos((2*pi*fa1(n))*t);

                    D=sprintf('%dCos(%d*pi*t)',A1(n),2*fa1(n));

            end

       Xp=Xp+ A1(n)*y;

       Xr=Xr+ A1(n)*yr;

       Tabla = genvarname({'fo', 'Fenomeno del Alias', 'fa', 'Equiv Analogico'})

       disp([A,'  ', B, ' ', C, D]);

     end

  subplot(2,1,1)

    plot( t,Xp)

    title('señal original' );

xlabel('t');

ylabel('f(x)');

grid on;

subplot(2,1,2)

  plot( t,Xr)

  title('señal recuperada' );

xlabel('t');

ylabel('f(x)');

grid on;

k=1;

tip=0;

disp('determina si que grafica deseas ilustar\n');

disp('1-ideal\n');

disp('2-natural\n');

disp('3-techo plano\n');

ts=1/S;       grafica = input ('cual es tu opcion: ');

switch grafica

    case 1

 

        for t=0:0.1*ts:S;

    if mod(t,ts)==0

        tren(k)=1;

    else

        tren(k)=0;

    end

       k=k+1

        end

    t=0:0.1*ts:S;

    j=0;

   for n=1:1:n;

    if tip(n)==1

        j=j+A1(n)*sin(2*pi*t*f1(n));

    else

        j=j+A1(n)*cos(2*pi*t*f1(n));

    end

   end

   z=tren.*j;

   t=0:0.1*ts:S;

    figure(3)

    plot (t,z)

  hold on

    grid on

 

    case 2

        t=-1:1/500:1;

u1=[zeros(1,250),ones(1,751)];

u2=[zeros(1,751),ones(1,250)];

un=u1-u2;

title('Función cuadrada')

figure(3)

subplot(2,1,1)

plot(t,un)

 

r=un.*D;

subplot(2,1,2)

plot(t,Xr)

    case 3

       u=0;

u2=0;

     for t=0:0.1*ts:S;

for n=1:1:n;

    if tip(n)==0

        u=u+A1(n)*sin(2*pi*t*f1(n));

    else

        u=u+A1(n)*cos(2*pi*t*f1(n));

    end

end

for n=1:1:n;

     if tip(n)==1

          u2=u2+A1(n)*sin(2*pi*(t+0.1*ts)*f1(n));

    else

        u2=u2+A1(n)*cos(2*pi*(t+0.1*ts)*f1(n));

     end

end

x=[t (t+0.1*ts)];

y=[u  u ];

plot(x,y)

hold on

grid on

x1=[(t+0.1*ts) (t+0.1*ts)];

y1=[u u2];

plot(x1,y1)

     end

end