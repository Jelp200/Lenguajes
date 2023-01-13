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
	Rdd         EQU         0x50
	Rdvr        EQU         0x51
	Rcc         EQU         0x52
    ; Si el bit en ADCON0 es 0 este seguira, sino se repetira hasta que sea 0. 
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
	R0          EQU         0x53
    clrf    R0
    clrf    Rcc
    etqD:   movf   Rdvr, 0
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
