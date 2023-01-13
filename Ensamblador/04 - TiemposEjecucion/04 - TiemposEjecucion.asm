;#####################################################################################
;    Archivo:       04 - TiemposEjecucion                                                           
;    SO:            Windows 10                                                           
;    Version:       1.0                                                                  
;    Herramientas:  Visual Studio Code                                               
;                   Mplab
;    Autor:         Jorge Peña
;    Notas:
;                   Elaborar un programa en ASM de una rutina que despliegue una cnta
;                   ascendente en el display de 7 egmentos en el PORTD con intervalo
;                   de 7 segundos.                                             
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

;°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
; Reset vector
; Esta sección se ejecutara cuando ocurra un RESET.

RESET_VECTOR	ORG		0

		goto	INICIO                  ; Salta a la funcion principal

;______________________________________________________________________________________
;   MAIN FUNCTION
	ORG		0x1000
INICIO
    call    CPUERTOS
    etqI:   movf    PORTD, 0
            addlw   0x01                ; w <- PORTD + 1
            daw							; Ajuste de decimales en 'w' (BCD)
            movwf   PORTD
            call    T500
            goto etqI

;++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
;   SUB-RUTINAS

; Configuracion del puerto D
CPUERTOS
    movlw   0x0F                        ; w <- 0x0F
    movwf   ADCON1                      ; ADCON1 <- w
	movlw   0x00		                ; w <- 0x00
    movwf   TRISD		                ; TRISD <- w (PORT-OUT)
    movwf   PORTD		                ; PORTD <- w
    RETURN
    ;NOTA: Solo configuraremos el PORTD debido a que no ingresaremos algún dato de forma
    ;analogica en el PORTB.

T500
	; DECLARACION DE VARIABLES
    ;[Nvar] EQU [Expresión]
    R0  EQU 0x00
    R1  EQU 0x01
    R2  EQU 0x02

	; CALCULO DE TIEMPOS
	;	R0 con 01 = 16.3432 mSeg
	;	R0 con 16 = 506.59	mSeg
	;	R0 con 3D = 336.83.82u	Seg
	; 	R0 con 87 =	2.2		Seg
	movlw	0x3D						; w <- 0x1F (0x40 para 1seg)
	; R0 sirve para el tiempo de despliegue
	movwf	R0							; R0 <- w
    etq1:   movlw   0xFF                ; w <- 0xFF
            movwf   R1                  ; R1 <- w
    etq2:   movlw   0xFF                ; w <- 0xFF
            movwf   R2                  ; R2 <- 0xFF
    etqR:   decf    R2, 1               ; R2 <- R2 - 1
            bnz     etqR                ; ¿R1 = 0?
            decf    R1, 1               ; R1 <- R1 - 1
            bnz     etq2                ; ¿R2 = 0?
            decf    R0, 1               ; R0 <- R0 - 1
            bnz     etq1                ; ¿R2 = 0?
    RETURN
            
END
;______________________________________________________________________________________
; FUNCION:
;	El programa despliega una cuenta ascendente en determinados tiempos gracias al regi_
;	stro R0.