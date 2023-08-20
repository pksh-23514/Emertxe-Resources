;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 2.8.0 #5117 (Jun  2 2008) (UNIX)
; This file was generated Mon Aug 17 20:29:31 2009
;--------------------------------------------------------
; PIC16 port for the Microchip 16-bit core micros
;--------------------------------------------------------

	.ident "SDCC version 2.8.0 #5117 [pic16 port]"
	.file	"USART_SDCC_18F452.c"
	list	p=18f452

	radix dec

;--------------------------------------------------------
; public variables in this module
;--------------------------------------------------------
	global _putch
	global _getch
	global _getche
	global _puts
	global _main

;--------------------------------------------------------
; extern variables in this module
;--------------------------------------------------------
	extern __gptrget1
	extern _PORTAbits
	extern _PORTBbits
	extern _PORTCbits
	extern _PORTDbits
	extern _PORTEbits
	extern _LATAbits
	extern _LATBbits
	extern _LATCbits
	extern _LATDbits
	extern _LATEbits
	extern _TRISAbits
	extern _TRISBbits
	extern _TRISCbits
	extern _TRISDbits
	extern _TRISEbits
	extern _PIE1bits
	extern _PIR1bits
	extern _IPR1bits
	extern _PIE2bits
	extern _PIR2bits
	extern _IPR2bits
	extern _EECON1bits
	extern _RCSTAbits
	extern _TXSTAbits
	extern _T3CONbits
	extern _CCP2CONbits
	extern _CCP1CONbits
	extern _ADCON1bits
	extern _ADCON0bits
	extern _SSPCON2bits
	extern _SSPCON1bits
	extern _SSPSTATbits
	extern _T2CONbits
	extern _T1CONbits
	extern _RCONbits
	extern _WDTCONbits
	extern _LVDCONbits
	extern _OSCCONbits
	extern _T0CONbits
	extern _STATUSbits
	extern _INTCON3bits
	extern _INTCON2bits
	extern _INTCONbits
	extern _STKPTRbits
	extern _PORTA
	extern _PORTB
	extern _PORTC
	extern _PORTD
	extern _PORTE
	extern _LATA
	extern _LATB
	extern _LATC
	extern _LATD
	extern _LATE
	extern _TRISA
	extern _TRISB
	extern _TRISC
	extern _TRISD
	extern _TRISE
	extern _PIE1
	extern _PIR1
	extern _IPR1
	extern _PIE2
	extern _PIR2
	extern _IPR2
	extern _EECON1
	extern _EECON2
	extern _EEDATA
	extern _EEADR
	extern _RCSTA
	extern _TXSTA
	extern _TXREG
	extern _RCREG
	extern _SPBRG
	extern _T3CON
	extern _TMR3L
	extern _TMR3H
	extern _CCP2CON
	extern _CCPR2L
	extern _CCPR2H
	extern _CCP1CON
	extern _CCPR1L
	extern _CCPR1H
	extern _ADCON1
	extern _ADCON0
	extern _ADRESL
	extern _ADRESH
	extern _SSPCON2
	extern _SSPCON1
	extern _SSPSTAT
	extern _SSPADD
	extern _SSPBUF
	extern _T2CON
	extern _PR2
	extern _TMR2
	extern _T1CON
	extern _TMR1L
	extern _TMR1H
	extern _RCON
	extern _WDTCON
	extern _LVDCON
	extern _OSCCON
	extern _T0CON
	extern _TMR0L
	extern _TMR0H
	extern _STATUS
	extern _FSR2L
	extern _FSR2H
	extern _PLUSW2
	extern _PREINC2
	extern _POSTDEC2
	extern _POSTINC2
	extern _INDF2
	extern _BSR
	extern _FSR1L
	extern _FSR1H
	extern _PLUSW1
	extern _PREINC1
	extern _POSTDEC1
	extern _POSTINC1
	extern _INDF1
	extern _WREG
	extern _FSR0L
	extern _FSR0H
	extern _PLUSW0
	extern _PREINC0
	extern _POSTDEC0
	extern _POSTINC0
	extern _INDF0
	extern _INTCON3
	extern _INTCON2
	extern _INTCON
	extern _PRODL
	extern _PRODH
	extern _TABLAT
	extern _TBLPTRL
	extern _TBLPTRH
	extern _TBLPTRU
	extern _PCL
	extern _PCLATH
	extern _PCLATU
	extern _STKPTR
	extern _TOSL
	extern _TOSH
	extern _TOSU
;--------------------------------------------------------
;	Equates to used internal registers
;--------------------------------------------------------
STATUS	equ	0xfd8
WREG	equ	0xfe8
FSR0L	equ	0xfe9
FSR1L	equ	0xfe1
FSR2L	equ	0xfd9
POSTDEC1	equ	0xfe5
PREINC1	equ	0xfe4
PLUSW2	equ	0xfdb
PRODL	equ	0xff3


; Internal registers
.registers	udata_ovr	0x0000
r0x00	res	1
r0x01	res	1
r0x02	res	1
r0x03	res	1
r0x04	res	1
r0x05	res	1
r0x06	res	1

;--------------------------------------------------------
; interrupt vector 
;--------------------------------------------------------

;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
; I code from now on!
; ; Starting pCode block
S_USART_SDCC_18F452__main	code
_main:
	.line	8; USART_SDCC_18F452.c	init_comms();
	BSF	_TRISCbits, 7
	BSF	_TRISCbits, 6
	MOVLW	0x81
	MOVWF	_SPBRG
	MOVLW	0x90
	MOVWF	_RCSTA
	MOVLW	0x24
	MOVWF	_TXSTA
	.line	9; USART_SDCC_18F452.c	puts("\nThis program was writed using SDCC compiler");
	MOVLW	UPPER(__str_0)
	MOVWF	POSTDEC1
	MOVLW	HIGH(__str_0)
	MOVWF	POSTDEC1
	MOVLW	LOW(__str_0)
	MOVWF	POSTDEC1
	CALL	_puts
	MOVLW	0x03
	ADDWF	FSR1L, F
	.line	10; USART_SDCC_18F452.c	puts("\rPress a key and I will echo it back:\n");
	MOVLW	UPPER(__str_1)
	MOVWF	POSTDEC1
	MOVLW	HIGH(__str_1)
	MOVWF	POSTDEC1
	MOVLW	LOW(__str_1)
	MOVWF	POSTDEC1
	CALL	_puts
	MOVLW	0x03
	ADDWF	FSR1L, F
_00128_DS_:
	.line	13; USART_SDCC_18F452.c	input = getch();	// read a response from the user
	CALL	_getch
	MOVWF	r0x00
	.line	14; USART_SDCC_18F452.c	puts("\rI detected [");
	MOVLW	UPPER(__str_2)
	MOVWF	POSTDEC1
	MOVLW	HIGH(__str_2)
	MOVWF	POSTDEC1
	MOVLW	LOW(__str_2)
	MOVWF	POSTDEC1
	CALL	_puts
	MOVLW	0x03
	ADDWF	FSR1L, F
	.line	15; USART_SDCC_18F452.c	putch(input);
	MOVF	r0x00, W
	MOVWF	POSTDEC1
	CALL	_putch
	INCF	FSR1L, F
	.line	16; USART_SDCC_18F452.c	putch(']');
	MOVLW	0x5d
	MOVWF	POSTDEC1
	CALL	_putch
	INCF	FSR1L, F
	GOTO	_00128_DS_
	RETURN	

; ; Starting pCode block
S_USART_SDCC_18F452__puts	code
_puts:
	.line	60; usart.h	puts(unsigned char *str)
	MOVFF	FSR2L, POSTDEC1
	MOVFF	FSR1L, FSR2L
	MOVFF	r0x00, POSTDEC1
	MOVFF	r0x01, POSTDEC1
	MOVFF	r0x02, POSTDEC1
	MOVFF	r0x03, POSTDEC1
	MOVFF	r0x04, POSTDEC1
	MOVFF	r0x05, POSTDEC1
	MOVFF	r0x06, POSTDEC1
	MOVLW	0x02
	MOVFF	PLUSW2, r0x00
	MOVLW	0x03
	MOVFF	PLUSW2, r0x01
	MOVLW	0x04
	MOVFF	PLUSW2, r0x02
	.line	64; usart.h	while (str[i]!=0) {
	CLRF	r0x03
_00119_DS_:
	MOVF	r0x03, W
	ADDWF	r0x00, W
	MOVWF	r0x04
	CLRF	WREG
	ADDWFC	r0x01, W
	MOVWF	r0x05
	CLRF	WREG
	ADDWFC	r0x02, W
	MOVWF	r0x06
	MOVFF	r0x04, FSR0L
	MOVFF	r0x05, PRODL
	MOVF	r0x06, W
	CALL	__gptrget1
	MOVWF	r0x04
	MOVF	r0x04, W
	BTFSC	STATUS, 2
	GOTO	_00122_DS_
	.line	65; usart.h	putch(str[i]);
	MOVF	r0x04, W
	MOVWF	POSTDEC1
	CALL	_putch
	INCF	FSR1L, F
	.line	66; usart.h	i++;
	INCF	r0x03, F
	GOTO	_00119_DS_
_00122_DS_:
	MOVFF	PREINC1, r0x06
	MOVFF	PREINC1, r0x05
	MOVFF	PREINC1, r0x04
	MOVFF	PREINC1, r0x03
	MOVFF	PREINC1, r0x02
	MOVFF	PREINC1, r0x01
	MOVFF	PREINC1, r0x00
	MOVFF	PREINC1, FSR2L
	RETURN	

; ; Starting pCode block
S_USART_SDCC_18F452__getche	code
_getche:
	.line	52; usart.h	getche(void)
	MOVFF	FSR2L, POSTDEC1
	MOVFF	FSR1L, FSR2L
	MOVFF	r0x00, POSTDEC1
	MOVFF	r0x01, POSTDEC1
	.line	55; usart.h	putch(c = getch());
	CALL	_getch
	MOVWF	r0x00
	MOVFF	r0x00, r0x01
	MOVF	r0x00, W
	MOVWF	POSTDEC1
	CALL	_putch
	INCF	FSR1L, F
	.line	56; usart.h	return c;
	MOVF	r0x01, W
	MOVFF	PREINC1, r0x01
	MOVFF	PREINC1, r0x00
	MOVFF	PREINC1, FSR2L
	RETURN	

; ; Starting pCode block
S_USART_SDCC_18F452__getch	code
_getch:
	.line	44; usart.h	getch() {
	MOVFF	FSR2L, POSTDEC1
	MOVFF	FSR1L, FSR2L
_00110_DS_:
	.line	46; usart.h	while(!PIR1bits.RCIF)	/* set when register is not empty */
	BTFSS	_PIR1bits, 5
	GOTO	_00110_DS_
	.line	48; usart.h	return RCREG;	
	MOVF	_RCREG, W
	MOVFF	PREINC1, FSR2L
	RETURN	

; ; Starting pCode block
S_USART_SDCC_18F452__putch	code
_putch:
	.line	35; usart.h	putch(unsigned char byte) 
	MOVFF	FSR2L, POSTDEC1
	MOVFF	FSR1L, FSR2L
	MOVFF	r0x00, POSTDEC1
	MOVLW	0x02
	MOVFF	PLUSW2, r0x00
_00105_DS_:
	.line	38; usart.h	while(!PIR1bits.TXIF)	/* set when register is empty */
	BTFSS	_PIR1bits, 4
	GOTO	_00105_DS_
	.line	40; usart.h	TXREG = byte;
	MOVFF	r0x00, _TXREG
	MOVFF	PREINC1, r0x00
	MOVFF	PREINC1, FSR2L
	RETURN	

; ; Starting pCode block
__str_0:
	DB	0x0a, 0x54, 0x68, 0x69, 0x73, 0x20, 0x70, 0x72, 0x6f, 0x67, 0x72, 0x61
	DB	0x6d, 0x20, 0x77, 0x61, 0x73, 0x20, 0x77, 0x72, 0x69, 0x74, 0x65, 0x64
	DB	0x20, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x53, 0x44, 0x43, 0x43, 0x20
	DB	0x63, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x00
; ; Starting pCode block
__str_1:
	DB	0x0d, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x61, 0x20, 0x6b, 0x65, 0x79
	DB	0x20, 0x61, 0x6e, 0x64, 0x20, 0x49, 0x20, 0x77, 0x69, 0x6c, 0x6c, 0x20
	DB	0x65, 0x63, 0x68, 0x6f, 0x20, 0x69, 0x74, 0x20, 0x62, 0x61, 0x63, 0x6b
	DB	0x3a, 0x0a, 0x00
; ; Starting pCode block
__str_2:
	DB	0x0d, 0x49, 0x20, 0x64, 0x65, 0x74, 0x65, 0x63, 0x74, 0x65, 0x64, 0x20
	DB	0x5b, 0x00


; Statistics:
; code size:	  388 (0x0184) bytes ( 0.30%)
;           	  194 (0x00c2) words
; udata size:	    0 (0x0000) bytes ( 0.00%)
; access size:	    7 (0x0007) bytes


	end
