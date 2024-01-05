/*
** #########################################################################################
**  Archivo         :   main.c
**  Proyecto        :   Lenguajes ~ uControladores
**  Herramienta(s)  :   Visual Studio Code
**											uVision
**  Autores         :
**                      Penha Paz Jorge Eduardo (Jelp200)
**  Descripcion     :
**                      Se encendera un led externo a la STM32F103C8T6
** #########################################################################################
*/

/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++ I N C L U D E S ++++++++++++++++++++++++++++++ 
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
#include <stm32f10x.h>

/* ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||| F U N C I O N   P R I N C I P A L |||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| */
int main(){
	// Inicializamos el puerto a utilizar (Puerto C)
	RCC -> APB2ENR |= (1 << 4);
	
	// Configuramos el pin 13 de nuestro puero
	GPIOC -> CRH |= ((0 << 24) | (1 << 25));																		// Salida a 10MHz
	GPIOC -> CRH &= ~ ((1 << 26) | (1 << 27));																	// Salida de proposito general
	
	/* B U C L E */
	while(1){
		GPIOC -> BSRR = (1 << 14);																								// Pin 14 en estado alto
		
		/* Con esta parte podemos hacer parpadear el led
		for(int i = 0; i <= 5000000; i++);																				// Delay
		GPIOC -> BSRR = (1 << (14 +  16));																				// Pin 14 en estado bajo
		for(int i = 0; i <= 5000000; i++);																				// Delay
		*/
	}
}

/*
*****************************************************************************
********************************* N O T A S *********************************
*****************************************************************************
*/
