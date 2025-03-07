calculeaza_indici_patrat macro x, y
local nu_linie_0, nu_linie_1, nu_linie_2, x_nu_e_valid, nu_coloana_0, nu_coloana_1,  nu_coloana_2, jos, coloana, nu_0, nu_1, nu_2, nu_3, nu_0_0, nu_0_1, nu_0_2, nu_0_3,  nu_1_0, nu_1_1, nu_1_2, nu_1_3, nu_2_0, nu_2_1, nu_2_2, nu_2_3, nu_3_0, nu_3_1, nu_3_2, nu_3_3, final
    cmp dword ptr x, 95
	jg nu_linie_0 
	;e la linia 0
	mov dword ptr x, 0
	jmp coloana
nu_linie_0:
	cmp dword ptr x, 191
	jg nu_linie_1
	;e la linia 1
	mov dword ptr x, 96
	jmp coloana
nu_linie_1:
	cmp dword ptr x, 287
	jg nu_linie_2
	;e la linia 2
	mov dword ptr x, 192
	jmp coloana
nu_linie_2:
	cmp dword ptr x, 383
	jg x_nu_e_valid
	;e la linia 3
	mov dword ptr x, 288
	jmp coloana
	
coloana:
	cmp dword ptr y, 95
	jg nu_coloana_0
	;e la linia 0
	mov dword ptr y, 0
	
	jmp jos
nu_coloana_0:
	cmp dword ptr y, 191
	jg nu_coloana_1
	;e la linia 1
	mov dword ptr y, 96
	jmp jos
nu_coloana_1:
	cmp dword ptr y, 287
	jg nu_coloana_2
	;e la linia 2
	mov dword ptr y, 192
	jmp jos
nu_coloana_2:
	cmp dword ptr y, 383
	jg x_nu_e_valid
	;e la linia 3
	mov dword ptr y, 288
	jmp jos
	
 
jos:
    mov eax, y
	mov ebx, x
	
    cmp dword ptr x, 0
    jne nu_0
        cmp dword ptr y, 0
        jne nu_0_0
		mov edx, valoare_buton_00
		jmp final
	nu_0_0:
        cmp dword ptr y, 96
		jne nu_0_1
		mov edx, valoare_buton_01
		jmp final
	nu_0_1:
		cmp dword ptr y, 192
        jne nu_0_2
		mov edx, valoare_buton_02
		jmp final
	nu_0_2:
        cmp dword ptr y, 288
		jne nu_0_3
		mov edx, valoare_buton_03
		jmp final
	nu_0_3:

nu_0:
    cmp dword ptr x, 96
    jne nu_1
        cmp dword ptr y, 0
        jne nu_1_0
		mov edx, valoare_buton_10
		jmp final
	nu_1_0:
        cmp dword ptr y, 96
		jne nu_1_1
		mov edx, valoare_buton_11
		jmp final
	nu_1_1:
		cmp dword ptr y, 192
        jne nu_1_2
		mov edx, valoare_buton_12
		jmp final
	nu_1_2:
        cmp dword ptr y, 288
		jne nu_1_3
		mov edx, valoare_buton_13
		jmp final
	nu_1_3:

nu_1:
    cmp dword ptr x, 192
    jne nu_2
        cmp dword ptr y, 0
        jne nu_2_0
		mov edx, valoare_buton_20
		jmp final
	nu_2_0:
        cmp dword ptr y, 96
		jne nu_2_1
		mov edx, valoare_buton_21
		jmp final
	nu_2_1:
		cmp dword ptr y, 192  
        jne nu_2_2
		mov edx, valoare_buton_22
		jmp final
	nu_2_2:
        cmp dword ptr y, 288
		jne nu_2_3
		mov edx, valoare_buton_23
		jmp final
	nu_2_3:

nu_2:
        cmp dword ptr x, 288
    jne final
        cmp dword ptr y, 0
        jne nu_3_0
		mov edx, valoare_buton_30
		jmp final
	nu_3_0:
        cmp dword ptr y, 96
		jne nu_3_1
		mov edx, valoare_buton_31
		jmp final
	nu_3_1:
		cmp dword ptr y, 192
        jne nu_3_2
		mov edx, valoare_buton_32
		jmp final
	nu_3_2:
        cmp dword ptr y, 288
		jne nu_3_3
		mov edx, valoare_buton_33
		jmp final
	nu_3_3:
	    jmp final

x_nu_e_valid: 
    mov eax, y
	mov ebx, x
	

final:

endm 