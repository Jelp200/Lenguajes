/*
** #########################################################################################
**  Archivo         :   main.c
**  Proyecto        :   uControladores - BluePill
**  Herramienta(s)  :   Visual Studio Code | Keil uVision 5
**  Autores         :
**                      Pena Paz Jorge Eduardo (Jelp200)
**  Descripcion     :
**                      Evitar osilaciones en nuestros botones y asi tener un mejor funcio_
**											namiento.
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
static uint16_t i, j;

/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++ P R O T O T I P O (S)   D E   F U N C I O N E S ++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
void SystemClock_Config(void);																								// Funcion para la configuracion del reloj
static void MX_GPIO_Init(void);																								// Funcion para la inicializacion de los GPIO
static void delay_ms(unsigned int n);																					// Funcion para el delay en mSegundos

/* ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||| F U N C I O N   P R I N C I P A L |||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| */
int main(void){
	SystemClock_Config();
	MX_GPIO_Init();
	
	while(1){
		GPIO_ResetBits(GPIOC, GPIO_Pin_13);
		delay_ms(1000);
		GPIO_SetBits(GPIOC, GPIO_Pin_13);
		delay_ms(1000);
	}
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ F U N C I O N E S ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
void SystemClock_Config(void){
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);												// Habilitamos el reloj en el puerto C
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);												// Habilitamos el reloj en el puerto A
}

static void MX_GPIO_Init(void){
	GPIO_InitTypeDef GPIO_StructInit = {0};																			// Estructura para llevar un control de registro
	
	// Creamos los datos para la estructura 1 (LED)
	GPIO_StructInit.GPIO_Pin = GPIO_Pin_13;
	GPIO_StructInit.GPIO_Speed = GPIO_Speed_2MHz;
	GPIO_StructInit.GPIO_Mode = GPIO_Mode_Out_PP;
	
	// Direccionamos los datos a la estructura 1 donde se encuentra todo el registro
	GPIO_Init(GPIOC, &GPIO_StructInit);
	
	// Creamos los datos para la estructura 2 (Boton)
	GPIO_StructInit.GPIO_Pin = GPIO_Pin_0;
	GPIO_StructInit.GPIO_Speed = GPIO_Speed_2MHz;
	GPIO_StructInit.GPIO_Mode = GPIO_Mode_IPU;
	
	// Direccionamos los datos a la estructura 2 donde se encuentra todo el registro
	GPIO_Init(GPIOA, &GPIO_StructInit);
	
}

static void delay_ms(unsigned int n){
	for(i = 0; i < n; i++){
		for(j = 0; j < 0x251C; j++);																								//0x251C es el valor en mSeg el cual nos permitira hacer el retardo */
	}
}

/*
*****************************************************************************
********************************* N O T A S *********************************
*****************************************************************************
*/
