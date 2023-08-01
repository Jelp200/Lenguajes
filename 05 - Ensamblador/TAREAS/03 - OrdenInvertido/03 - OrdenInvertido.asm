;*************************************************************************************
;                                                                                    *
;    Archivo:   03 - OrdenInvertido                                                  *
;    Version:   1.0                                                                  *
;                                                                                    *
;    Edicion:   Jorge Peña                                                           *
;    Notas:                                                                          *
;                   Empleando direccionamiento indirecto, desarrollar una rutina que *
;                   se encarge de invertir el orden de una cadena de 20 caracteres   *
;                   almacenados en un área de memoria cuya dirección inicial es de   *
;                   200 hexadecimal.                                                 *
;                                                                                    *
;*************************************************************************************
;                                                                                    *
;    Archivos requeridos: P18F4550.INC                                               *
;                                                                                    *
;*************************************************************************************

    LIST P = 18F4550, F = INHX32	; Directiva para definir el procesador.
	#include <P18F4550.INC>		    ; Definición de variables especificas del procesador.

;**************************************************************************************
;   Configuration de bits

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
AUX     EQU     0x00

;**************************************************************************************
; Reset vector
; Esta sección se ejecutara cuando ocurra un RESET.

RESET_VECTOR	ORG		0

		goto	INICIO		;go to start of main code

;**************************************************************************************

;**************************************************************************************
; Inicio del programa main
; el PROGRAMA PRINCIPAL inicia aqui

	ORG		0x1000
INICIO
    call    CONFIGURACION
    call    INVERTIR
    call    FIN
;**************************************************************************************
; Espacio para subrutinas
;**************************************************************************************
CONFIGURACION
    movlw   0x02
    movwf   FSR0H
    movlw   0x00
	movwf   FSR0L
	movlw   0x02
	movwf   FSR1H
	movlw   0x13
	movwf   FSR1L
	RETURN

INVERTIR
    movlw   0x09
    movwf   AUX
	movf    INDF0, 0  
	movff   INDF1, INDF0
	movwf   INDF1
	incf    FSR0L, 1
	decf    FSR1L, 1
	movf    FSR1L, 0
	cpfseq  AUX
	goto    INVERTIR
	RETURN

FIN
    RETURN
;**************************************************************************************
;Fin del programa
    END