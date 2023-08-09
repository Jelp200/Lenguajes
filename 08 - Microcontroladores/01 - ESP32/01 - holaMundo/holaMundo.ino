/*
** #########################################################################################
**  Archivo         :   holaMundo.ino
**  Proyecto        :   ESP32
**  Herramienta(s)  :   aRDUINO ide 2.1.1
**  Autores         :
**                      Jelp 200
**  Descripcion     :
**                    El programa enviara mensajes desde el ESP32 hasta nuestra PC por el
**                    cable USB.
** #########################################################################################
*/

void setup() {
  // Inicializamos la conexión
  Serial.begin(115200);
  Serial.print("Esto es el setup\n");
  Serial.print("ESIME Z | ICE | IPN");
}

void loop() {
  Serial.print("Esto es el loop\n");
  delay(2000);
}

/*
°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° N O T A S °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
- Es importante resaltar que el mensaje de setup solo se mostrara una vez cada que inicie el
  programa, por lo tanto podemos decir que la función setup es para (como su nombre lo dice)
  configurar desde el principio varios valores.

- La función loop, nos permitira repetir el programa las veces que sea necesario, podemos ver
  al loop como la función main.
°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
*/