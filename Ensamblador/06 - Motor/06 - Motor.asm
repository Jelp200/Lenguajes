;#####################################################################################
;    Archivo:       06 - Motor                                                           
;    SO:            Windows 10                                                           
;    Version:       1.4                                                                  
;    Herramientas:  Visual Studio Code                                               
;                   Mplab
;    Autor:         Jorge Peña
;    Notas:
;                   Generar intervalos de tiempo empleando TMR0.
;    Retoques:
;                   Se corrigio el bucle de la "etq3" disparando el septimo bit de
;                   T0CON.
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
RH      EQU     0x50
RL      EQU     0x51
R6      EQU     0x52
RTCON   EQU     0x53
RTH     EQU     0x54
RTL     EQU     0x55
;°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
RESET_VECTOR	ORG		0

		goto	INICIO                  ; Salta a la funcion principal
;______________________________________________________________________________________
;   MAIN FUNCTION
	ORG		0x1000
INICIO
    call    CPUERTOS
    ; Llamamos a la etiqueta LEER.
    etqI:   call    LEER
            call    PWM
            goto    etqI

;++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
;   SUB-RUTINAS

; Configuracion de los puertos
CPUERTOS:
    ;Deshabilitamos el convertidor analogico/digital
    movlw   0x0F		        ; W <- 0x0F
    movwf   ADCON1		        ; ADCON1  <- W.

    movlw   0xFF                ; W <- 0xFF
    movwf   TRISB               ; TRISB <- W (PORT-IN)
	clrf    TRISA				; TRISA (PORT-OUT)
    RETURN

; Leemos los 4 bits mas significativos de PORTB
LEER:
    movf    PORTB, 0            ; W <- PORTB
	andlw   0xF0                ; Enmacaramiento (DATO xxxx)(1111 0000) = DATO 0000 -> W			
    bz      etq1                ; DATO = 0?
    movwf   RH                  ; RH <- W
    swapf   RH, 1	        ; Intercambio "H (DATO 0000)" to "L (0000 DATO)"
    movf    RH, 0               ; W <- RH
    sublw   0x10                ; W <- (0x10 - W) "Siendo 0x10 = 16 binario"
    movwf   RL                  ; RL <- W
    RETURN

    etq1:  	bcf	 	PORTA, 1	; Limpiamos el bit 1 del PORTA "0"
            goto	LEER

; Generamos la modulación de ancho de pulso
PWM:
    movff   RH, R6              ; R6 <- RH "(Destino) <- (Fuente)"
    bsf     PORTA, 1            ; Hacemos set en el bit 1 del PORTA "1"
    call    GTIME
    movff   RL, R6              ; R6 <- RL "(Destino) <- (Fuente)"
    bcf     PORTA, 1            ; Limpiamos el bit 1 del PORTA "0"
    call	GTIME
    RETURN

;Configura TMR0 para un tiempo de un milisegundo y genera un ciclo de espera cuya duración depende del valor en R6
GTIME:
    movlw   0x08                ; W <- 0x08
    movwf   RTCON               ; RTCON <- W
    etq2:	movlw	0xD1        ; W <- 0xD1
            movwf   RTH         ; RTH <- W
            movlw   0x20        ; W <- 0x20
            movwf   RTL         ; RTL <- W
            call    TMRO
            decf    R6, 1       ; Decrementa en 1 a R6
            bnz     etq2      	; R6 = 0?
    RETURN

; Recibe los parametros de config de los registros RTH, RTL y RTCON
TMRO:
    movff   RTCON, T0CON        ; T0CON <- RTCON
    movff   RTH, TMR0H          ; TMR0H <- RTH
    movff   RTL, TMR0L          ; TMR0L <- RTL
	bsf		T0CON, 7	        ; TMR0ON <- 1
    etq3:   btfss   INTCON, 2
            goto      etq3
    bcf     INTCON, 2
    bcf     T0CON, 7
    RETURN

END
;______________________________________________________________________________________