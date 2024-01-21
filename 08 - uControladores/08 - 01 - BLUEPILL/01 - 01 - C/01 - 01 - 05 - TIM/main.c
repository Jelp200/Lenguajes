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
void delay_ms(uint32_t ms);
void configurePA8(void);

/* |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||||||||||| F U N C I O N   P R I N C I P A L ||||||||||||||||||||||||||||
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| */
int main(void) {
    configurePA8();

    while (1) {
        // Enciende PA8 (nivel alto)
        GPIOA->BSRR = GPIO_BSRR_BS8;

        // Espera el periodo deseado
        delay_ms(695);

        // Apaga PA8 (nivel bajo)
        GPIOA->BSRR = GPIO_BSRR_BR8;

        // Espera el periodo deseado
        delay_ms(695);
    }
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ F U N C I O N E S ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
	//* FUNCION PARA EL RETARDO EN uSeg
void delay_ms(uint32_t ms) {
    ms *= (SystemCoreClock / 1000) / 8;

    while (ms--) {
        __NOP();
    }
}

//* FUNCION PARA CONFIGURAR EL PIN
void configurePA8(void) {
    // Habilitar el reloj para el puerto A
    RCC->APB2ENR |= RCC_APB2ENR_IOPAEN;

    // Configurar el pin PA8 como salida push-pull de velocidad media
    GPIOA->CRH |= GPIO_CRH_MODE8_1;
    GPIOA->CRH &= ~(GPIO_CRH_CNF8_0 | GPIO_CRH_CNF8_1);
}
