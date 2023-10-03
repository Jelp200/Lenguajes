/* INCLUDES */
#include <stm32f10x.h>
#include <stm32f10x_gpio.h>
#include <stm32f10x_rcc.h>

/* PROTOTIPO(S) DE FUNCION(ES) */
void SystemClock_Config(void);																	/* Funcion de configuracion del reloj */
static void MX_GPIO_Init(void);																	/* Funcion de inicializacion de los GPIO */
void Delay_ms(int nCount);																			/* Funcion para el delay */

/* FUNCION PRINCIPAL */
int main(void){
	SystemClock_Config();
	MX_GPIO_Init();
	
	while(1){
		if((GPIOB -> IDR & 0x100) == 0x100){
			Delay_ms(5000);
			GPIOC -> ODR =~ GPIOC -> ODR;
		}
	}
}

static void MX_GPIO_Init(void){
	GPIO_InitTypeDef GPIO_StructInit = {0};												/* Estructura para llevar un control de registro */
	
	/* Configuramos GPIO pin: PC13 */
	GPIO_StructInit.GPIO_Pin = GPIO_Pin_13;
	GPIO_StructInit.GPIO_Speed = GPIO_Speed_2MHz;
	GPIO_StructInit.GPIO_Mode = GPIO_Mode_Out_PP;
	
	/* Direccionamos los datos a la estructura donde se encuentra todo el registro */
	GPIO_Init(GPIOC, &GPIO_StructInit);
	
	/* Configuramos GPIO pin: PB8 */
	GPIO_StructInit.GPIO_Pin = GPIO_Pin_8;
	GPIO_StructInit.GPIO_Speed = GPIO_Speed_2MHz;
	
	/* Direccionamos los datos a la estructura donde se encuentra todo el registro */
	GPIO_Init(GPIOB, &GPIO_StructInit);
	
}

void SystemClock_Config(void){
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);					/* Activamos el reloj en el puerto C */
}

void Delay_ms(int nCount){
	int i, j;
	for(i = 0; i < nCount; i++){
		for(j = 0; j < 0x251C; j++);																/* 0x251C es el valor en mSeg el cual nos permitira hacer el retardo */
	}
}
