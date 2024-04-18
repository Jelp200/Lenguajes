/*
** ##########################################################################################
**  Archivo         :   01_Portadora
**  Proyecto        :   Transmisores
**  Herramienta(s)  :   VSCode
**                      Arduino IDE
**  Autores         :
**                      Jelp200
**  Descripcion     :
**                      El siguiente programa nos permite generar una onda cuadrada la cual
**                      nos va a servir como portadora para una modulación en AM.
** ##########################################################################################
*/

/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++ I N C L U D E S ++++++++++++++++++++++++++++++++++++++ 
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
#include <Arduino.h>

/* ..........................................................................................
...................................... D E F I N E (S) ......................................
.......................................................................................... */
//! Define el pin de salida para la señal de onda cuadrada
const int pinOndaCuadrada = 2;

/* ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||||||||||| F U N C I O N   P R I N C I P A L |||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| */
void setup() {
  //* INICIALIZAMOS EL PIN DE SALIDA
  pinMode(pinOndaCuadrada, OUTPUT);
}

void loop() {
  //* GENERAMOS LA ONDA CUADRADA
  digitalWrite(pinOndaCuadrada, HIGH); //! Establece el pin en alto
  delayMicroseconds(.3); // Espera la mitad del período (500 kHz = 2 microsegundo de período)

  digitalWrite(pinOndaCuadrada, LOW); //! Establece el pin en bajo
  delayMicroseconds(.3); // Espera la otra mitad del período
}