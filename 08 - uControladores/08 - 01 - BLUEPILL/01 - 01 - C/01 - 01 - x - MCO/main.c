/*
** #########################################################################################
**  Archivo         :   main.c
**  Proyecto        :   Lenguajes ~ uControladores
**  Herramienta(s)  :   Visual Studio Code
**											uVision
**  Autores         :
**                      Penha Paz Jorge Eduardo (Jelp200)
**  Descripcion     :
**                      Encender un led con MCO en PA8 y visualizar una senal de 8MHz en un
**                      osciloscopio.
** #########################################################################################
*/

/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++ I N C L U D E S +++++++++++++++++++++++++++++++++++++ 
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
#include "stm32f10x.h"

/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++ P R O T O T I P O (S)   D E   F U N C I O N E S +++++++++++++++++++++
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
void config_reloj(void);
void config_tim(void);
void config_pin(void);

void delay_us(uint32_t us);

/* |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||||||||||| F U N C I O N   P R I N C I P A L ||||||||||||||||||||||||||||
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| */
int main(void) {
    config_reloj();
    config_tim();
    config_pin();

    while (1) {
        // Esperar a que el temporizador alcance el valor de recarga
        while (!(TIM1->SR & TIM_SR_UIF));
        TIM1->SR &= ~TIM_SR_UIF;  // Limpiar la bandera de interrupcion del temporizador

        // Cambiar el estado de PA8 (parpadeo)
        GPIOA->BSRR = GPIO_BSRR_BS8;  // Establecer el pin PA8 (alto)

        // Retardo para ajustar la frecuencia (~= 8 MHz)
        delay_us(62);

        GPIOA->BSRR = GPIO_BSRR_BR8;  // Limpiar el pin PA8 (bajo)
    }
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ F U N C I O N E S ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
//* FUNCION PARA LA CONFIGURACION DEL RELOJ
void config_reloj(void){
    // Configuracion del reloj externo HSE
    RCC->CR |= RCC_CR_HSEON;                    // Habilitar el oscilador externo (HSE)
    while (!(RCC->CR & RCC_CR_HSERDY));         // Esperar hasta que el oscilador externo este listo

    RCC->CFGR |= RCC_CFGR_PLLSRC;               // Seleccionar HSE como fuente del PLL
    RCC->CFGR |= RCC_CFGR_PLLMULL9;             // Multiplicar por 9 (8 MHz * 9 = 72 MHz)
    RCC->CR |= RCC_CR_PLLON;                    // Habilitar el PLL
    while (!(RCC->CR & RCC_CR_PLLRDY));         // Esperar hasta que el PLL este listo

    RCC->CFGR |= RCC_CFGR_PPRE1_DIV2;           // Divisor del reloj del APB1 (Perifericos de baja velocidad)
    RCC->CFGR |= RCC_CFGR_PPRE2_DIV1;           // Divisor del reloj del APB2 (Perifericos de alta velocidad)

    RCC->CFGR |= RCC_CFGR_SW_PLL;               // Seleccionar PLL como fuente del reloj del sistema
    while (!(RCC->CFGR & RCC_CFGR_SWS_PLL));    // Esperar hasta que el PLL sea la fuente del sistema
}

//* FUNCION QUE CONFIGURA EL TIM
void config_tim(void){
    // Configuracion del temporizador TIM1
    RCC->APB2ENR |= RCC_APB2ENR_TIM1EN;        // Habilitar el reloj para el TIM1
    TIM1->PSC = 0;                             // Divisor del reloj: no division
    TIM1->ARR = 1;                             // Valor de recarga del contador
    TIM1->CR1 |= TIM_CR1_CEN;                  // Habilitar el temporizador
}

//* FUNCION PARA CONFIGURAR EL PIN
void config_pin(void){
    // Configuracion del puerto A y del pin PA8 como salida
    RCC->APB2ENR |= RCC_APB2ENR_IOPAEN;        // Habilitar el reloj para el puerto A
    GPIOA->CRH |= GPIO_CRH_MODE8;              // Salida de alta velocidad (50 MHz)
    GPIOA->CRH &= ~GPIO_CRH_CNF8;              // Salida de proposito general push-pull
}

//* FUNCION PARA EL RETARDO EN uSeg
void delay_us(uint32_t us) {
    us *= (SystemCoreClock / 1000000) / 8;  // Ajuste para la velocidad de reloj del sistema
    while (us--) {
        __NOP();  // No Operation (sin operacion)
    }
}
