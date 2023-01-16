;#####################################################################################
;    Archivo:       01 - Practica1                                                           
;    SO:            Windows 10                                                           
;    Version:       1.1                                                                  
;    Herramientas:  Visual Studio Code                                               
;                   Mplab
;    Autor:         Jorge Peña
;    Notas:
;                   Visualizar el código ASCII en las primeras 5 celdas de memoria.                                             
;#####################################################################################
;                                                                                    
;    Archivos requeridos: P18F4550.INC                                               
;                                                                                    
;#####################################################################################

    LIST P = 18F4550, F = INHX32	; Directiva para definir el procesador.
	#include <P18F4550.INC>		    ; Definición de variables especificas del procesador.

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
    config PBADEN   = OFF		    ;NOTE: Modificar este valor aqui no tendra ninfun efecto en
        							; la aplicacion. Vea la parte duperior de la funcion main().
        							; Por default el RB4 I/O pin es usado para detectar si el
        							; firmware debe ingresar en el gestor de arranque o la aplicacion main
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
;**************************************************************************************
; DEFINICION DE VARIABLES
; 

;°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
; RESET VECTOR
; Esta sección se ejecutara cuando ocurra un RESET.

RESET_VECTOR	ORG		0

		goto	INICIO				; Va hacia el inicio del codigo principal

;______________________________________________________________________________________
;   MAIN FUNCTION
	ORG		0x1000					; Direccion de memoria donde iniciaremos
INICIO								; *** Codigo principal va aqui **

	movf	0x50, 0					; Lectura hac�a el acumulador [0x50] -> W, "0" indica la misma posici�n de memoria.
	addlw	0x30					; Suma 30 al cumulador [0x30] + W -> W.
	movwf	0x50					; Ingresa el resultado de la suma depositado en el acumulador a la direcci�n [0x50]

	movf	0x51, 0					; Lectura hac�a el acumulador [0x51] -> W, "0" indica la misma posici�n de memoria.
	addlw	0x30					; Suma 30 al cumulador [0x30] + W -> W.
	movwf	0x51					; Ingresa el resultado de la suma depositado en el acumulador a la direcci�n [0x51]

	movf	0x52, 0					; Lectura hac�a el acumulador [0x52] -> W, "0" indica la misma posici�n de memoria.
	addlw	0x30					; Suma 30 al cumulador [0x30] + W -> W.
	movwf	0x52					; Ingresa el resultado de la suma depositado en el acumulador a la direcci�n [0x52]

	movf	0x53, 0					; Lectura hac�a el acumulador [0x53] -> W, "0" indica la misma posici�n de memoria.
	addlw	0x30					; Suma 30 al cumulador [0x30] + W -> W.
	movwf	0x53					; Ingresa el resultado de la suma depositado en el acumulador a la direcci�n [0x53]

	movf	0x54, 0					; Lectura hac�a el acumulador [0x54] -> W, "0" indica la misma posici�n de memoria.
	addlw	0x30					; Suma 30 al cumulador [0x30] + W -> W.
	movwf	0x54					; Ingresa el resultado de la suma depositado en el acumulador a la direcci�n [0x54]
									; Fin del main	
;++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
;   SUB-RUTINAS

	END
;______________________________________________________________________________________