

; DOS2 compile options




DOS2	EQU	1		; DOS2 flag for diskdriver
USESBF	EQU	0		; use buffer for screen output
KANJI	EQU	1		; KANJI BASIC in DOS2 bank 3
DOS1	EQU	0		; DOS1 in DOS2 bank 3
HSH	EQU	0		; HSH style 0: no DOS2 skip key, 1: DOS2 skip key (SELECT or CODE+GRAPH), 2: DOS2 skip key (INSERT)
BNKTRL	EQU	1		; translate DOS2 bank number


BNKADR	EQU	04104H

BNKCHG	MACRO

	LD	(BNKADR),A

	ENDM

	IF BNKTRL EQ 1

MBNKTL	MACRO

	DEFB	00000001B	; bank 0
	DEFB	10000001B	; bank 1
	DEFB	01000000B	; bank 2
	DEFB	11000000B	; bank 3
	DEFB	00100000B	; bank 4
	DEFB	10100000B	; bank 5
	DEFB	01100000B	; bank 6
	DEFB	11100000B	; bank 7

	ENDM

	ENDIF