#include <stm32f10x.h>

int main(){
	// Inicializamos el puerto a utilizar (Puerto C)
	RCC -> APB2ENR |= (1 << 4);
	
	// Configuramos Pin_13 del puerto (Puerto C)
	GPIOC -> CRH |= ((1 << 20) | (1 << 21));		// Salida a 50MHz
	GPIOC -> CRH &= ~((1 << 22) | (1 << 23));		// Salida de proposito general
	
	while(1){
		GPIOC -> BSRR  = (1 << 13);								// Pin 13 en alto
		for(int i = 0; i <= 5000000; i++);
		GPIOC -> BSRR = (1 << (13 +  16));				// Reseteamos el Pin 13
		for(int i = 0; i <= 5000000; i++);
	}
}
