#include "stm32f10x.h"
#include "_HAL_GPIO.h"

int main(){
	GPIO_TIPO miGPIO;
	
	miGPIO.puerto = PUERTOC;
	miGPIO.pin = 13;
	miGPIO.modo = MODO_SALIDA;
	miGPIO.tipo_modo = SALIDA_PROPOSITO_GEN;
	miGPIO.velocidad = VELOCIDAD_2MHZ;
	
	inicia_puerto(miGPIO);
	
	while(1){
		toggle_pin(PUERTOC, 13);
		for(int i  = 0; i <= 5000000; i++);
	}
}
