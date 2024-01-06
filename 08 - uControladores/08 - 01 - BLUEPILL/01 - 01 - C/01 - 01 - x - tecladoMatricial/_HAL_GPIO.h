/*
** #########################################################################################
**  Archivo         :   _HAL_GPIO.h
**  Proyecto        :   Lenguajes ~ uControladores
**  Herramienta(s)  :   Visual Studio Code
**											uVision
**  Autores         :
**                      Penha Paz Jorge Eduardo (Jelp200)
**  Descripcion     :
**                      Configuraremos nuestra capa de abtaraccion de hardware (Hardware
**											Abstraction Layer) para una mejor codificacion.
** #########################################################################################
*/

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~ A R C H I V O   D E   C A B E C E R A ~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#ifndef _HAL_GPIO					// Si no esta definido _HAL_GPIO
#define _HAL_GPIO					// Define el nombre del archivo de cabecera

/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++ I N C L U D E S +++++++++++++++++++++++++++++++++++++ 
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
#include "stm32f10x.h"		// Incluimos la libreria del uC con el que trabajaremos

/* .........................................................................................
...................................... D E F I N E (S) .....................................
......................................................................................... */
// ESTADOS
#define BAJO				0
#define ALTO				1

// NOMBRES DE LOS PUERTOS
#define	PUERTOA				GPIOA
#define PUERTOB				GPIOB
#define PUERTOC				GPIOC
#define PUERTOD				GPIOD
#define PUERTOE				GPIOE
#define PUERTOF				GPIOF
#define PUERTOG				GPIOG

// MODO DEL PIN
#define MODO_SALIDA				((uint32_t)	0x01)
#define MODO_ENTRADA			((uint32_t)	0x02)

// TIPOS DE MODO DE ENTRADA
#define ENTRADA_ANALOGICA				((uint32_t)	0x00)
#define ENTRADA_FLOTANTE				((uint32_t)	0x01)
#define ENTRADA_PU_PD						((uint32_t)	0x02)

// TIPOS DE MODO DE SALIDA
#define SALIDA_PROPOSITO_GEN		((uint32_t)	0x00)
#define SALIDA_DA								((uint32_t)	0x01)		// Salida drenador abierto
#define SALIDA_FNC_ALT					((uint32_t)	0x02)		// Push pull
#define SALIDA_FNC_ALT_DA				((uint32_t)	0x03)		// Drenador abierto

// VELOCIDADES DEL PIN
#define	VELOCIDAD_2MHZ					((uint32_t)	0x02)
#define	VELOCIDAD_10MHZ					((uint32_t)	0x01)
#define	VELOCIDAD_50MHZ					((uint32_t)	0x03)

// HABILITAR RELOJ
#define GPIO_RELOJ_ACT_FNC_ALT	(RCC -> APB2ENR |= (1 << 0))		// Reloj activo funcion alterna
#define GPIO_RELOJ_ACT_PUERTOA	(RCC -> APB2ENR |= (1 << 2))
#define GPIO_RELOJ_ACT_PUERTOB	(RCC -> APB2ENR |= (1 << 3))
#define GPIO_RELOJ_ACT_PUERTOC	(RCC -> APB2ENR |= (1 << 4))
#define GPIO_RELOJ_ACT_PUERTOD	(RCC -> APB2ENR |= (1 << 5))
// #define GPIO_RELOJ_ACT_PUERTOE	(RCC -> APB2ENR |= (1 << 6))

// POSICION BIT ALTO PARA EL REGISTRO CRH (CNFYG Y MODO)
#define CON_POS_BIT1				(POSIPIN[numeroPin] + 2)
#define CON_POS_BIT2				(POSIPIN[numeroPin] + 3)

/* ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ S T R U C T (S) ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ */
// ESTRUCTURA DE CONFIGURACION
typedef struct{
	GPIO_TypeDef *puerto;
	
	uint32_t		pin;
	uint32_t		modo;
	uint32_t		tipo_modo;
	uint32_t		pull;
	uint32_t		velocidad;
	uint32_t		fnc_alt;
	
}GPIO_TIPO;

/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++ P R O T O T I P O (S)   D E   F U N C I O N E S +++++++++++++++++++++
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
//* CONFIGURACION DEL GPIO
static void config_pin (GPIO_TypeDef *puerto, uint32_t numeroPin, uint32_t tipo_modo);
static void config_vel_pin (GPIO_TypeDef *puerto, uint32_t numeroPin, uint32_t vel_pin, uint32_t tipo_modo);

//* FUNCIONES PIN PARA EL USUARIO DEL GPIO
void escribir_pin (GPIO_TypeDef *puerto, uint32_t numeroPin, uint8_t estado);
void toggle_pin (GPIO_TypeDef *puerto, uint32_t numeroPin);

//* INICIALIZACION DEL RELOJ
void inicia_puerto(GPIO_TIPO tipo_pin);

#endif

