; DEFINICION DE VARIABLES
; NOTA:
;   Agregar [Nvar] EQU [Expresión] para RH, R6, RL, RTH, RTL, RTCON
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
CPUERTOS
    ;Deshabilitamos el convertidor analogico/digital
    movlw   0x0F		        ; W <- 0x0F
    movwf   ADCON1		        ; ADCON1  <- W.

	movlw   0x00		        ; W <- 0x00
    movwf   TRISA		        ; TRISA <- W (PORT-OUT)
    movlw   0xFF                ; W <- 0xFF
    movwf   TRISB               ; TRISB <- W (PORT-IN)
    RETURN

; Leemos los 4 bits mas significativos de PORTB
LEER
    movf    PORTB, 0            ; W <- PORTB
    andlw   0xF0                ; Enmacaramiento (DATO xxxx)(1111 0000) = DATO 0000 -> W
    bz      etqBZ               ; DATO = 0?
    movwf   RH                  ; RH <- W
    swapf   RH, 1               ; Intercambio "H (DATO 0000)" to "L (0000 DATO)"
    movf    RH, 0               ; W <- RH
    sublw   0x10                ; W <- (0x10 - W) "Siendo 0x10 = 16 binario"
    movwf   RL                  ; RL <- W
    RETURN

    etqBZ:  bcf PORTA, 1        ; Limpiamos el bit 1 del PORTA "0"
            goto LEER

; Generamos la modulación de ancho de pulso
PWM
    movff   RH, R6              ; R6 <- RH "(Destino) <- (Fuente)"
    bsf     PORTA, 1            ; Hacemos set en el bit 1 del PORTA "1"
    call    GTIME
    movff   RL, R6              ; R6 <- RL "(Destino) <- (Fuente)"
    bcf     PORTA, 1            ; Limpiamos el bit 1 del PORTA "0"
    call GTIME
    RETURN

;Configura TMR0 para un tiempo de un milisegundo y genera un ciclo de espera cuya duración depende del valor en R6
GTIME
    movlw   0x08                ; W <- 0x08
    movwf   RTCON               ; RTCON <- W
    etqRTH: movlw   0xD1        ; W <- 0xD1
            movwf   RTH         ; RTH <- W
            movlw   0x20        ; W <- 0x20
            movwf   RTL         ; RTL <- W
            call    TMR0
            decf    R6, 0       ; Decrementa en 1 a R6
            bnz     etqRTH      ; R6 != 0?
    RETURN

; Recibe los parametros de config de los registros RTH, RTL y RTCON
TMR0
    movff   RTCON, T0CON        ; T0CON <- RTCON
    movff   RTH, TMR0H          ; TMR0H <- RTH
    movff   RTL, TMR0L          ; TMR0L <- RTL
    etq1:   btfss   INTCON, 2
            goto    etq1
    bcf     INTCON, 2
    bcf     T0CON, 7
    RETURN

END
;______________________________________________________________________________________