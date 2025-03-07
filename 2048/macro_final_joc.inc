afiseaza_mesaj_final MACRO joc_castigat
local bucla_patrat1, you_won, game_over, top_scores, next
;fundal
    mov dword ptr[ebp+arg2], 1
	mov dword ptr[ebp+arg3], 1
    mov ecx, button_size 
 bucla_patrat1:
    push ecx
	linie_orizontala [ebp+arg2], [ebp+arg3], button_size, 0h
	add dword ptr [ebp+arg2], area_width
	pop ecx
    loop bucla_patrat1
	   

	;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;EDIT ADAUGAT
	cmp top_3_dupa_finalizare, 1
	jne next
	calculam_top_3
	next:
	;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	
;mesaje
you_won:
    mov ecx, 1
    cmp joc_castigat, ecx
	jne game_over
	make_text_macro 'Y', area, 157, 109
	make_text_macro 'O', area, 167, 109
	make_text_macro 'U', area, 177, 109
	make_text_macro ' ', area, 187, 109
	make_text_macro 'W', area, 197, 109
	make_text_macro 'O', area, 207, 109
	make_text_macro 'N', area, 217, 109
	jmp top_scores
	
game_over:
	make_text_macro 'G', area, 147, 109
	make_text_macro 'A', area, 157, 109
	make_text_macro 'M', area, 167, 109
	make_text_macro 'E', area, 177, 109
	make_text_macro ' ', area, 187, 109
	make_text_macro 'O', area, 197, 109
	make_text_macro 'V', area, 207, 109
	make_text_macro 'E', area, 217, 109
	make_text_macro 'R', area, 227, 109
	jmp top_scores
	
top_scores:
    ;loc 1
    make_text_macro '1', area, 100, 200
	make_text_macro 'S', area, 110, 200
	make_text_macro 'T', area, 120, 200
	make_text_macro ' ', area, 130, 200
    ;loc 2
	make_text_macro '2', area, 100, 230
	make_text_macro 'N', area, 110, 230
	make_text_macro 'D', area, 120, 230
	make_text_macro ' ', area, 130, 230
	;loc 3
	make_text_macro '3', area, 100, 260
	make_text_macro 'R', area, 110, 260
	make_text_macro 'D', area, 120, 260
	make_text_macro ' ', area, 130, 260 

;your score
	make_text_macro 'Y', area, 30, 290
	make_text_macro 'O', area, 40, 290
	make_text_macro 'U', area, 50, 290
	make_text_macro 'R', area, 60, 290 
	make_text_macro ' ', area, 70, 290
	make_text_macro 'S', area, 80, 290
	make_text_macro 'C', area, 90, 290
	make_text_macro 'O', area, 100, 290 
	make_text_macro 'R', area, 110, 290
	make_text_macro 'E', area, 120, 290
	make_text_macro ' ', area, 130, 290 

	
	mov ebx, 10
	mov eax, scor
	
	make_text_macro ' ', area, 250, 290
	
	;cifra unitatilor
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 240, 290
	
	;cifra zecilor
	mov edx, 0  
	div ebx
	add edx, '0'
	make_text_macro edx, area, 230, 290
	
	;cifra sutelor
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 220, 290
	
	;cifra miilor
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 210, 290
	
	;cifra zecilor de mii
	
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 200, 290
	
	;cifra sutelor de mii
	
	mov edx, 0
	div ebx
	add edx, '0'  
	make_text_macro edx, area, 190, 290
	
	;cifra milioanelor
	
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 180, 290
	
	;cifra zecilor de milioane
	
	mov edx, 0
	div ebx
	add edx, '0' 
	make_text_macro edx, area, 170, 290
	
	make_text_macro ' ', area, 160, 290

	
	;top2
		mov ebx, 10
	mov eax, max3
	
	make_text_macro ' ', area, 250, 260
	
	;cifra unitatilor
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 240, 260
	
	;cifra zecilor
	mov edx, 0  
	div ebx
	add edx, '0'
	make_text_macro edx, area, 230, 260
	
	;cifra sutelor
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 220, 260
	
	;cifra miilor
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 210, 260
	
	;cifra zecilor de mii
	
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 200, 260
	
	;cifra sutelor de mii
	
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 190, 260
	
	;cifra milioanelor
	
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 180, 260
	
	;cifra zecilor de milioane
	
	mov edx, 0
	div ebx
	add edx, '0' 
	make_text_macro edx, area, 170, 260
	
	make_text_macro ' ', area, 160, 260
	
	
	;;;;;;;;;;;;;;;;;;;;;;
		mov ebx, 10
	mov eax, max2
	
	make_text_macro ' ', area, 250, 230
	
	;cifra unitatilor
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 240, 230
	
	;cifra zecilor
	mov edx, 0  
	div ebx
	add edx, '0'
	make_text_macro edx, area, 230, 230
	
	;cifra sutelor
	mov edx, 0
	div ebx
	add edx, '0'  
	make_text_macro edx, area, 220, 230
	
	;cifra miilor
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 210, 230
	
	;cifra zecilor de mii
	
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 200, 230
	
	;cifra sutelor de mii
	
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 190, 230
	
	;cifra milioanelor
	
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 180, 230
	
	;cifra zecilor de milioane
	
	mov edx, 0
	div ebx
	add edx, '0'  
	make_text_macro edx, area, 170, 230
	
	make_text_macro ' ', area, 160, 230
	
	;;;;;;;;;;;;;;;
		mov ebx, 10
	mov eax, max1
	
	make_text_macro ' ', area, 250, 200
	
	;cifra unitatilor
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 240, 200
	
	;cifra zecilor
	mov edx, 0  
	div ebx
	add edx, '0'
	make_text_macro edx, area, 230, 200
	
	;cifra sutelor
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 220, 200
	
	;cifra miilor
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 210, 200
	
	;cifra zecilor de mii
	
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 200, 200
	
	;cifra sutelor de mii
	
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 190, 200

	;cifra milioanelor
	
	mov edx, 0
	div ebx
	add edx, '0'
	make_text_macro edx, area, 180, 200
	
	;cifra zecilor de milioane
	
	mov edx, 0
	div ebx
	add edx, '0' 
	make_text_macro edx, area, 170, 200
	
	make_text_macro ' ', area, 160, 200
ENDM

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
 

verifica_daca_jocul_a_fost_castigat MACRO
local castigat, pierdut, final

    cmp valoare_buton_00, 2048
	je castigat
	cmp valoare_buton_01, 2048
	je castigat
	cmp valoare_buton_02, 2048
	je castigat
	cmp valoare_buton_03, 2048
	je castigat
	
	cmp valoare_buton_10, 2048
	je castigat
	cmp valoare_buton_11, 2048
	je castigat
	cmp valoare_buton_12, 2048
	je castigat
    cmp valoare_buton_13, 2048
	je castigat
	
	cmp valoare_buton_20, 2048
	je castigat
	cmp valoare_buton_21, 2048
	je castigat
	cmp valoare_buton_22, 2048
	je castigat
	cmp valoare_buton_23, 2048
	je castigat
	
	cmp valoare_buton_30, 2048
	je castigat
	cmp valoare_buton_31, 2048
	je castigat
	cmp valoare_buton_32, 2048
	je castigat
	cmp valoare_buton_33, 2048
	je castigat
	
	mov ebx, 0
	jmp final
castigat:
    mov ebx, 1
	
final:
    
ENDM