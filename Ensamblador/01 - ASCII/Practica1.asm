;*************************************************************************************
;   Este archivo es una plantilla basica para el PIC18F4550 utilizando lenguaje      *
;   ensamblador. Copea este archivo dentro de tu directorio de proyecto y            *
;   modificalo o agrega lo necesario.                                                *
;                                                                                    *
;   La arquitectura del PIC18FXXXX nos permite dos configuraciones de interrupcion.  *
;   Esta pantilla de codigo estÃ¡ escrita para priorizar los niveles de interrupcion  *
;   y los bits IPEN en el registro RCON deben configurarse para habilitar los        *
;   niveles de prioridad. Si el IPEN se deja es su estado 0 predeterminado, solo se  *
;   utilizara el vector de interrupcion 0x008 y las variables WREG_TEMP, BSR_TEMP y  *
;   STATUS_TEMP no se utilizaran.                                                    *
;                                                                                    *
;   Consulte la guÃ­a del MPASM para obtener informacion adicional sobre las caracte_ *
;   risticas del lenguaje ensamblador.                                               *
;                                                                                    *
;   Consulte la hoja de datos del PIC18FXX50/XX55 para informaciÃ³n extra de la arqu_ *
;   itectura y el set de instrucciones.                                              *
;*************************************************************************************
;                                                                                    *
;    Archivo:   Plantilla                                                            *
;    Version:   1.0                                                                  *
;                                                                                    *
;    Autor:     Jose Luis Bravo                                                      *
;    Edicion:   Jorge PeÃ±a                                                           *
;                                                                                    * 
;*************************************************************************************
;                                                                                    *
;    Archivos requeridos: P18F4550.INC                                               *
;                                                                                    *
;*************************************************************************************

    LIST P = 18F4550, F = INHX32	; Directiva para definir el procesador.
	#include <P18F4550.INC>		    ; DefiniciÃ³n de variables especificas del procesador.

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
    config PBADEN   = OFF		    ;NOTE: Modificar este valor aqui no tendra ninfun efecto en
        							; la aplicacion. Vea la parte duperior de la funcion main().
        							; Por default el RB4 I/O pin es usado para detectar si el
        							; firmware debe ingresar en el gestor de arranque o la aplicacion main
        							; despues de reset. Para hacer esto, necesitamos configurar RB4 como
        							; una entrada digital, cambiandolo asÃ­ de el valor de reset acorde a
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
; Esta seccion se ejecutara cuando ocurra un RESET.

RESET_VECTOR	ORG		0

		goto	INICIO				; Va hacia el inicio del codigo principal

;**************************************************************************************

;**************************************************************************************
; Inicio del programa main
; el PROGRAMA PRINCIPAL inicia aqui

	ORG		0x1000					; Direccion de memoria donde iniciaremos
INICIO								; *** Codigo principal va aqui **

	movf	0x50, 0					; Lectura hacía el acumulador [0x50] -> W, "0" indica la misma posición de memoria.
	addlw	0x30					; Suma 30 al cumulador [0x30] + W -> W.
	movwf	0x50					; Ingresa el resultado de la suma depositado en el acumulador a la dirección [0x50]

	movf	0x51, 0					; Lectura hacía el acumulador [0x51] -> W, "0" indica la misma posición de memoria.
	addlw	0x30					; Suma 30 al cumulador [0x30] + W -> W.
	movwf	0x51					; Ingresa el resultado de la suma depositado en el acumulador a la dirección [0x51]

	movf	0x52, 0					; Lectura hacía el acumulador [0x52] -> W, "0" indica la misma posición de memoria.
	addlw	0x30					; Suma 30 al cumulador [0x30] + W -> W.
	movwf	0x52					; Ingresa el resultado de la suma depositado en el acumulador a la dirección [0x52]

	movf	0x53, 0					; Lectura hacía el acumulador [0x53] -> W, "0" indica la misma posición de memoria.
	addlw	0x30					; Suma 30 al cumulador [0x30] + W -> W.
	movwf	0x53					; Ingresa el resultado de la suma depositado en el acumulador a la dirección [0x53]

	movf	0x54, 0					; Lectura hacía el acumulador [0x54] -> W, "0" indica la misma posición de memoria.
	addlw	0x30					; Suma 30 al cumulador [0x30] + W -> W.
	movwf	0x54					; Ingresa el resultado de la suma depositado en el acumulador a la dirección [0x54]
									; Fin del main	
;**************************************************************************************
; Espacio para subrutinas
;**************************************************************************************

					
;**************************************************************************************
;Fin del programa
	END