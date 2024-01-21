/*
** #########################################################################################
**  Archivo         :   main.c
**  Proyecto        :   Lenguajes ~ uControladores
**  Herramienta(s)  :   Visual Studio Code
**											uVision
**  Autores         :
**                      Penha Paz Jorge Eduardo (Jelp200)
**  Descripcion     :
**                      Visualizar e interactuar con un mensaje a travez de tres botones
**											utilizando Systick.
** #########################################################################################
*/

/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++ I N C L U D E S +++++++++++++++++++++++++++++++++++++ 
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
//* SISTEMA
#include <string.h>

//* USUARIO/PLACA
#include "stm32f10x.h"
#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x_tim.h"

/* .........................................................................................
...................................... D E F I N E (S) .....................................
......................................................................................... */


/* -----------------------------------------------------------------------------------------
----------------------------- V A R I A B L E S   G L O B A L E S --------------------------
----------------------------------------------------------------------------------------- */
//* VARIABLES QUE CONTIENEN LOS MENSAJES A VISUALIZAR
volatile int mensaje1[6] = {0x37, 0x7E, 0x0E, 0x77};
volatile int mensaje2[6] = {0x71, 0x4E, 0x30, 0x6D};

volatile uint32_t mensajeIndex = 0;

/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++ P R O T O T I P O (S)   D E   F U N C I O N E S +++++++++++++++++++++
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
void configSistema(void);
static void configPuertos(void);

void configSystick(void);
void EXTI9_5_IRQHandler(void);
void EXTI15_10_IRQHandler(void);

void displayMessage(uint32_t* message);

/* |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||||||||||| F U N C I O N   P R I N C I P A L ||||||||||||||||||||||||||||
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| */
int main(){
	configSistema();
	configSystick();
	configPuertos();
	while(1){
		if(GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_9) == 0)   EXTI9_5_IRQHandler();
		if(GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_10) == 0)  EXTI15_10_IRQHandler();
		displayMessage(mensaje1+3);						// Es necesario un apuntador para poder recorrer el arreglo
	}
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ F U N C I O N E S ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

//* FUNCION PARA ACTIVAR EL RELOJ EN LOS PUERTOS
void configSistema(void){
    // Activamos el reloj de los puertos
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA | RCC_APB2Periph_GPIOB, ENABLE);
}

//* FUNCION PARA CONFIGURAR LOS PUERTOS
static  void configPuertos(void){
    // Estructura de control
    GPIO_InitTypeDef GPIO_StructInit = {0};	
    
    // Configuramos los puertos para el display
    GPIO_StructInit.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_1 | GPIO_Pin_2 | GPIO_Pin_3 |
                                                            GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7;
    GPIO_StructInit.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_StructInit.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_Init(GPIOA, &GPIO_StructInit);
    
    // Configuramos los transistores
    GPIO_StructInit.GPIO_Pin = GPIO_Pin_12 | GPIO_Pin_13 | GPIO_Pin_14 | GPIO_Pin_15;
    GPIO_StructInit.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_StructInit.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_Init(GPIOB, &GPIO_StructInit);
    
    // Configuramos los botones
    GPIO_StructInit.GPIO_Pin = GPIO_Pin_9 | GPIO_Pin_10 | GPIO_Pin_11;
    GPIO_StructInit.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_StructInit.GPIO_Mode = GPIO_Mode_IPU;
    GPIO_Init(GPIOB, &GPIO_StructInit);
}

//* FUNCION PARA CONFIGURAR EL SYSTICK
void configSystick(void){
    // Habilitar SysTick, configurar fuente de reloj y habilitar interrupciones de SysTick
    SysTick -> LOAD = 8000 - 1;				// Configurar el valor de recarga
    SysTick -> VAL = 0;								// Reiniciar el contador
    SysTick -> CTRL = SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_ENABLE_Msk | SysTick_CTRL_TICKINT_Msk;
    
    // Habilitar la interrupción del Systick
    NVIC_EnableIRQ(SysTick_IRQn);
}

//* FUNCIONES HANDLER
void EXTI9_5_IRQHandler(void) {
    if (EXTI_GetITStatus(EXTI_Line9) != RESET) {
        // Boton PB9 presionado
        mensajeIndex++;
        if (mensajeIndex >= sizeof(mensaje1) / sizeof(mensaje1[0])) {
            mensajeIndex = 0;
        }
        EXTI_ClearITPendingBit(EXTI_Line9);
    }
}

void EXTI15_10_IRQHandler(void) {
    if (EXTI_GetITStatus(EXTI_Line10) != RESET) {
        // Boton PB10 presionado
        mensajeIndex--;
        if (mensajeIndex < 0) {
            mensajeIndex = sizeof(mensaje1) / sizeof(mensaje1[0]) - 1;
        }
        EXTI_ClearITPendingBit(EXTI_Line10);
    }

    if (EXTI_GetITStatus(EXTI_Line11) != RESET) {
        // Boton PB11 presionado
        mensajeIndex = 0;
        EXTI_ClearITPendingBit(EXTI_Line11);
    }
}

//* FUNCION PARA DESPLEGAR EL MENSAJE
void displayMessage(uint32_t* message) {
    GPIOB->ODR = GPIOB->ODR & 0x0FFF;  // Clear the segment display

    for (int i = 0; i < sizeof(message) / sizeof(message[0]); i++) {
        GPIOA->ODR = (GPIOA->ODR & 0xFF00) | message[i];
        GPIOB->ODR = (GPIOB->ODR & 0x0FFF) | (1 << (12 + i));
        for (int j = 0; j <= 8000000; j++);
    }
}
