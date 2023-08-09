/*
** #########################################################################################
**  Archivo         :   ledBlink.ino
**  Proyecto        :   ESP32
**  Herramienta(s)  :   Arduino IDE 2.1.1
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                    El programa controlara el parpadeo del link a travez de la ESP32, se
**                    configuraran los pins con los cuales trabajara la ESP32.
** #########################################################################################
*/

void setup() {
  // Inicializa el pin digital 2 como salida
  pinMode(2, OUTPUT);     // pinMode(#pin, modo -> "INPUT/OUTPUT"")
}
void loop() {
  // Enciende el LED
  digitalWrite(2, HIGH);  // digitalWrite(#pin, valor -> "HIGH, LOW");

  // Pausamos la ejecución por un determinado tiempo
  delay(1000);            // delay(mSeg)

  // Apaga el LED
  digitalWrite(2, LOW);   // digitalWrite(#pin, valor -> "HIGH, LOW");
  
  // Pausamos la ejecución por un determinado tiempo
  delay(1000);            // delay(mSeg)
}
