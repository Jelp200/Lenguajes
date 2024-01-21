/*
** #########################################################################################
**  Archivo         :   main.c
**  Proyecto        :   Lenguajes ~ uControladores
**  Herramienta(s)  :   Visual Studio Code
**											uVision
**  Autores         :
**                      Penha Paz Jorge Eduardo (Jelp200)
** #########################################################################################
*/

/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++ I N C L U D E S +++++++++++++++++++++++++++++++++++++ 
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
#include "stm32f10x.h"

/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++ P R O T O T I P O (S)   D E   F U N C I O N E S +++++++++++++++++++++
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
void SystemInit(void);
void TIM2_Config(void);

/* |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||||||||||| F U N C I O N   P R I N C I P A L ||||||||||||||||||||||||||||
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| */
int main(void)
{
    SystemInit();
    TIM2_Config();

    while (1)
    {
        GPIOA->BSRR = GPIO_BSRR_BS8; // Establecer PA8 en alto
        // Realizar alguna operaci�n o espera aqu�
        GPIOA->BSRR = GPIO_BSRR_BR8; // Establecer PA8 en bajo
        // Otra operaci�n o espera si es necesario
    }
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ F U N C I O N E S ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
void SystemInit(void)
{
    // Configuraci�n del sistema con HSI a 8 MHz
    RCC->CR |= RCC_CR_HSION;
    while (!(RCC->CR & RCC_CR_HSIRDY));

    RCC->CFGR &= ~RCC_CFGR_SW;
    RCC->CFGR |= RCC_CFGR_SW_HSI;
    while ((RCC->CFGR & RCC_CFGR_SWS) != RCC_CFGR_SWS_HSI);

    FLASH->ACR |= FLASH_ACR_LATENCY_0;

    RCC->CFGR &= ~RCC_CFGR_PPRE1;
    RCC->CFGR &= ~RCC_CFGR_PPRE2;
    RCC->CFGR |= RCC_CFGR_PPRE1_DIV1;
    RCC->CFGR |= RCC_CFGR_PPRE2_DIV1;
}

void TIM2_Config(void)
{
    RCC->APB1ENR |= RCC_APB1ENR_TIM2EN;
    while (!(RCC->APB1ENR & RCC_APB1ENR_TIM2EN));

    RCC->APB2ENR |= RCC_APB2ENR_IOPAEN;

    // Configurar PA8 en modo de salida de 2 MHz
    GPIOA->CRH |= GPIO_CRH_MODE8_1 | GPIO_CRH_MODE8_0;
    // Configurar PA8 en modo de salida de prop�sito general push-pull
    GPIOA->CRH |= GPIO_CRH_CNF8_1;

    // Asegurarse de que el pin est� inicialmente bajo
    GPIOA->BSRR = GPIO_BSRR_BR8;

    TIM2->PSC = 0;    // Prescaler
    TIM2->ARR = 799;  // Valor de recarga (Para una frecuencia de 10 kHz con un prescaler de 0)

    // Configurar el modo de PWM si es necesario
    // TIM2->CCMR1 |= TIM_CCMR1_OC1M_1 | TIM_CCMR1_OC1M_2;
    // TIM2->CCMR1 |= TIM_CCMR1_OC1PE;
    // TIM2->CCER |= TIM_CCER_CC1E;
    // TIM2->CCER |= TIM_CCER_CC1P;

    // Habilitar el contador del temporizador
    TIM2->CR1 |= TIM_CR1_CEN;
}
