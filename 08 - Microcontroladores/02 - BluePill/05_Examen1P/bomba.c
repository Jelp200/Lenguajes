/*
** #########################################################################################
**  Archivo         :   bomba.c
**  Proyecto        :   Lenaguajes
**  Herramienta(s)  :   Visual Studio Code | Keil uVision 5
**  Autores         :
**                      Peña Paz Jorge Eduardo (Jelp200)
**  Descripcion     :
**                      Código solución para la STM32f103c8t6 (bluepill) del examen parcial
**                      de microcontroladores.
** #########################################################################################
*/

/* I N C L U D E S */
#include <stdio.h>
#include "stm32f10x.h"
#include <stm32f10x_gpio.h>
#include <stm32f10x_rcc.h>

/* P R O T O T I P O (S)  D E  F U N C I O N (E S) */
void delay_ms(uint32_t ms);
void SystemClock_Config(void);
static void MX_GPIO_Init(void);	
void displayDigit(uint8_t digit);

/* F U N C I O N  P R I N C I P A L */
int main(void) {
    // Configura el sistema
    SystemInit();

    // Llamamos a la configuración del reloj y de los puertos
    SystemClock_Config();
    MX_GPIO_Init();

    uint32_t count = 99; // Inicio en 99
    uint8_t countEnabled = 1; // Habilita la cuenta regresiva
    uint8_t alarmActivated = 0; // Alarma desactivada

    /* B U C L E  I N F I N I T O */
    while (1){
        // Verifica si el botón A0 se presiona para iniciar la cuenta
        if(GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_0) == Bit_RESET){

            // Verifica si el botón A1 se presiona para detener la cuenta
            if(GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_1) == Bit_RESET) {
                countEnabled = 0;
            }

            // Verifica si el botón A2 se presiona para restablecer y activar la alarma
            if(GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_2) == Bit_RESET) {
                count = 0;
                countEnabled = 0;
                alarmActivated = 1;

                // Activa el buzzer configurando el pin A15 como salida
                GPIO_SetBits(GPIOA, GPIO_Pin_15);
            }

            // Actualiza y muestra el contador
            if(countEnabled && count > 0) {
                // Resta 1 al contador
                count--;

                // Muestra el contador en el display de 7 segmentos
                displayDigit(count);
            }else{
                // Si el contador llega a cero o está detenido, apaga el buzzer
                GPIO_ResetBits(GPIOA, GPIO_Pin_15);
            }

            delay_ms(1000); // Espera 1 segundo
        }
    }
}

/* F U N C I O N (E S) */
void delay_ms(uint32_t ms) {
    // Función para crear una pausa en milisegundos
    for (uint32_t i = 0; i < ms * 4000; i++) {
        for(uint32_t j = 0; j < 0x251C; j++);
    }
}

void SystemClock_Config(void){
    // Inicializa el reloj
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE); // Habilita el reloj para el puerto GPIOA
}

static void MX_GPIO_Init(void){
    GPIO_InitTypeDef GPIO_InitStructure = {0};

    // Configura los pines GPIO
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_1 | GPIO_Pin_2; // Pines A0, A1 y A2
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_PP; // Configura como entrada con pull-up

    // Configura los pines para el display de 7 segmentos (A7 a A14)
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_7 | GPIO_Pin_8 | GPIO_Pin_9 | GPIO_Pin_10 |
                                  GPIO_Pin_11 | GPIO_Pin_12 | GPIO_Pin_13 | GPIO_Pin_14 |
                                  GPIO_Pin_15;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; // Configura como salidas push-pull
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;

    GPIO_Init(GPIOA, &GPIO_InitStructure);
}

void displayDigit(uint8_t digit) {
    // Define un arreglo con los valores correspondientes a los dígitos 0-9 en el display de 7 segmentos
    uint8_t digitValues[10] = {0xFC, 0x60, 0xDA, 0xF2, 0x66, 0xB6, 0xBE, 0xE0, 0xFE, 0xF6};

    // Verifica si el dígito es válido (0-9)
    if (digit < 10) {
        // Muestra el dígito en el display de 7 segmentos
        GPIO_Write(GPIOA, digitValues[digit] << 7);
    }
}
