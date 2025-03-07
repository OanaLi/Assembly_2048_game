afiseaza_top3_scoruri MACRO
local bucla_patrat1

;fundal
    mov dword ptr[ebp+arg2], 0
	mov dword ptr[ebp+arg3], 0
    mov ecx, button_size 
 bucla_patrat1:
    push ecx
	linie_orizontala [ebp+arg2], [ebp+arg3], button_size, 0h
	add dword ptr [ebp+arg2], area_width
	pop ecx
    loop bucla_patrat1
	
top_scores:
	make_text_macro 'T', area, 142, 60
	make_text_macro 'O', area, 152, 60
	make_text_macro 'P', area, 162, 60
	make_text_macro ' ', area, 172, 60
	make_text_macro 'S', area, 182, 60 
	make_text_macro 'C', area, 192, 60
	make_text_macro 'O', area, 202, 60
	make_text_macro 'R', area, 212, 60
	make_text_macro 'E', area, 222, 60
	make_text_macro 'S', area, 232, 60
    ;loc 1
    make_text_macro '1', area, 100, 100
	make_text_macro 'S', area, 110, 100
	make_text_macro 'T', area, 120, 100
	make_text_macro ' ', area, 130, 100
    ;loc 2
	make_text_macro '2', area, 100, 130
	make_text_macro 'N', area, 110, 130
	make_text_macro 'D', area, 120, 130
	make_text_macro ' ', area, 130, 130
	;loc 3
	make_text_macro '3', area, 100, 160
	make_text_macro 'R', area, 110, 160
	make_text_macro 'D', area, 120, 160
	make_text_macro ' ', area, 130, 160 
   

	
	mov ebx, 10
	mov eax, max1
	
	make_text_macro ' ', area, 250, 100
	
	;cifra unitatilor
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 240, 100
	
	;cifra zecilor
	mov edx, 0  
	div ebx
	add edx, '0'
	make_text_macro edx, area, 230, 100
	
	;cifra sutelor
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 220, 100
	
	;cifra miilor
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 210, 100
	
	;cifra zecilor de mii
	
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 200, 100
	
	;cifra sutelor de mii
	
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 190, 100
	
	;cifra milioanelor
	
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 180, 100
	
	;cifra zecilor de milioane
	
	mov edx, 0
	div ebx
	add edx, '0' 
	make_text_macro edx, area, 170, 100
	
	make_text_macro ' ', area, 160, 100
	
	
	
	;top2
	mov ebx, 10
	mov eax, max2
	
	make_text_macro ' ', area, 250, 130
	
	;cifra unitatilor
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 240, 130
	
	;cifra zecilor
	mov edx, 0  
	div ebx
	add edx, '0'
	make_text_macro edx, area, 230, 130
	
	;cifra sutelor
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 220, 130
	
	;cifra miilor
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 210, 130
	
	;cifra zecilor de mii
	
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 200, 130
	
	;cifra sutelor de mii
	
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 190, 130
	
	;cifra milioanelor
	
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 180, 130
	
	;cifra zecilor de milioane
	
	mov edx, 0
	div ebx
	add edx, '0' 
	make_text_macro edx, area, 170, 130
	
	make_text_macro ' ', area, 160, 130
	
	
	;top3
	mov ebx, 10
	mov eax, max3 
	
	make_text_macro ' ', area, 250, 160
	
	;cifra unitatilor
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 240, 160
	
	;cifra zecilor
	mov edx, 0  
	div ebx
	add edx, '0'
	make_text_macro edx, area, 230, 160
	
	;cifra sutelor
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 220, 160
	
	;cifra miilor
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 210, 160
	
	;cifra zecilor de mii
	
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 200, 160
	
	;cifra sutelor de mii
	
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 190, 160
	
	;cifra milioanelor
	
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 180, 160
	
	;cifra zecilor de milioane
	
	mov edx, 0
	div ebx
	add edx, '0' 
	make_text_macro edx, area, 170, 160
	
	make_text_macro ' ', area, 160, 160

ENDM



afisare_joc MACRO
local bucla_patrat1

;fundal
    mov dword ptr[ebp+arg2], 1
	mov dword ptr[ebp+arg3], 1
    mov ecx, button_size 
 bucla_patrat1:
    push ecx
	linie_orizontala [ebp+arg2], [ebp+arg3], button_size, 0D6CDC4h
	add dword ptr [ebp+arg2], area_width
	pop ecx
    loop bucla_patrat1
	
	
;afisare patrate
    afiseaza_patrate

;cadran joc   
	linie_orizontala 0, 0, button_size, 0 
	linie_orizontala 0, button_size/4, button_size, 0
	 
	linie_orizontala 0, button_size/2, button_size, 0
	linie_orizontala 0,  button_size/2 +  button_size/4, button_size, 0
	linie_orizontala 0, button_size, button_size, 0 
	
	linie_verticala  0, 0, button_size, 0
	linie_verticala button_size/4, 0, button_size, 0
	linie_verticala button_size/2, 0, button_size, 0 
	linie_verticala button_size/2 +  button_size/4, 0, button_size, 0
	linie_verticala button_size,0, button_size, 0
	
	
;scor
	make_text_macro 'S', area, 450, 35
	make_text_macro 'C', area, 460, 35 
	make_text_macro 'O', area, 470, 35 
	make_text_macro 'R', area, 480, 35
	make_text_macro 'E', area, 490, 35
 
    linie_orizontala 450, 60, 100, 0
	linie_verticala 450, 60,  40, 0
	linie_orizontala 450, 100, 100, 0 
	linie_verticala 550, 60, 40, 0
	
	
;se afiseaza scorul

	mov ebx, 10
	mov eax, scor
	
	;cifra unitatilor
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 530, 70
	
	;cifra zecilor
	mov edx, 0  
	div ebx
	add edx, '0'
	make_text_macro edx, area, 520, 70
	
	;cifra sutelor
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 510, 70
	
	;cifra miilor
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 500, 70
	
	;cifra zecilor de mii
	
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 490, 70
	
	;cifra sutelor de mii
	
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 480, 70
	
	;cifra milioanelor
	
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 470, 70
	
	;cifra zecilor de milioane
	
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 460, 70
	
ENDM