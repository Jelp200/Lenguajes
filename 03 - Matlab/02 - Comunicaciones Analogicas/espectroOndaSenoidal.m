% Espectro de una onda senoidal.

Fs = 150;
t = 0: 1 / Fs: 1;
f = 5;
x = sin(2*pi*t*f);
nfft = 1024;
X = fft(x, nfft);
X = X(1:nfft / 2);
mx = abs(X);
f = (0: nfft / 2-1) * Fs / nfft;
figure(1);
plot(t, x);
title('Señal senoidal.');
xlabel('Tiempo(s)');
ylabel('Amplitud');
figure(2);
plot(f, mx);
title('Espectro de potencia de la Onda Senoidal.');
xlabel('Frecuencia(Hz)');
ylabel('Potencia');