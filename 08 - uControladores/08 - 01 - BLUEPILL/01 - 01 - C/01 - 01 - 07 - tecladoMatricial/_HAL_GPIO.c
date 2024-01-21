/*
** #########################################################################################
**  Archivo         :   _HAL_GPIO.c
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

/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++ I N C L U D E S +++++++++++++++++++++++++++++++++++++ 
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
#include "_HAL_GPIO.h"
#include <stdint.h>

/* -----------------------------------------------------------------------------------------
---------------------------- V A R I A B L E S   G L O B A L E S ---------------------------
----------------------------------------------------------------------------------------- */
/* Recordemos que cada pin en los registros de control (alto o bajo) tiene asociado un
nibble*/
uint32_t POSIPIN[16] = {			// Nos lleva al 1er bit en MODE
	/*	C	R	L	*/
	(0x00),				// PIN_0, la posicion comienza en 0
	(0x04),				// PIN_1, la posicion comienza en 4
	(0x08),				// PIN_2, la posicion comienza en 8
	(0x0C),				// PIN_3, la posicion comienza en 12
	(0x10),				// PIN_4, la posicion comienza en 16
	(0x14),				// PIN_5, la posicion comienza en 20
	(0x18),				// PIN_6, la posicion comienza en 24
	(0x1C),				// PIN_7, la posicion comienza en 28
	/*	C	R	H	*/
	(0x00),				// PIN_8, la posicion comienza en 0
	(0x04),				// PIN_9, la posicion comienza en 4
	(0x08),				// PIN_10, la posicion comienza en 8
	(0x0C),				// PIN_11, la posicion comienza en 12
	(0x10),				// PIN_12, la posicion comienza en 16
	(0x14),				// PIN_13, la posicion comienza en 20
	(0x18),				// PIN_14, la posicion comienza en 24
	(0x1C)				// PIN_15, la posicion comienza en 28
};

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ F U N C I O N E S ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

//* FUNCION PARA CONFIGURAR EL PIN
static void config_pin (GPIO_TypeDef *puerto, uint32_t numeroPin, uint32_t tipo_modo){
	if(numeroPin >= 8){				// Controla los registros altos
		switch(tipo_modo){
			//------------------ MODOS DE ENTRADA Y SALIDA ------------------
			case SALIDA_PROPOSITO_GEN | ENTRADA_ANALOGICA:
				puerto -> CRH &= ~((1 << CON_POS_BIT1) | (1 << CON_POS_BIT2));
				break;
			case SALIDA_DA | ENTRADA_FLOTANTE:
				puerto -> CRH &= ~(1 << CON_POS_BIT2);
				puerto -> CRH |= (1 << CON_POS_BIT1);
				break;
			case SALIDA_FNC_ALT | ENTRADA_PU_PD:
				puerto -> CRH |= SALIDA_FNC_ALT <<  (CON_POS_BIT1);
				break;
			case SALIDA_FNC_ALT_DA:
				puerto -> CRH |= SALIDA_FNC_ALT_DA << (CON_POS_BIT1);
				break;
		} // fin switch
	}else{										// Controla los registros bajos
		switch(tipo_modo){
			//------------------ MODOS DE ENTRADA Y SALIDA ------------------
			case SALIDA_PROPOSITO_GEN | ENTRADA_ANALOGICA:
				puerto -> CRL &= ~((1 << CON_POS_BIT1) | (1 << CON_POS_BIT2));
				break;
			case SALIDA_DA | ENTRADA_FLOTANTE:
				puerto -> CRL &= ~(1 << CON_POS_BIT2);
				puerto -> CRL |= (1 << CON_POS_BIT1);
				break;
			case SALIDA_FNC_ALT | ENTRADA_PU_PD:
				puerto -> CRL |= SALIDA_FNC_ALT <<  (CON_POS_BIT1);
				break;
			case SALIDA_FNC_ALT_DA:
				puerto -> CRL |= SALIDA_FNC_ALT_DA << (CON_POS_BIT1);
				break;
		}
	}
}

//* FUNCION PARA CONFIGURAR LA VELOCIDAD DEL PIN
static void config_vel_pin (GPIO_TypeDef *puerto, uint32_t numeroPin, uint32_t vel_pin, uint32_t tipo_modo){
	if(numeroPin >= 8){
		if(tipo_modo == MODO_ENTRADA)				// Pondremos el CRH como modo de entrada
			puerto -> CRH &= ~(1 << (POSIPIN[numeroPin]) | 1 << (POSIPIN[numeroPin] + 1));
		else
			puerto -> CRH |= (vel_pin << (POSIPIN[numeroPin]));				// Pondremos a CRH como modo de salida y le damos una velocidad
	}else{
		if(tipo_modo == MODO_ENTRADA)
			puerto -> CRL &= ~(1 << (POSIPIN[numeroPin]) | 1 << (POSIPIN[numeroPin] + 1));
		else
			puerto -> CRL |= (vel_pin << (numeroPin));
	}
}

//* FUNCION PARA ESCRIBIR EL PIN
void escribir_pin (GPIO_TypeDef *puerto, uint32_t numeroPin, uint8_t estado){
	if(estado){
		puerto -> BSRR = (1 << numeroPin);
	}else{
		puerto -> BSRR = (1 << (numeroPin + 16));
	}
}

//* FUNCION PARA PIN TOGGLE
void toggle_pin (GPIO_TypeDef *puerto, uint32_t numeroPin){
	puerto -> ODR ^= (1 << numeroPin); 
}

//* FUNCION PARA  INICIALIZAR EL PUERTO
void inicia_puerto(GPIO_TIPO tipo_pin){
	if(tipo_pin.puerto == PUERTOA)
		GPIO_RELOJ_ACT_PUERTOA;
	if(tipo_pin.puerto == PUERTOB)
		GPIO_RELOJ_ACT_PUERTOB;
	if(tipo_pin.puerto == PUERTOC)
		GPIO_RELOJ_ACT_PUERTOC;
	if(tipo_pin.puerto == PUERTOD)
		GPIO_RELOJ_ACT_PUERTOD;
	
	config_pin(tipo_pin.puerto, tipo_pin.pin, tipo_pin.tipo_modo);
	config_vel_pin(tipo_pin.puerto, tipo_pin.pin, tipo_pin.velocidad, tipo_pin.modo);
}
