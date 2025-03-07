afiseaza_patrate MACRO
local bucla_patrat0, bucla_patrat1, bucla_patrat2, bucla_patrat3, bucla_patrat4, bucla_patrat5, bucla_patrat6, bucla_patrat7, bucla_patrat8, bucla_patrat9, bucla_patrat10, bucla_patrat11, bucla_patrat12, bucla_patrat13, bucla_patrat14, bucla_patrat15
local final, patrat00,  patrat01, patrat02, patrat03, patrat10, patrat11, patrat12, patrat13, patrat20, patrat21, patrat22, patrat23, patrat30, patrat31, patrat32, patrat33

patrat00:
    mov x, 0
	mov y, 1
    calculeaza_indici_patrat x,y
    mov valoare, edx
	
	cmp valoare, 0
	je patrat01
	
	make_image_macro area, x, y, 0, valoare  
	add x, 48
	make_image_macro area, x, y, 1, valoare
	
	
	
patrat01:
    mov x, 0
	mov y, 96
	calculeaza_indici_patrat x,y
	mov valoare, edx
	
	cmp valoare, 0
	je patrat02
	
	make_image_macro area, x, y, 0, valoare  
	add x, 48
	make_image_macro area, x, y, 1, valoare

	
patrat02:
    mov x, 0
	mov y, 192
	calculeaza_indici_patrat x, y
	mov valoare, edx  
	
	cmp valoare, 0
	je patrat03
	
	make_image_macro area, x, y, 0, valoare  
	add x, 48
	make_image_macro area, x, y, 1, valoare
	

	
patrat03:
    mov x, 0
	mov y, 288
	calculeaza_indici_patrat x, y
	mov valoare, edx 
	
	cmp valoare, 0
	je patrat10
	
	make_image_macro area, x, y, 0, valoare  
	add x, 48
	make_image_macro area, x, y, 1, valoare


patrat10:
    mov x, 96
	mov y, 0
	calculeaza_indici_patrat x, y
	mov valoare, edx 
	
	cmp valoare, 0
	je patrat11
	
	make_image_macro area, x, y, 0, valoare  
	add x, 48
	make_image_macro area, x, y, 1, valoare
	
	
patrat11:
    mov x, 96
	mov y, 96
	calculeaza_indici_patrat x, y
	mov valoare, edx 
	
	cmp valoare, 0
	je patrat12
	
	make_image_macro area, x, y, 0, valoare  
	add x, 48
	make_image_macro area, x, y, 1, valoare
	
	
patrat12:
    mov x, 96
	mov y, 192
	calculeaza_indici_patrat x, y
	mov valoare, edx 

	cmp valoare, 0
	je patrat13
	
	make_image_macro area, x, y, 0, valoare  
	add x, 48
	make_image_macro area, x, y, 1, valoare

	
patrat13:
    mov x, 96
	mov y, 288
	calculeaza_indici_patrat x, y
	mov valoare, edx 
	
	cmp valoare, 0
	je patrat20
	
	make_image_macro area, x, y, 0, valoare  
	add x, 48
	make_image_macro area, x, y, 1, valoare
	
	
patrat20:
    mov x, 192
	mov y, 0
	calculeaza_indici_patrat x, y
	mov valoare, edx 
	
	cmp valoare, 0
	je patrat21
	
	make_image_macro area, x, y, 0, valoare  
	add x, 48
	make_image_macro area, x, y, 1, valoare
	
	
	
patrat21:
    mov x, 192
	mov y, 96
	calculeaza_indici_patrat x, y
	mov valoare, edx 
	
	cmp valoare, 0
	je patrat22
	
	make_image_macro area, x, y, 0, valoare  
	add x, 48
	make_image_macro area, x, y, 1, valoare
	
	
patrat22:
    mov x, 192
	mov y, 192
	calculeaza_indici_patrat x, y
	mov valoare, edx 
	
	cmp valoare, 0
	je patrat23
	
	make_image_macro area, x, y, 0, valoare  
	add x, 48
	make_image_macro area, x, y, 1, valoare
	
	
patrat23:
    mov x, 192
	mov y, 288
	calculeaza_indici_patrat x, y
	mov valoare, edx  

	cmp valoare, 0
	je patrat30
	
	make_image_macro area, x, y, 0, valoare  
	add x, 48
	make_image_macro area, x, y, 1, valoare
	
	
	
patrat30:
    mov x, 288
	mov y, 0
	calculeaza_indici_patrat x, y
	mov valoare, edx 
	
	cmp valoare, 0
	je patrat31
	
	make_image_macro area, x, y, 0, valoare  
	add x, 48
	make_image_macro area, x, y, 1, valoare
	
	
patrat31:
    mov x, 288
	mov y, 96
	calculeaza_indici_patrat x, y
	mov valoare, edx 

	cmp valoare, 0
	je patrat32
	
	make_image_macro area, x, y, 0, valoare  
	add x, 48
	make_image_macro area, x, y, 1, valoare
	


patrat32:
    mov x, 288
	mov y, 192
	calculeaza_indici_patrat x, y
	mov valoare, edx 
	
	cmp valoare, 0
	je patrat33
	
	make_image_macro area, x, y, 0, valoare  
	add x, 48
	make_image_macro area, x, y, 1, valoare

	
	
patrat33:
    mov x, 288
	mov y, 288
	calculeaza_indici_patrat x, y
	mov valoare, edx 

	cmp valoare, 0
	je final
	
	make_image_macro area, x, y, 0, valoare  
	add x, 48
	make_image_macro area, x, y, 1, valoare
	
final:
ENDM