/*
** #########################################################################################
**  Archivo         :   main.c
**  Proyecto        :   Lenguajes ~ uControladores
**  Herramienta(s)  :   Visual Studio Code
**											uVision
**  Autores         :
**                      Penha Paz Jorge Eduardo (Jelp200)
**  Descripcion     :
**                      Encender un led con Systick en PA0 y visualizar la señal con un
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
void config_systick(void);
void config_pin(void);

void delay_us(uint32_t us);

/* |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||||||||||| F U N C I O N   P R I N C I P A L ||||||||||||||||||||||||||||
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| */
int main(void) {
    config_systick();                       // Configurar SysTick para una interrupción cada 1 segundo
    config_pin();                           // Configurar el pin GPIO para la onda cuadrada

    while (1) {
        //! No tendremos nada
    }
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ F U N C I O N E S ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
//* FUNCION PARA LA CONFIGURACION DEL RELOJ
void config_systick(void){
    SysTick->LOAD = 8000000 - 1;            // Configurar el valor de recarga
    SysTick->VAL = 0;                       // Reiniciar el contador
    SysTick->CTRL = SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_ENABLE_Msk | SysTick_CTRL_TICKINT_Msk;
    // Habilitar SysTick, configurar fuente de reloj y habilitar interrupciones de SysTick
}

//* FUNCION PARA CONFIGURAR EL PIN
void config_pin(void){
    RCC->APB2ENR |= RCC_APB2ENR_IOPAEN;     // Habilitar el reloj para el puerto A
    GPIOA->CRL |= GPIO_CRL_MODE0;           // Configurar el pin PA0 como salida de alta velocidad
    GPIOA->CRL &= ~GPIO_CRL_CNF0;           // Configurar el pin PA0 como salida de propósito general push-pull
}

//* DRIVER DE INTERRUPCIONES DEL SYSTICK
void SysTick_Handler(void) {
    GPIOA->ODR ^= GPIO_ODR_ODR0;            // Invertir el estado del pin PA0
}

//* FUNCION PARA EL RETARDO EN uSeg
void delay_us(uint32_t us) {
    us *= (SystemCoreClock / 1000000) / 8;  // Ajuste para la velocidad de reloj del sistema
    while (us--) {
        __NOP();  // No Operation (sin operación)
    }
}
