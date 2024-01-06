/*
** #########################################################################################
**  Archivo         :   main.c
**  Proyecto        :   Lenguajes ~ uControladores
**  Herramienta(s)  :   Visual Studio Code
**											uVision
**  Autores         :
**                      Penha Paz Jorge Eduardo (Jelp200)
**  Descripcion     :   Programa para el uso del teclado matricial y visualizacion en el
**                      display de 7 segmentos, los pines del teclado matricial son desde
**                      PB8 ~ PB15 y los pines del D7S son desde PA0 ~ PA7.
** #########################################################################################
*/
#include "stm32f10x.h"

/* .........................................................................................
...................................... D E F I N E (S) .....................................
......................................................................................... */
//* PINES DEL TECLADO MATRICIAL
#define ROWS_GPIO GPIOB
#define COLS_GPIO GPIOA
#define ROWS_PIN_MASK 0x00F0
#define COLS_PIN_MASK 0x000F

//* PINES DEL DISPLAY DE 7 SEGMENTOS
#define SEGMENTS_GPIO GPIOC
#define DIGITS_GPIO GPIOA
#define SEGMENTS_PIN_MASK 0xFF00
#define DIGITS_PIN_MASK 0x000F

/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++ P R O T O T I P O (S)   D E   F U N C I O N E S +++++++++++++++++++++
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
void delay_ms(uint32_t ms);
void config_teclado(void);
char leer_tecla(void);
void config_D7S(void);
void display_digito(uint8_t digit);

/* |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||||||||||| F U N C I O N   P R I N C I P A L ||||||||||||||||||||||||||||
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| */
int main(void) {
    config_teclado();
    config_D7S();

    while (1) {
        char key = leer_tecla();

        // Si se presiona una tecla, mostrar en el display
        if (key != '\0') {
            display_digito(key);
            delay_ms(500);              // Espera para evitar rebotes
        }
    }
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ F U N C I O N E S ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
//* FUNCION PARA EL RETARDO EN mSeg
void delay_ms(uint32_t ms) {
    ms *= (SystemCoreClock / 1000) / 8;

    while (ms--) {
        __NOP();
    }
}

//* FUNCION PARA CONFIGURAR EL TECLADO MATRICIAL
void config_teclado(void) {
    // Habilitar el reloj para los puertos A y B
    RCC->APB2ENR |= RCC_APB2ENR_IOPAEN | RCC_APB2ENR_IOPBEN;

    // Configurar filas como salidas y columnas como entradas con pull-up
    ROWS_GPIO->CRL &= ~ROWS_PIN_MASK;
    ROWS_GPIO->CRL |= 0x00220000;

    COLS_GPIO->CRL &= ~COLS_PIN_MASK;
    COLS_GPIO->CRL |= 0x00040004;
}

//* FUNCION PARA LEER LA TECLA PRESIONADA
char leer_tecla(void) {
    // Escaneo de teclas en la matriz
    for (uint8_t row = 0; row < 4; ++row) {
        // Establecer la fila en bajo
        ROWS_GPIO->BSRR = (1 << (row + 4)) << 16;

        // Verificar las columnas para detectar la tecla presionada
        for (uint8_t col = 0; col < 4; ++col) {
            if (!(COLS_GPIO->IDR & (1 << col))) {
                // Restaurar el estado de la fila
                ROWS_GPIO->BSRR = 1 << (row + 4);

                // Mapa de teclas (puedes ajustar segun la configuracion)
                char keyMap[4][4] = {{'1', '2', '3', 'A'},
                                     {'4', '5', '6', 'B'},
                                     {'7', '8', '9', 'C'},
                                     {'*', '0', '#', 'D'}};

                return keyMap[row][col];
            }
        }

        // Restaurar el estado de la fila
        ROWS_GPIO->BSRR = 1 << (row + 4);
    }

    return '\0'; // Ninguna tecla presionada
}

//* FUNCION PARA CONFIGURAR EL DISPLAY DE 7 SEGMENTOS
void config_D7S(void) {
    // Habilitar el reloj para los puertos A y B
    RCC->APB2ENR |= RCC_APB2ENR_IOPAEN | RCC_APB2ENR_IOPBEN;

    // Configurar pines de segmentos como salidas
    SEGMENTS_GPIO->CRL &= ~SEGMENTS_PIN_MASK;
    SEGMENTS_GPIO->CRL |= 0x22220000;

    // Configurar pines de dígitos como salidas
    DIGITS_GPIO->CRH &= ~DIGITS_PIN_MASK;
    DIGITS_GPIO->CRH |= 0x22220000;
}

void display_digito(uint8_t digit) {
    // Mapa de segmentos para numeros hexadecimales
    uint8_t segmentMap[16] = {0xFC, 0x60, 0xDA, 0xF2, 0x66, 0xB6, 0xBE, 0xE0,
                              0xFE, 0xF6, 0xEE, 0x3E, 0x9C, 0x7A, 0x9E, 0x8E};

    // Mostrar el dígito en el display de 7 segmentos
    SEGMENTS_GPIO->ODR = segmentMap[digit & 0x0F];

    // Seleccionar el dígito activo (de 0 a 3)
    DIGITS_GPIO->ODR = (1 << (digit >> 4)) << 8;
}
