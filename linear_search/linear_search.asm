; =====================================================================================
; linear_search.asm - hand-compiled from linear_search.c
;
; Syntax : OP rA, rB  (rA = inst[3:0] destination, rB = inst[7:4] source)
; Regs   : only r0..r7 are used (r8..r15 alias r0..r7 while SEG = 0)
;
; linear_search calling convention
;   in  : r1 = base address, r2 = n, r3 = key
;   out : r0 = index, or 0xFFFF if not found
;   uses: r5 (scratch); r1..r4 preserved
; =====================================================================================

; ---------------------------------------------------------------- main
0x000  F401 1000   main:      LD     r1, #0x1000      ; r1 = ARRAY
0x002  F402 0008              LD     r2, #8           ; r2 = N
0x004  F404 1010              LD     r4, #0x1010      ; r4 = &KEY[0]
0x006  F043                   MRD    r3, [r4]         ; r3 = KEY[0]
0x007  D020                   CALL   linear_search    ; r0 = linear_search(r1, r2, r3)
0x008  F404 1020              LD     r4, #0x1020      ; r4 = &RESULT[0]
0x00A  F204                   MWR    [r4], r0         ; RESULT[0] = r0
0x00B  F404 1011              LD     r4, #0x1011      ; r4 = &KEY[1]
0x00D  F043                   MRD    r3, [r4]         ; r3 = KEY[1]
0x00E  D020                   CALL   linear_search
0x00F  F404 1021              LD     r4, #0x1021      ; r4 = &RESULT[1]
0x011  F204                   MWR    [r4], r0         ; RESULT[1] = r0
0x012  F800                   HLT                     ; for (;;);

; ---------------------------------------------------------------- linear_search
0x020  F400 0000   linear_search:
                              LD     r0, #0           ; i = 0
0x022  0005        loop:      MOV    r5, r0           ; r5 = i
0x023  0B25                   SUB    r5, r2           ; r5 = i - n      (Z = (i == n))
0x024  F605                   CND.Z                   ; skip next unless Z
0x025  C02E                   JMP    not_found        ; i == n -> not found
0x026  0015                   MOV    r5, r1           ; r5 = a
0x027  0805                   ADD    r5, r0           ; r5 = &a[i]
0x028  F055                   MRD    r5, [r5]         ; r5 = a[i]
0x029  0B35                   SUB    r5, r3           ; r5 = a[i] - key (Z = (a[i] == key))
0x02A  F605                   CND.Z                   ; skip next unless Z
0x02B  C030                   JMP    found            ; match -> return i
0x02C  0100                   INC    r0, r0           ; i++
0x02D  C022                   JMP    loop
0x02E  F400 FFFF   not_found: LD     r0, #0xFFFF      ; return -1
0x030  FA00        found:     RET

; ---------------------------------------------------------------- interrupt service routine
0x700  FB00        isr:       RETI                    ; uses no registers, flags restored by RETI

; ---------------------------------------------------------------- data (external memory only)
0x1000 0012 0034 0056 0078 009A 00BC 00DE 00F0        ; ARRAY[0..7]
0x1010 009A 1234                                      ; KEY[0] (present, index 4), KEY[1] (absent)
0x1020 DEAD DEAD                                      ; RESULT[0..1] -> expected 0004, FFFF
