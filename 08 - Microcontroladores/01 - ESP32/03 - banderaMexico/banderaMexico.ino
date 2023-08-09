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

// Defines
/* L E D S */
#define verde   15
#define blanco  2
#define rojo    0

void setup() {
  // Inicializamos los pines digitales como salida
  // pinMode(nombreVar, modo -> "INPUT/OUTPUT"")
  pinMode(verde, OUTPUT);
  pinMode(blanco, OUTPUT);
  pinMode(rojo, OUTPUT);     
}
void loop() {
  // Enciende el LED verde - digitalWrite(nombreVar, valor -> "HIGH, LOW");
  digitalWrite(verde, HIGH);  
  // Pausamos la ejecución por un determinado tiempo - delay(mSeg)
  delay(1000);
  // Enciende el LED blanco
  digitalWrite(blanco, HIGH);  
  delay(1000);
  // Enciende el LED rojo
  digitalWrite(rojo, HIGH);  
  delay(1000);

  // Apaga el LED verde 
  digitalWrite(verde, LOW);
  delay(1000);
  // Apaga el LED blanco 
  digitalWrite(blanco, LOW);
  delay(1000);
  // Apaga el LED rojo 
  digitalWrite(rojo, LOW);
  delay(1000);
}

/*
°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° N O T A S °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
Al igual que en el lenguaje C/C++ podemos utilizar defines para definir variables con valores
estaticos y así dentro del programa solo utilizar el nombre definido en vez de la directiva en
especifico.
°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
*/