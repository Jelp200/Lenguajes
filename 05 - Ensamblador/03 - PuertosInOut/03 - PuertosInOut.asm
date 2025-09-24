;#####################################################################################
;    Archivo:       03 - PuertosInOut                                                           
;    SO:            Windows 11                                                           
;    Version:       1.1                                                                  
;    Herramientas:  Visual Studio Code                                               
;                   Mplab
;    Autor:         Jorge Peña
;    Notas:
;                   Configuracion de los puertos de entrada y salida del PIC.                                             
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
;**************************************************************************************
; DEFINICION DE VARIABLES
; 

;°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
; RESET VECTOR
; Esta sección se ejecutara cuando ocurra un RESET.

RESET_VECTOR	ORG		0

		goto	INICIO		;go to start of main code
;______________________________________________________________________________________
;   MAIN FUNCTION
	ORG		0x1000
INICIO				; *** Codigo principal va aqu� **
    ;SUB-RUTINAS
            call CPUERTOS
etq1:	    call LEER
            movwf PORTD
    GOTO    etq1 
RETURN
					; Fin del main	
;++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
;   SUB-RUTINAS
CPUERTOS
    movlw   0x0F		; Desactivar el convertidor analog/digital
    movwf   ADCON1
    movlw   0xFF		; W <- 0xFF
    movwf   TRISB		; TRISB <- W (PORT-IN)
	movlw   0x00		; W <- 0x00
    movwf   TRISD		; TRISD <- W
    movwf   PORTD		; PORTD <- W
    RETURN

LEER
    swapf   PORTB, 0	; Intercambio H (DATO xxxx) to L (xxxx DATO)
    andlw   0x0F		; Enmascaramiento (xxxx DATO)(0000 1111) = 0000 DATO -> W
    movwf   0x50		; 0x50 <- W
    sublw   0x0C		; W <- (0x0C - W)
    BN      LEER		; Salto condicional �W positivo? Si es as� continua, sino, se repite el bloque anterior
    movf    0x50, 0		; 0x50 <- W
    addlw   0x00
    daw
    RETURN

END
;______________________________________________________________________________________