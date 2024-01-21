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
#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x_exti.h"

/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++ P R O T O T I P O (S)   D E   F U N C I O N E S +++++++++++++++++++++
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
void configSistema(void);
static void configPuertos(void);

void configSystick(void);
void EXTI9_5_IRQHandler(void);
void EXTI15_10_IRQHandler(void);

void visualizarDisplay(void);

/* -----------------------------------------------------------------------------------------
---------------------------- V A R I A B L E S   G L O B A L E S ---------------------------
----------------------------------------------------------------------------------------- */
volatile int direccion;
volatile int mensaje1[4] = {0x37, 0x7E, 0x0E, 0x77};
volatile int mensaje2[4] = {0x71, 0x4E, 0x30, 0x6D};
volatile int n;
volatile int modoPalabra;
int i, j;


/* ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||| F U N C I O N   P R I N C I P A L |||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| */
int main(){
    configSistema();
    configSystick();
    configPuertos();
    
    while(1){
			visualizarDisplay();
    }
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ F U N C I O N E S ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
void configSistema(void){
    // Activamos el reloj de los puertos y la interrupcion externa
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA | RCC_APB2Periph_GPIOB | RCC_APB2ENR_AFIOEN, ENABLE);
}

void configSystick(void){
    // Configuración para PB9 (EXTI9)
    AFIO->EXTICR[2] |= AFIO_EXTICR3_EXTI9_PB; // EXTI9 está conectado al puerto GPIOB
    EXTI->IMR |= EXTI_IMR_MR9; // Habilita la interrupción EXTI9
    EXTI->FTSR |= EXTI_FTSR_TR9; // Configura la interrupción en flanco descendente para EXTI9
    NVIC_EnableIRQ(EXTI9_5_IRQn); // Habilita la NVIC para EXTI9

    // Configuración para PB10 (EXTI10)
    AFIO->EXTICR[2] |= AFIO_EXTICR3_EXTI10_PB; // EXTI10 está conectado al puerto GPIOB
    EXTI->IMR |= EXTI_IMR_MR10; // Habilita la interrupción EXTI10
    EXTI->FTSR |= EXTI_FTSR_TR10; // Configura la interrupción en flanco descendente para EXTI10
    NVIC_EnableIRQ(EXTI9_5_IRQn); // Habilita la NVIC para EXTI10

    // Configuración para PB11 (EXTI11)
    AFIO->EXTICR[2] |= AFIO_EXTICR3_EXTI11_PB; // EXTI11 está conectado al puerto GPIOB
    EXTI->IMR |= EXTI_IMR_MR11; // Habilita la interrupción EXTI11
    EXTI->FTSR |= EXTI_FTSR_TR11; // Configura la interrupción en flanco descendente para EXTI11
    NVIC_EnableIRQ(EXTI9_5_IRQn); // Habilita la NVIC para EXTI11
}

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

void EXTI9_5_IRQHandler(void) {
    if (EXTI -> PR & 9) {               // Verifica si la interrupción provino de EXTI9
        EXTI->PR |= EXTI_PR_PR9;        // Limpia la bandera de interrupción EXTI9
        modoPalabra = 1 - modoPalabra;
    }
}

void EXTI15_10_IRQHandler(void) {
    if (EXTI_GetITStatus(EXTI_Line10) != RESET) {
        EXTI -> PR |= EXTI_PR_PR10;       // Limpia la bandera de interrupción EXTI10
        j = 0;
        n = 0;
    } if (EXTI_GetITStatus(EXTI_Line11) != RESET) {
        EXTI -> PR |= EXTI_PR_PR11;       // Limpia la bandera de interrupción EXTI11
        j = 0;
        direccion = -1;
        n = 0;
    }
}

void visualizarDisplay(void){
    volatile int *palabraActual = (modoPalabra == 0) ? mensaje1 : mensaje2;
    for (int i = 0; i < 4; i++) {
			GPIO_Write(GPIOB, GPIO_Pin_12 + i);
      GPIO_Write(GPIOA, palabraActual[i]);
			for (int k = 0; k <= 8000; k++);
			GPIO_Write(GPIOA, 0);
			GPIO_Write(GPIOB, 0);
    }
    
    if(direccion != 0){
        while(n > 0){
            int puerto = 0x1000;
            
            for(i = 0; i < 4; i++){
                GPIOB -> ODR = puerto;
                GPIOA -> ODR = palabraActual[(i + j) % 4];
                for(int k = 0; k <= 8000; k++);
                puerto <<= 1;
            }
            for(int k = 0; k <= 8000000; k++);
            
            j += direccion;
            n--;
        }
        GPIO_Write(GPIOB, 0x000);
        direccion = 0;
    }
}
