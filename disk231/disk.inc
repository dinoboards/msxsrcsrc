

; DOS2 compile options

; TURBOR
; 0 = do NOT include Turbo-R specfics
; 1 = include Turbo-R specfics
TURBOR	EQU	1		; create special MSX Turbo-R version

; ROMVER
; 0 = first ST version (2.30 fix level 0)
; 1 = second ST version (2.30 fix level 1)
; 2 = third ST version (2.30 fix level 2)
; 3 = GT version (2.31)
ROMVER	EQU	3

BNKADR	EQU 	06000H		; Bank switch address (non Turbo-R version)

USESBF	EQU	0		; use buffer for screen output

		IF TURBOR EQ 1

BNKCHG	MACRO
		LD	(07FF0H),A
		ENDM

		ELSE

BNKCHG	MACRO
		LD	(BNKADR),A
		ENDM

		ENDIF
