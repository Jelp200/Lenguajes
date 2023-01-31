;#####################################################################################
;    Archivo:       00 - Plantilla2
;    SO:            Windows 10                                                           
;    Version:       1.1
;    Herramientas:  Visual Studio Code                                               
;                   Mplab
;    Autor:         Jorge Peña
;    Notas:
;
;    Actualizaciones:
;
;#####################################################################################
;                                                                                    
;    Archivos requeridos: P18F4550.INC                                               
;                                                                                    
;#####################################################################################

	LIST P=18F4550, F=INHX32	;directive to define processor
	#include <P18F4550.INC>		;processor specific variable definitions

;-------------------------------------------------------------------------------------
;   CONFIGURACION DE LOS BITS

	CONFIG PLLDIV   = 5             ; (20 MHz crystal en PICDEM FS USB board)
    CONFIG CPUDIV   = OSC1_PLL2	
    CONFIG USBDIV   = 2             ; Fuente del reloj a 96MHz PLL/2
    CONFIG FOSC     = HSPLL_HS
    CONFIG FCMEN    = OFF
    CONFIG IESO     = OFF
    CONFIG PWRT     = OFF
    CONFIG BOR      = ON
    CONFIG BORV     = 3
    CONFIG VREGEN   = ON		    ; Regulador de voltaje USB
    config WDT      = OFF
    config WDTPS    = 32768
    config MCLRE    = ON
    config LPT1OSC  = OFF
    config PBADEN   = OFF		    ;NOTE: Modificar este valor aquí no tendra ninfun efecto en
        							; la aplicación. Vea la parte duperior de la funcion main().
        							; Por default el RB4 I/O pin es usado para detectar si el
        							; firmware debe ingresar en el gestor de arranque o la aplicación main
        							; despues de reset. Para hacer esto, necesitamos configurar RB4 como
        							; una entrada digital, cambiandolo así de el valor de reset acorde a
        							; esta configuracion del bit.
    config CCP2MX   = ON
    config STVREN   = ON
    config LVP      = OFF
    config ICPRT    = OFF           ; Dedicated In-Circuit Debug/Programming
    config XINST    = OFF           ; Set extendido de instrucciones
    config CP0      = OFF
    config CP1      = OFF
    config CP2      = OFF
    config CP3      = OFF
    config CPB      = OFF
    config CPD      = OFF
    config WRT0     = OFF
    config WRT1     = OFF
    config WRT2     = OFF
    config WRT3     = OFF
    config WRTB     = OFF           ; Boot Block Write Protection
    config WRTC     = OFF
    config WRTD     = OFF
    config EBTR0    = OFF
    config EBTR1    = OFF
    config EBTR2    = OFF
    config EBTR3    = OFF
    config EBTRB    = OFF
;-------------------------------------------------------------------------------------
; DEFINICION DE VARIABLES


RH      equ     0x00		        ; Registros para la funcion PWM
RL	    equ     0x01
Rtmrh 	equ     0x02		        ; Registros para TMR0
Rtmrl	equ     0x03 
RUn	    equ     0x04		        ; Registros para despliegue en BCD
RDec	equ     0x05
;°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
RESET_VECTOR	ORG		0

		goto	_Reset              ; Salta al inicio del programa de usuario
;°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
HIGHPRIORITY_VECTOR	ORG	0x0008
		goto	HighPr_ISR	        ; Salta al inicio de ISR
;°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
LOWPRIORITY_VECTOR	ORG	0x0018
		goto	LowPr_ISR	        ; Salta al inicio de ISR
;°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
; INICIO DEL RESET EN BOOTlOADER.
;°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
		ORG	0x1000
_Reset	goto	INICIO
;°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
; INICIO EN ALTA PRIORIDAD DE ISR
;°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
		ORG 0x1008
HighPr_ISR
		goto cuenta
;°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
; INICIO EN BAJA PRIORIDAD DE ISR
;°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
;		ORG 0x1018
LowPr_ISR
		
		retfie
;______________________________________________________________________________________
;   MAIN FUNCTION

INICIO:

;++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
;   SUB-RUTINAS

; Configuracion de los puertos
CPUERTOS:


	
		RETURN

; Leemos los 4 bits mas significativos de PORTB			
LEER:
	


		RETURN

; Generamos la modulación de ancho de pulso
PWM:
				
		RETURN

;Configura TMR0 para un tiempo de un milisegundo y genera un ciclo de espera cuya duración depende del valor en R6
GTIME:
	
	
		RETURN

; Recibe los parametros de config de los registros RTH, RTL y RTCON
TMR0:



		RETURN

; Rutina de servicio de interrupcion
CUENTA:

	
	RETFIE

	END
;______________________________________________________________________________________