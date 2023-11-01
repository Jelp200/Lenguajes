/*
** #########################################################################################
**  Archivo         :   main.c
**  Proyecto        :   uControladores - BluePill
**  Herramienta(s)  :   Visual Studio Code | Keil uVision 5
**  Autores         :
**                      Peña Paz Jorge Eduardo (Jelp200)
**  Descripcion     :
**                      Encender un LED a traves de programación en C.
** #########################################################################################
*/

/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++ I N C L U D E S ++++++++++++++++++++++++++++++ 
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
#include <stm32f10x.h>
#include <stm32f10x_gpio.h>
#include <stm32f10x_rcc.h>

/* ..........................................................................
.............................. D E F I N E (S) ..............................
.......................................................................... */

/* --------------------------------------------------------------------------
-------------------- V A R I A B L E S   G L O B A L E S --------------------
-------------------------------------------------------------------------- */

/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++ P R O T O T I P O (S)   D E   F U N C I O N E S ++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
void SystemClock_Config(void);																								// Funcion para la configuracion del reloj
static void MX_GPIO_Init(void);																								// Funcion para la inicializacion de los GPIO

/* ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||| F U N C I O N   P R I N C I P A L |||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| */
int main(void){
	SystemClock_Config();
	MX_GPIO_Init();
	
	while(1){
		GPIO_Write(GPIOA, 1);
	}
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ F U N C I O N E S ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
void SystemClock_Config(void){
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);												// Habilitamos el reloj en el puerto A
}

static void MX_GPIO_Init(void){
	GPIO_InitTypeDef GPIO_StructInit;																						// Estructura para llevar un control de registro
	
	// Creamos los datos para la estructura
	GPIO_StructInit.GPIO_Pin = GPIO_Pin_All;
	GPIO_StructInit.GPIO_Speed = GPIO_Speed_2MHz;
	GPIO_StructInit.GPIO_Mode = GPIO_Mode_Out_PP;
	
	// Direccionamos los datos a la estructura donde se encuentra todo el registro
	GPIO_Init(GPIOA, &GPIO_StructInit);
	
}

/*
*****************************************************************************
********************************* N O T A S *********************************
*****************************************************************************

GPIO_Wite	->	Es una funcion (no estandar) la cual nos permite escribir en
				nuestros puertos el valor que deseamos mostrar, dado que los
                puertos son de 8b tenemos que podemos mostrar 2^8 - 1 valores
                en los puertos.
*/
