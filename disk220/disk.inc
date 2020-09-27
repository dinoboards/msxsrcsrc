

; DOS2 compile options


DOS201	EQU	1		; include DiskBasic 2.01 fixes
DOS2	EQU	1		; DOS2 flag for diskdriver
USESBF	EQU	0		; use buffer for screen output
MSXJE	EQU	1		; KANJI BASIC in DOS2 bank 3
SLTEXP	EQU	0		; KANJI BASIC also in secundairy slot 2
NUMSEG	EQU	0		; memory mapper of NUMSEG pages in secundairy slot 1
DOS1	EQU	0		; DOS1 in DOS2 bank 3
HSH	EQU	0		; HSH style 0: no DOS2 skip key, 1: DOS2 skip key (SELECT or CODE+GRAPH), 2: DOS2 skip key (INSERT)


BNKADR	EQU	07FFEH
BNKTRL	EQU	0		; translate bank numbers

MBNKTL	MACRO

	DEFB	001H,081H,040H,0C0H,020H,0A0H,060H,0E0H

	ENDM

BNKCHG	MACRO

	LD	(BNKADR),A

	ENDM
