;#####################################################################################
;    Archivo:       05 - ConvertidorAD                                                           
;    SO:            Windows 11                                                           
;    Version:       1.2                                                                  
;    Herramientas:  Visual Studio Code                                               
;                   Mplab
;    Autor:         Jorge Peña
;    Notas:
;                   Emplear el módulo de conversión analógico/digital.                                             
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
;-------------------------------------------------------------------------------------
; DEFINICION DE VARIABLES
Rdd         EQU         0x50
Rdvr        EQU         0x51
Rcc         EQU         0x52
R0          EQU         0x53
;°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
; RESET VECTOR
; Esta sección se ejecutara cuando ocurra un RESET.

RESET_VECTOR	ORG		0

		goto	INICIO                  ; Salta a la funcion principal
;______________________________________________________________________________________
;   MAIN FUNCTION
	ORG		0x1000
INICIO
    call    CPUERTOS
    call    CDAC
    ; BSF pone a 1 un bit de un registro.
    etqM:   bsf     ADCON0, 1           ; 0000 0000 -> 0000 0001 (Configuramos el converitdor)
            call    LEER
            call    DISP
            goto    etqM

;++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
;   SUB-RUTINAS

; Configuracion de los puertos
CPUERTOS
    movlw   0x01		; W <- 0x01
    movwf   TRISA		; TRISA <- W (PORT-IN)
	movlw   0x00		; W <- 0x00
    movwf   TRISD		; TRISD <- W (PORT-OUT)
    movwf   PORTD		; PORTD <- W (0000 0000)
    RETURN

; Configuracion del modulo de conversiÃ³n analÃ³gico/digital
CDAC
    movlw   0x01        ; W <- 0x01
    movwf   ADCON0      ; ADCON0 <- W (Encendemos el convertidor) "REGISTRO DE CONTROL 0"
    movlw   0x0E        ; W <- 0x0E
    ; Tendremos en ADCON1 los iguiente - - 0 0   1 1 1 0
    ; Lo cual significa que:
    ;       bit 7 - 6 no tendrmeos uso
    ;       bit 5 (0) el voltaje de referencia bajo es tierra.
    ;       bit 4 (0) el voltaje de referencia alto es Vcc (5V)
    ;       bit 3 - 0 (1) Configuracion de los puertos de control los cuales seran:
    ;           D   D   D   D   D   D   D   D   D   D   D   D   A
    ;           (Solo AN0 sera analogica y de AN1 a AN12 seran digitales)
    movwf   ADCON1
    movlw   0x0C
    ; Tendremos en ADCON2 los iguiente 0 - 0 0   1 1 0 0
    ; Lo cual significa que:
    ;       bit 7 (0) justifica la posicion del resultado a la izquierda.
    ;       bit 6 no tendra uso
    ;       bit 5 - 3 (001) indica los tiempos de adquisicion los cuales seran 2 Tad.
    ;       bit 2 - 0 (100) indica la frecuencia de muestreo.
    movwf   ADCON2
    RETURN

; Leemos los 8 bits del registro ADRESH
LEER
    ; Si el bit en ADCON0 es 0 este seguira, sino se repetira hasta que sea diferente de 0. 
    etqL:	btfsc   ADCON0, 1
		    goto    etqL
		    movf    ADRESH, 0
		    movwf   Rdd
		    movlw   0x05
		    movwf   Rdvr
		    call    DIVISION
		    movf    Rcc, 0
		    RETURN

DIVISION
    clrf    R0
    clrf    Rcc
    etqD:   movf	Rdvr, 0
            addwf   R0, 0
            movwf   R0

            cpfsgt  Rdd
			RETURN

            movf    Rcc, 0
            addlw   0x01
            daw
            movwf   Rcc
            goto    etqD
    RETURN

DISP
    movwf   PORTD
    RETURN

END
;______________________________________________________________________________________

; "BSF"     bit set (Activar un bit)
; "BTFSC"   bit test file set if is zero
; "CLRF"    Borra un registro
; "CPFSGT"  Compara un archivo contra el acumulador y salta si es mayor
; NOTA:
;   Agregar ECU para poder generar R0, Rdd, Rcc y Rvdr