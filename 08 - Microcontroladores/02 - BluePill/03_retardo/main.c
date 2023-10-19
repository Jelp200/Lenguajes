/* INCLUDES */
#include <stm32f10x.h>
#include <stm32f10x_gpio.h>
#include <stm32f10x_rcc.h>

/* PROTOTIPO(S) DE FUNCION(ES) */
void SystemClock_Config(void);																	/* Funcion de configuracion del reloj */
static void MX_GPIO_Init(void);																	/* Funcion de inicializacion de los GPIO */
void Delay_ms(unsigned int nCount);															/* Funcion para el delay */

/* FUNCION PRINCIPAL */
int main(void){
	SystemClock_Config();
	MX_GPIO_Init();
	
	while(1){
		GPIO_ResetBits(GPIOC, GPIO_Pin_13);
		Delay_ms(1000);
		GPIO_SetBits(GPIOC, GPIO_Pin_13);
		Delay_ms(1000);
	}
}

static void MX_GPIO_Init(void){
	GPIO_InitTypeDef GPIO_StructInit;															/* Estructura para llevar un control de registro */
	
	/* Creamos los datos para la estructura */
	GPIO_StructInit.GPIO_Pin = GPIO_Pin_13;
	GPIO_StructInit.GPIO_Speed = GPIO_Speed_2MHz;
	GPIO_StructInit.GPIO_Mode = GPIO_Mode_Out_PP;
	
	/* Direccionamos los datos a la estructura donde se encuentra todo el registro */
	GPIO_Init(GPIOC, &GPIO_StructInit);
	
}

void SystemClock_Config(void){
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);					/* Activamos el reloj en el puerto C */
}

void Delay_ms(unsigned int nCount){
	int i, j;
	for(i = 0; i < nCount; i++){
		for(j = 0; j < 0x251C; j++);																/* 0x251C es el valor en mSeg el cual nos permitira hacer el retardo */
	}
}