/*
** #########################################################################################
**  Archivo         :   main.c
**  Proyecto        :   Lenguajes ~ uControladores
**  Herramienta(s)  :   Visual Studio Code
**											uVision
**  Autores         :
**                      Penha Paz Jorge Eduardo (Jelp200)
**  Descripcion     :
**                      Se realizara el parpadeo de un led a travez.
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
	GPIOC -> CRH |= ((1 << 20) | (1 << 21));																		// Salida a 50MHz
	GPIOC -> CRH &= ~ ((1 << 22) | (1 << 23));																	// Salida de proposito general
	
	/* B U C L E */
	while(1){
		GPIOC -> BSRR = (1 << 13);																								// Pin 13 en estado alto
		for(int i = 0; i <= 5000000; i++);																				// Delay
		GPIOC -> BSRR = (1 << (13 +  16));																				// Pin 13 en estado bajo
		for(int i = 0; i <= 5000000; i++);																				// Delay
	}
}

/*
*****************************************************************************
********************************* N O T A S *********************************
*****************************************************************************
En este codigo hacemos uso de los operadores de asignacion compuesta "|=" y
"&=" los cuales son equivalentes a:
		- "x |= y" es: "x = x | y"
		- "x &= y" es: "x = x & y"

Al igual que utilizamos el operador de inversion bit a bit "~", este operador
es utilizado para para invertir cada bit en una variable.
		- "x = ~y" quiere decir que se asigna a 'x' el valor obtenido de invertir
			cada bit de 'y'
*/