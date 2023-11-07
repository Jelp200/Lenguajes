/*
** #########################################################################################
**  Archivo         :   main.c
**  Proyecto        :   uControladores - BluePill
**  Herramienta(s)  :   Visual Studio Code | Keil uVision 5
**  Autores         :
**                      Peña Paz Jorge Eduardo (Jelp200)
**  Descripcion     :
**                      Visualizar en un D7S un numero que deseemos.
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
static uint16_t numero[10] = {0x3F, // 0
															0x06, // 1
															0x5B, // 2
															0x4F, // 3
															0x66, // 4
															0x6D, // 5
															0x7D, // 6
															0x07, // 7
															0x7F, // 8
															0x67	// 9
};

/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++ P R O T O T I P O (S)   D E   F U N C I O N E S ++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
void SystemClock_Config(void);																								// Funcion de configuracion del reloj
static void MX_GPIO_Init(void);

/* ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||| F U N C I O N   P R I N C I P A L |||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| */
int main(void){
	SystemClock_Config();
	MX_GPIO_Init();
	
	while(1){
		GPIOA -> ODR = numero[0];																									// Tambien puede ser GPIO_Write(GPIOA, numero[n]);
	}
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ F U N C I O N E S ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
static void MX_GPIO_Init(void){
	GPIO_InitTypeDef GPIO_StructInit;																						// Estructura para llevar un control de registro
	
	/* Creamos los datos para la estructura */
	GPIO_StructInit.GPIO_Pin = GPIO_Pin_All;
	GPIO_StructInit.GPIO_Speed = GPIO_Speed_2MHz;
	GPIO_StructInit.GPIO_Mode = GPIO_Mode_Out_PP;
	
	/* Direccionamos los datos a la estructura donde se encuentra todo el registro */
	GPIO_Init(GPIOA, &GPIO_StructInit);
	
}

void SystemClock_Config(void){
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);												// Habilitamos el reloj en el puerto A
}

/*
*****************************************************************************
********************************* N O T A S *********************************
*****************************************************************************

*/
