;*************************************************************************************
;                                                                                    *
;    Archivo:     01 - NMenor                                                        *
;    Version:     1.0                                                                *
;                                                                                    *
;    Autor:       Jorge Peña Paz                                                     *
;                                                                                    *
;   Organizacion: GRADUZ TECH®                                                       *            *
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
; 


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
	call 	CPUERTOS
	etqI:	call 	LEER
			call	COMPARATIVA
			movwf	PORTD
			goto 	etqI
RETURN

;**************************************************************************************
; Espacio para subrutinas
;**************************************************************************************
CPUERTOS
	movlw 	0x0F
	movwf 	ADCON1
	movlw 	0xFF
	movwf 	TRISB
	movlw 	0x00
	movwf 	TRISD
	movwf 	PORTD
	RETURN

LEER
	; Ingreso dato 1.
	swapf	PORTB, 0
	andlw	0x0F
	movwf	0x50
	movwf	0x51
	; Ingreso dato 2.
	swapf	PORTB, 0
	andlw	0x0F
	movwf	0x52
	movwf	0x53
	; Ingreso dato 3.
	swapf	PORTB, 0
	andlw	0x0F
	movwf	0x54
	movwf	0x55
	RETURN

COMPARATIVA
	COMP1:	movf	0x52, 0		; 0x52 -> w
			subwf	0x50, 0		; (0x50 - 0x52 = R -> w)
			; Si R es negativo llamara a la siguiente comparativa "COMP2"
			BN		COMP2		; ?R < 0?
			; Si R es positivo ahora ingresaremos a w el dato en R2
			ETQAux:	movf	0x54, 0		; 0x54 -> w
					subwf	0x52, 0		; (0x52 - 0x54 = R)
			; Si R es negativo llamara a la etiqueta fina "ETQF2"
			BN		ETQF2		; ?R < 0?
			; Si R es positivo llamaremos a la etiqueta final "ETQF3"
			goto	ETQF3

	COMP2:	movf	0x54, 0		; 0x54 -> w
			subwf	0x50, 0		; (0x50 - 0x54 = R)
			; Si R es negativo llamaremos a la etiqueta final "ETQF1"
			BN		ETQF1
			; Si R es positivo volveremos a la etiqueta auxiliar
			goto	ETQAux

    ; Mover numero mayor a "w"
	ETQF1:	movf	0x50, 0
			RETURN
	ETQF2:	movf	0x52, 0
			RETURN
	ETQF3:	movf	0x54, 0
			RETURN
	RETURN					
;**************************************************************************************
;Fin del programa
	END