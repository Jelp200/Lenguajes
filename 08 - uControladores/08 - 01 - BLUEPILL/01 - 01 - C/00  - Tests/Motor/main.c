	#include<stdio.h>

	#include "GPIO_STM32F10x.h"

	void delay_ms(uint32_t ms);
	void lef(void);
	void rig(void);
	void sto(void);

	int a;

	static uint32_t left[4]={0x0E, 0x4F, 0x47, 0x0F};
	static uint32_t right[4]={0x46, 0x30, 0x5F, 0x37};
	static uint32_t stop[4]={0x5B, 0x0F, 0x7E, 0x67};

	static uint32_t dis[4]={0x1000, 0x2000, 0x4000, 0x8000}; /*Pines 12-15*/


	int main(void){

	RCC->APB2ENR=RCC_APB2ENR_IOPAEN|RCC_APB2ENR_IOPBEN;

	GPIOA->CRL=0x03333333;  /*Activamos pines A0-A7 como salidas para los segmentos del display*/
	GPIOA->CRH=0x00000088;	/*Pines A8-A9 como entradas PullUp*/
	GPIOB->CRH=0x33330000; /*Pines 15, 14, 13, 12 como salidas para cada pantalla del display*/

while(1){

/*Detectamos la entrada en el pin A8*/
	if((GPIOA->IDR&0x0100)==0){
				delay_ms(500);	
				while((GPIOA->IDR&0x0100)==0){
				delay_ms(500);	
						rig();
						delay_ms(30);
						/*Activamos unicamente el pin B9 y reseteamos el pin B8*/
						GPIOB->BSRR=GPIO_BSRR_BS9|GPIO_BSRR_BR8;
				}
	}
	
	/*Detectamos la entrada en el pin A9*/
	if((GPIOA->IDR&0x0200)==0){
				delay_ms(500);	
				while((GPIOA->IDR&0x0200)==0){
						delay_ms(500);	
						lef();
						delay_ms(30);
							/*Activamos unicamente el pin B8 y reseteamos el pin B9*/
							GPIOB->BSRR=GPIO_BSRR_BR9|GPIO_BSRR_BS8;
				}
	}
	
	/*Detectamos la entrada en el pin A10*/
	if((GPIOA->IDR&0x0400)==0){
				delay_ms(500);	
				while((GPIOA->IDR&0x0400)==0){
						delay_ms(500);	
						sto();
						delay_ms(30);
						GPIOB->BSRR=GPIO_BSRR_BR9|GPIO_BSRR_BR8;
				}
	}
	}
	
	
	}

	void lef(void){
	GPIOA->ODR=left[0];
	
	 /*Seleccionamos algun pin como salida para el display*/
	GPIOB->ODR=dis[0];
	delay_ms(30);	

	GPIOA->ODR=left[1];
	GPIOB->ODR=dis[1];
	delay_ms(30);	

	GPIOA->ODR=left[2];
	GPIOB->ODR=dis[2];
	delay_ms(30);	

	GPIOA->ODR=left[3];
	GPIOB->ODR=dis[3];	
	delay_ms(30);
	}

	void rig(void){
	GPIOA->ODR=right[0];
	GPIOB->ODR=dis[0];
	delay_ms(30);	

	GPIOA->ODR=right[1];
	GPIOB->ODR=dis[1];
	delay_ms(30);

	GPIOA->ODR=right[2];
	GPIOB->ODR=dis[2];
	delay_ms(30);	

	GPIOA->ODR=right[3];
	GPIOB->ODR=dis[3];	
	delay_ms(30);
	}

	void sto(void){
	GPIOA->ODR=stop[0];
	GPIOB->ODR=dis[0];
	delay_ms(30);	

	GPIOA->ODR=stop[1];
	GPIOB->ODR=dis[1];
	delay_ms(30);

	GPIOA->ODR=stop[2];
	GPIOB->ODR=dis[2];
	delay_ms(30);	

	GPIOA->ODR=stop[3];
	GPIOB->ODR=dis[3];	
	delay_ms(30);
	}





	void delay_ms(uint32_t ms) {
	// Configura el temporizador
	RCC->APB1ENR |= RCC_APB1ENR_TIM2EN; // Habilita el reloj para el temporizador 2
	TIM2->PSC = SystemCoreClock / 1000 - 1; // Configura el preescaler para que el temporizador cuente en microsegundos
	TIM2->ARR = ms; // Configura el valor de recarga para el temporizador

	// Habilita el temporizador
	TIM2->CR1 |= TIM_CR1_CEN;

	// Espera hasta que el temporizador alcance el valor deseado
	while (!(TIM2->SR & TIM_SR_UIF)) {
	// Espera hasta que se establezca el indicador de desbordamiento UIF
	}

	// Restablece el temporizador
	TIM2->SR &= ~TIM_SR_UIF;
	TIM2->CR1 &= ~TIM_CR1_CEN;

	// Deshabilita el reloj del temporizador
	RCC->APB1ENR &= ~RCC_APB1ENR_TIM2EN;
	}
