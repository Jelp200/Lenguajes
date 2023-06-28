;******************************************************************************
;   This file is a basic template for assembly code for a PIC18F4550. Copy    *
;   this file into your project directory and modify or add to it as needed.  *
;                                                                             *
;   The PIC18FXXXX architecture allows two interrupt configurations. This     *
;   template code is written for priority interrupt levels and the IPEN bit   *
;   in the RCON register must be set to enable priority levels. If IPEN is    *
;   left in its default zero state, only the interrupt vector at 0x008 will   *
;   be used and the WREG_TEMP, BSR_TEMP and STATUS_TEMP variables will not    *
;   be needed.                                                                *
;                                                                             *
;   Refer to the MPASM User's Guide for additional information on the         *
;   features of the assembler.                                                *
;                                                                             *
;   Refer to the PIC18FXX50/XX55 Data Sheet for additional                    *
;   information on the architecture and instruction set.                      *
;                                                                             *
;******************************************************************************
;                                                                             *
;    Filename:    Practica 8                                                *
;    Date:        06/09/18                                                    *
;    File Version: 1.0                                                        *
;                                                                             *
;    Author:   Jose Luis Bravo Leon
;                             *
;    Company:   Acad. Computación ICE - ESIME Zac.                            *
;                                                                             * 
;******************************************************************************
;                                                                             *
;    Files required: P18F4550.INC                                             *
;                                                                             *
;******************************************************************************

	LIST P=18F4550, F=INHX32	;directive to define processor
	#include <P18F4550.INC>		;processor specific variable definitions

;******************************************************************************
;Configuration bits

    CONFIG PLLDIV   = 5         ;(20 MHz crystal on PICDEM FS USB board)
    CONFIG CPUDIV   = OSC1_PLL2	
    CONFIG USBDIV   = 2         ;Clock source from 96MHz PLL/2
    CONFIG FOSC     = HSPLL_HS
    CONFIG FCMEN    = OFF
    CONFIG IESO     = OFF
    CONFIG PWRT     = OFF
    CONFIG BOR      = ON
    CONFIG BORV     = 3
    CONFIG VREGEN   = ON	;USB Voltage Regulator
    config WDT      = OFF
    config WDTPS    = 32768
    config MCLRE    = ON
    config LPT1OSC  = OFF
    config PBADEN   = OFF	;NOTE: modifying this value here won't have an effect
        			;on the application.  See the top of the main() function.
        			;By default the RB4 I/O pin is used to detect if the
        			;firmware should enter the bootloader or the main application
        			;firmware after a reset.  In order to do this, it needs to
        			;configure RB4 as a digital input, thereby changing it from
        			;the reset value according to this configuration bit.
    config CCP2MX   = ON
    config STVREN   = ON
    config LVP      = OFF
    config ICPRT    = OFF      	; Dedicated In-Circuit Debug/Programming
    config XINST    = OFF      	; Extended Instruction Set
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
    config WRTB     = OFF      	; Boot Block Write Protection
    config WRTC     = OFF
    config WRTD     = OFF
    config EBTR0    = OFF
    config EBTR1    = OFF
    config EBTR2    = OFF
    config EBTR3    = OFF
    config EBTRB    = OFF
;******************************************************************************
; Definicion de variables
	Rdato	EQU 0x00
	Rnv		EQU 0x01
	RH		EQU 0x02
	RL		EQU 0x03
	R6		EQU 0x04
	Rtcon	EQU 0x05
	Rth		EQU 0x06
	Rtl		EQU 0x07
;******************************************************************************

;Reset vector

;*****************************************************************************
RESET_VECTOR	ORG	0
		goto	_Reset		;go to start of user program
;******************************************************************************
HIGHPRIORITY_VECTOR	ORG	0x0008
		goto	HighPr_ISR	;go to start of ISR
;****************************************************************************** 
LOWPRIORITY_VECTOR	ORG	0x0018
		goto	LowPr_ISR	;go to start of ISR		

;******************************************************************************
;Start of Reset in Bootloader.
;******************************************************************************
		ORG	0x1000
_Reset	goto	INICIO
;******************************************************************************
; Start of High Priority ISR
;******************************************************************************
		ORG 0x1008
HighPr_ISR
		goto Cuenta


;******************************************************************************
; Start of Low Priority ISR
;******************************************************************************
;		ORG 0x1018
LowPr_ISR
		
		retfie
;*****************************************************************************
; INICIO DEL PROGRAMA PRINCIPAL
;*****************************************************************************

INICIO:  
		clrf Rnv
		call CPuertos
		call Cusart
		call HandSh
Etq1:	call Leer
		call PWM
		goto Etq1

					; FIN DEL PROGRAMA PRINCIPAL
;******************************************************************************
; SECCION DE SUBRUTINAS
;******************************************************************************
CPuertos:
		movlw 0x0F
		movwf ADCON1
		clrf TRISA
		clrf TRISC
		clrf TRISD
		movlw 0xFF
		movwf TRISB 
		movlw 0x90
		movwf INTCON
		return
; *********************************************			
Leer:
		call RxByteN
		movf Rdato,0
		andlw 0x0F
		bnz Sigue
		bcf PORTA,1
		goto Leer
		
Sigue:	movwf RH
		sublw 0x10
		movwf RL
		return
; *****************************************
Cusart:
		clrf SSPCON1
		bsf	TRISC,7
		bcf TRISC,6
		movlw 0xE1
		movwf SPBRG
		movlw 0x04
		movwf SPBRGH
		movlw 0x24
		movwf TXSTA
		movlw 0x90
		movwf RCSTA
		movlw 0x08
		movwf BAUDCON
		movf RCREG,0
		movf RCREG,0
		return
; *****************************************
HandSh:
		btfss PIR1,5
		goto HandSh
		call RxByteN
		movlw 0x4B
		cpfseq Rdato
		goto nack
		movlw 0x0D
		movwf Rdato
		call TxByte
		movlw 0x48
		movwf Rdato
		call TxByte
		movlw 0x4F
		movwf Rdato
		call TxByte
		movlw 0x4C
		movwf Rdato
		call TxByte
		movlw 0x41
		movwf Rdato
		call TxByte
		movlw 0x00
		movwf Rdato
		call TxByte
		return
nack:	movlw 0x3F
		movwf Rdato
		call TxByte
		goto HandSh
; *****************************************
TxByte:
		btfss TXSTA,1
		goto TxByte
		movff Rdato,TXREG
		return
; *****************************************
RxByteN:
		btfss PIR1,5
		return
		movff	RCREG,Rdato		
		return
; *****************************************
PWM:
		movff RH,R6
		bsf PORTA,1
		call Gtime
		bcf PORTA,1
		movf RL,0
		bz reg
		movff RL,R6
		call Gtime
reg:			
		return
; *****************************************
Gtime:
		movlw 0x08
		movwf Rtcon
Etq2:	movlw 0xD1
		movwf Rth
		movwf 0x20
		movwf Rtl
		call TMRO
		decf R6,1
		bnz Etq2
		return

; *****************************************
TMRO:
		movff Rtcon,T0CON
		movff Rth,TMR0H
		movff Rtl,TMR0L
		bsf T0CON,7
ETQ4:	btfss INTCON,2
		goto ETQ4
		bcf INTCON,2
		bcf T0CON,7
		RETURN
;Rutina de servicio de interrupcion
RSI:
		call Cuenta

Cuenta:
		incf Rnv,0
		addlw 0x00
		daw
		movwf Rnv
		movff Rnv,PORTD
		bcf INTCON,1
		retfie
;******************************************************************************
;End of program
	END
