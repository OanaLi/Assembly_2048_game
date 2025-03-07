apare_o_valoare_intrun_patrat_random macro 
local inceput, final, jocul_se_incheie, printare, sari0, sari1, patrat00,  patrat01, patrat02, patrat03, patrat10, patrat11, patrat12, patrat13, patrat20, patrat21, patrat22, patrat23, patrat30, patrat31, patrat32, patrat33
    

	;prima valoare random
	rdtsc 
	shr ah,  6
	cmp ah, 2
	jl sari0
	mov val, 2
	jmp sari1
sari0:
	mov val, 4 
	
sari1:
    mov ebx, val
	
	
	;primul patrat ales random 
inceput:
	rdtsc 
	shr ah,  4
	
	cmp ah, 0
	jne patrat01
	cmp valoare_buton_00, 0
	jne inceput
	mov valoare_buton_00, ebx
	jmp printare
patrat01:
    cmp ah, 1
	jne patrat02
	cmp valoare_buton_01, 0
	jne inceput
	mov valoare_buton_01, ebx
	jmp printare
patrat02:
    cmp ah, 2
	jne patrat03
	cmp valoare_buton_02, 0
	jne inceput
	mov valoare_buton_02, ebx
	jmp printare
patrat03:
    cmp ah, 3
	jne patrat10
	cmp valoare_buton_03, 0
	jne inceput
	mov valoare_buton_03, ebx
	jmp printare  
patrat10:
    cmp ah, 4
	jne patrat11
	cmp valoare_buton_10, 0
	jne inceput
	mov valoare_buton_10, ebx
	jmp printare
patrat11:
    cmp ah, 5
	jne patrat12
	cmp valoare_buton_11, 0
	jne inceput
	mov valoare_buton_11, ebx
	jmp printare
patrat12:
    cmp ah, 6
	jne patrat13
	cmp valoare_buton_12, 0
	jne inceput
	mov valoare_buton_12, ebx
	jmp printare
patrat13:
    cmp ah, 7
	jne patrat20
	cmp valoare_buton_13, 0
	jne inceput
	mov valoare_buton_13, ebx
	jmp printare
patrat20:
    cmp ah, 8
	jne patrat21
	cmp valoare_buton_20, 0
	jne inceput
	mov valoare_buton_20, ebx
	jmp printare
patrat21:
    cmp ah, 9
	jne patrat22
	cmp valoare_buton_21, 0
	jne inceput
	mov valoare_buton_21, ebx
	jmp printare
patrat22:
    cmp ah, 10
	jne patrat23
	cmp valoare_buton_22, 0
	jne inceput
	mov valoare_buton_22, ebx
	jmp printare
patrat23:
    cmp ah, 11
	jne patrat30
	cmp valoare_buton_23, 0
	jne inceput
	mov valoare_buton_23, ebx
	jmp printare
patrat30:
    cmp ah, 12
	jne patrat31
	cmp valoare_buton_30, 0
	jne inceput
	mov valoare_buton_30, ebx
	jmp printare
patrat31:
    cmp ah, 13
	jne patrat32
	cmp valoare_buton_31, 0
	jne inceput
	mov valoare_buton_31, ebx
	jmp printare
patrat32:
    cmp ah, 14
	jne patrat33
	cmp valoare_buton_32, 0
	jne inceput
	mov valoare_buton_32, ebx
	jmp printare
patrat33:
    cmp valoare_buton_33, 0
	jne inceput
	mov valoare_buton_33, ebx
    jmp printare
	

jocul_se_incheie:
    mov ebx, 0
	jmp final
printare:
    mov ebx, 1
final:
endm