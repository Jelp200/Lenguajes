#include <stm32f10x.h>

static void ConfigurarPuertos(void);
static void Display(void);
static void delay_ms(uint32_t ms);

static int boton;

static uint32_t numeros[16]={0x7E, 0x30, 0x6D, 0x79, 0x33, 0x5B, 0x5F, 0X70, 0x7F, 0x73,0x77, 0x1F, 0x4E, 0x3D, 0x4F, 0x47}; //4F =E=15, 0x47=F=16;
static uint32_t letras[4]={0xBE, 0x1F, 0x4F, 0x3B};

static uint32_t a;
static int numero;

int main(void){
ConfigurarPuertos();
while(1){

					GPIOB->ODR=0xEF80; // Desactivamos pin 12
						if ((GPIOB->IDR&0x0100)==0) {
								numero=1;
						}else
					 if ((GPIOB->IDR&0x0200)==0) {
								numero=4;
						}else
						if ((GPIOB->IDR&0x0400)==0) {
								numero=7;
						}
						if ((GPIOB->IDR&0x0800)==0) {
								numero=14;
						}
						
					  GPIOB->ODR=0xDF80; // Desactivamos pin 13
					  if ((GPIOB->IDR&0x0100)==0) {
								numero=2;
						}else
					 if ((GPIOB->IDR&0x0200)==0) {
								numero=5;
						}else
						if ((GPIOB->IDR&0x0400)==0) {
								numero=8;
						}else
						if ((GPIOB->IDR&0x0800)==0) {
								numero=0;
						}

					  GPIOB->ODR=0xBF80;  // Desactivamos pin 14
						if ((GPIOB->IDR&0x0100)==0) {
								numero=3;
						}else
					 if ((GPIOB->IDR&0x0200)==0) {
								numero=6;
						}else
						if ((GPIOB->IDR&0x0400)==0) {
								numero=9;
						}
						if ((GPIOB->IDR&0x0800)==0) {
								numero=15;
						}
						
						GPIOB->ODR=0x7F80;  // Desactivamos pin 15
						if ((GPIOB->IDR&0x0100)==0) {
								numero=10;
						}else
					 if ((GPIOB->IDR&0x0200)==0) {
								numero=11;
						}else
						if ((GPIOB->IDR&0x0400)==0) {
								numero=12;
						}else
						if ((GPIOB->IDR&0x0800)==0) {
								numero=13;
							
						}

GPIOA->ODR=numeros[numero];
delay_ms(30);

	}

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

void ConfigurarPuertos(void){
	RCC->APB2ENR=RCC_APB2ENR_IOPAEN|RCC_APB2ENR_IOPBEN;
	
	GPIOA->CRL =0x33333333; //Pines A0-A7 como salidas/
	GPIOB->CRH=0x33338888; /*Pines B8-B11 como ENTRADAS, pin B12-B15 como SALIDAs */
	GPIOB->CRL=0x30000000;
  GPIOB->ODR=0x00000F80;       //Pines B8-B11 como ENTRADAS pull up/
}