/* INCLUDES */
#include <stm32f10x.h>
#include <stm32f10x_gpio.h>
#include <stm32f10x_rcc.h>

/* PROTOTIPO(S) DE FUNCION(ES) */
void SystemClock_Config(void);																	/* Funcion de configuracion del reloj */
static void MX_GPIO_Init(void);																	/* Funcion de inicializacion de los GPIO */

/* FUNCION PRINCIPAL */
int main(void){
	SystemClock_Config();
	MX_GPIO_Init();
	
	while(1){
		GPIO_Write(GPIOA, 1);																				/* Indicamos que valor queremos que se visualice GPIO_Write(PUERTO, Valor); */
	}
}

static void MX_GPIO_Init(void){
	GPIO_InitTypeDef GPIO_StructInit;															/* Estructura para llevar un control de registro */
	
	/* Creamos los datos para la estructura */
	GPIO_StructInit.GPIO_Pin = GPIO_Pin_All;
	GPIO_StructInit.GPIO_Speed = GPIO_Speed_2MHz;
	GPIO_StructInit.GPIO_Mode = GPIO_Mode_Out_PP;
	
	/* Direccionamos los datos a la estructura donde se encuentra todo el registro */
	GPIO_Init(GPIOA, &GPIO_StructInit);
	
}

void SystemClock_Config(void){
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);					/* Activamos el reloj en el puerto C */
}
