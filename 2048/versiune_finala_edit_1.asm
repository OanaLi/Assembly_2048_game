.586
.model flat, stdcall
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;includem biblioteci, si declaram ce functii vrem sa importam
includelib msvcrt.lib
extern exit: proc
extern malloc: proc   
extern memset: proc
extern printf: proc
extern fprintf: proc
extern fscanf: proc
extern scanf: proc
extern fclose: proc
extern fopen: proc  
extern fgetc: proc

includelib canvas.lib
extern BeginDrawing: proc
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;declaram simbolul start ca public - de acolo incepe executia
public start  

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
 
;sectiunile programului, date, respectiv cod
.data

include digits.inc   
include letters.inc
include 2048.inc 
 
include macro_actualizare_valori.inc
include macro_afisare_cu_imagini.inc
include macro_final_joc.inc 
include macro_generare_random.inc
include macro_interfata_joc.inc
include macro_muta_butoane.inc 

you_won db "YOU WON!", 10, 0
game_over db "GAME OVER!", 10, 0


window_title DB "2048",0
area_width EQU 640
area_height EQU 480
area DD 0 
 

arg1 EQU 8
arg2 EQU 12
arg3 EQU 16
arg4 EQU 20 
arg5 EQU 24 
  
symbol_width EQU 10
symbol_height EQU 20
 
button_x EQU 0
button_y EQU 0
button_size EQU 384
 
numarator dd 0

valoare_buton_00 dd 0
valoare_buton_01 dd 0
valoare_buton_02 dd 0 
valoare_buton_03 dd 0

valoare_buton_10 dd 0
valoare_buton_11 dd 0 
valoare_buton_12 dd 0
valoare_buton_13 dd 0

valoare_buton_20 dd 0
valoare_buton_21 dd 0
valoare_buton_22 dd 0
valoare_buton_23 dd 0 
   
valoare_buton_30 dd 0
valoare_buton_31 dd 0
valoare_buton_32 dd 0
valoare_buton_33 dd 0

valoare_anterioara_00 dd 0 
valoare_anterioara_01 dd 0 
valoare_anterioara_02 dd 0 
valoare_anterioara_03 dd 0

valoare_anterioara_10 dd 0
valoare_anterioara_11 dd 0  
valoare_anterioara_12 dd 0
valoare_anterioara_13 dd 0

valoare_anterioara_20 dd 0
valoare_anterioara_21 dd 0
valoare_anterioara_22 dd 0 
valoare_anterioara_23 dd 0
   
valoare_anterioara_30 dd 0
valoare_anterioara_31 dd 0 
valoare_anterioara_32 dd 0   
valoare_anterioara_33 dd 0

valoare_veche_00 dd 0 
valoare_veche_01 dd 0 
valoare_veche_02 dd 0 
valoare_veche_03 dd 0

valoare_veche_10 dd 0
valoare_veche_11 dd 0  
valoare_veche_12 dd 0
valoare_veche_13 dd 0

valoare_veche_20 dd 0
valoare_veche_21 dd 0
valoare_veche_22 dd 0 
valoare_veche_23 dd 0
   
valoare_veche_30 dd 0
valoare_veche_31 dd 0 
valoare_veche_32 dd 0   
valoare_veche_33 dd 0


culoare_patrat dd 0FFh
nr_click dd 0

culoarea dd 0FF00h ;;;;;;;;;;;;;schimbat dd cu equ

valoare dd 0  

format_d db "%d",0 

x dd 0
y dd 0

k dd 0 
image_width dd 48
image_height dd 96 
val dd 0

sa_reusit_mutarea dd 0

scor dd 0    
scor_scazut dd 0
;scor_scazut_temporar dd 0  
scor_scazut_real dd 0

value1 dd 1
value0 dd 0


var dd 0
format_d_ db  "%d",13,0
nume_fisier db "fisier_scoruri.txt", 0
format_s db "%s", 0
f dd 0
mode_append db "a+", 0
mode_read db "r+",0
mode_write db "w", 0 
caracter dd 0
max1 dd 0  
max2 dd 0
max3 dd 0

click_score dd 1
joc_finalizat dd 0  
calculare_top dd 0

top_3_dupa_finalizare dd 0
.code 
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Make image at the given coordinates
; arg1 - pointer to the pixel vector
; arg2 - x of drawing start position
; arg3 - y of drawing start position
; arg4 - the part of the image we want to draw (first/second)
; arg5 - the value of the square
make_image proc
	push ebp
	mov ebp, esp
	pusha
	
valoare2:	
	cmp dword ptr[ebp+arg5], 2
	jne valoare4
    cmp dword ptr[ebp+arg4], 0 
	jne next2 
	lea esi, var_2_0
	jmp draw_image 
	next2:
	lea esi, var_2_1
	jmp draw_image
	
valoare4:
    cmp dword ptr[ebp+arg5], 4
	jne valoare8
    cmp dword ptr[ebp+arg4], 0 
	jne next4
	lea esi, var_4_0
	jmp draw_image 
	next4:
	lea esi, var_4_1
	jmp draw_image
 
valoare8:
    cmp dword ptr[ebp+arg5], 8
	jne valoare16
    cmp dword ptr[ebp+arg4], 0 
	jne next8
	lea esi, var_8_0
	jmp draw_image 
	next8:
	lea esi, var_8_1
	jmp draw_image
 
valoare16:
    cmp dword ptr[ebp+arg5], 16
	jne valoare32
    cmp dword ptr[ebp+arg4], 0 
	jne next16
	lea esi, var_16_0
	jmp draw_image 
	next16:
	lea esi, var_16_1
	jmp draw_image
 
valoare32:
    cmp dword ptr[ebp+arg5], 32
	jne valoare64
    cmp dword ptr[ebp+arg4], 0 
	jne next32
	lea esi, var_32_0
	jmp draw_image 
	next32:
	lea esi, var_32_1
	jmp draw_image
 
valoare64:
    cmp dword ptr[ebp+arg5], 64
	jne valoare128
    cmp dword ptr[ebp+arg4], 0 
	jne next64
	lea esi, var_64_0
	jmp draw_image 
	next64:
	lea esi, var_64_1
	jmp draw_image
 
valoare128:
    cmp dword ptr[ebp+arg5], 128
	jne valoare256
    cmp dword ptr[ebp+arg4], 0 
	jne next128
	lea esi, var_128_0
	jmp draw_image 
	next128:
	lea esi, var_128_1
	jmp draw_image
 
valoare256:
    cmp dword ptr[ebp+arg5], 256
	jne valoare512
    cmp dword ptr[ebp+arg4], 0 
	jne next256
	lea esi, var_256_0
	jmp draw_image 
	next256:
	lea esi, var_256_1
	jmp draw_image
 
valoare512:
    cmp dword ptr[ebp+arg5], 512
	jne valoare1024
    cmp dword ptr[ebp+arg4], 0 
	jne next512
	lea esi, var_512_0
	jmp draw_image 
	next512:
	lea esi, var_512_1
	jmp draw_image
 
valoare1024:
    cmp dword ptr[ebp+arg5], 1024
	jne valoare2048
    cmp dword ptr[ebp+arg4], 0 
	jne next1024
	lea esi, var_1024_0
	jmp draw_image 
	next1024:
	lea esi, var_1024_1
	jmp draw_image
 
valoare2048:
    cmp dword ptr[ebp+arg5], 2048
	jne valoare0
    cmp dword ptr[ebp+arg4], 0  
	jne next2048
	lea esi, var_2048_0
	jmp draw_image 
	next2048:
	lea esi, var_2048_1
	jmp draw_image

valoare0:


draw_image:
	mov ecx, image_height
loop_draw_lines:
	mov edi, [ebp+arg1] ; pointer to pixel area
	mov eax, [ebp+arg3] ; pointer to coordinate y
	
	add eax, image_height 
	sub eax, ecx ; current line to draw (total - ecx)
	
	mov ebx, area_width
	mul ebx	; get to current line
	
	add eax, [ebp+arg2] ; get to coordinate x in current line
	shl eax, 2 ; multiply by 4 (DWORD per pixel)
	add edi, eax
	
	push ecx
	mov ecx, image_width ; store drawing width for drawing loop
	
loop_draw_columns:

	push eax
	mov eax, dword ptr[esi] 
	mov dword ptr [edi], eax ; take data from variable to canvas
	pop eax
	
	add esi, 4
	add edi, 4 ; next dword (4 Bytes)  
	
	loop loop_draw_columns
	
	pop ecx
	loop loop_draw_lines
	
	
	popa
	
	mov esp, ebp
	pop ebp
	ret
make_image endp

; simple macro to call the procedure easier
make_image_macro macro drawArea, x, y, pt, val
    push val
    push pt
	push y
	push x
	push drawArea
	call make_image
	add esp, 20 
endm




; procedura make_text afiseaza o litera sau o cifra la coordonatele date
; arg1 - simbolul de afisat (litera sau cifra)
; arg2 - pointer la vectorul de pixeli
; arg3 - pos_x
; arg4 - pos_y
make_text proc
	push ebp
	mov ebp, esp
	pusha
	 
	mov eax, [ebp+arg1] ; citim simbolul de afisat
	cmp eax, 'A'
	jl make_digit
	cmp eax, 'Z'
	jg make_digit
	sub eax, 'A'
	lea esi, letters
	jmp draw_text
make_digit:
	cmp eax, '0'
	jl make_space
	cmp eax, '9'
	jg make_space
	sub eax, '0'
	lea esi, digits
	jmp draw_text
make_space:	 
	mov eax, 26 ; de la 0 pana la 25 sunt litere, 26 e space
	lea esi, letters
	
draw_text:  
	mov ebx, symbol_width
	mul ebx
	mov ebx, symbol_height
	mul ebx
	add esi, eax
	mov ecx, symbol_height
bucla_simbol_linii:
	mov edi, [ebp+arg2] ; pointer la matricea de pixeli
	mov eax, [ebp+arg4] ; pointer la coord y
	add eax, symbol_height
	sub eax, ecx
	mov ebx, area_width
	mul ebx
	add eax, [ebp+arg3] ; pointer la coord x
	shl eax, 2 ; inmultim cu 4, avem un DWORD per pixel
	add edi, eax
	push ecx
	mov ecx, symbol_width
bucla_simbol_coloane:
	cmp byte ptr [esi], 0
	je simbol_pixel_alb
	mov dword ptr [edi], 0
	jmp simbol_pixel_next  
simbol_pixel_alb:
	mov dword ptr [edi], 0FFFFFFh
simbol_pixel_next:
	inc esi
	add edi, 4
	loop bucla_simbol_coloane
	pop ecx
	loop bucla_simbol_linii
	popa
	mov esp, ebp
	pop ebp
	ret
make_text endp


; un macro ca sa apelam mai usor desenarea simbolului           
make_text_macro macro symbol, drawArea, x, y
	push y
	push x
	push drawArea
	push symbol 
	call make_text
	add esp, 16
endm


linie_orizontala macro x,y,len,culoare
local bucla_linie
    mov eax, y
	mov ebx, area_width
	mul ebx
	add eax, x 
	shl eax, 2
	add eax, area
	mov ecx, len
	
bucla_linie:
    mov ebx, culoare
    mov dword ptr[eax], ebx ;;;;;;;;FOARTE IMPORTANT daca scriu: "mov dword ptr[eax], culoare" nu merge
	                                                           ; "mov dword ptr[eax], offset culoare" merge dar da culori random
	add eax, 4
    loop bucla_linie
endm


linie_verticala macro x,y,len,culoare
local bucla_linie
    mov eax, y
	mov ebx, area_width
	mul ebx
	add eax, x
	shl eax, 2
	add eax, area
	mov ecx, len
	
bucla_linie:
   
    mov ebx, culoare
    mov dword ptr [eax], ebx
	add eax, area_width*4
    loop bucla_linie
endm
 
 
adauga_scor_in_fisier macro

    ;deschide fisierul
	push offset mode_append
	push offset nume_fisier
	call fopen
	add esp, 8
	mov f, eax
	
    ;baga scorul la finalul fisierului
    push scor
	push offset format_d_
	push f       
	call fprintf    
	add esp, 12
	
	;inchide fisierul
	push f
	call fclose
	add esp, 4
endm

calculam_top_3 macro               ;obs s-ar putea sa nu fie ok ordinea max1,  max2, max3
local citire, next1, next2, gata

    mov max1, 0
	mov max2, 0
	mov max3, 0

    push offset mode_append
	push offset nume_fisier
	call fopen
	add esp, 8 
	mov f, eax
	
citire:
	
	;citeste din fisier
	push offset var
	push offset format_d
	push f
	call fscanf
	add esp, 12  
	
	  
	;verifica daca am ajuns la finalul fisierului
	push f
	call fgetc
	add esp, 4

	cmp eax, -1
	je gata
	
	;actualizam cele 3 maximuri
	mov eax, var
	cmp eax, max1
	jle next1
	
	mov ebx, max2
	mov max3, ebx  ;max3=max2
	mov ebx, max1
    mov max2, ebx  ;max2=max1
	mov max1, eax  ;max1=var
	jmp citire
next1:
	cmp eax, max2
	jle next2
	
	mov ebx, max2
	mov max3, ebx  ;max3=max2
	mov max2, eax  ;max2=var
	jmp citire
	
next2:
    cmp eax, max3
	jle citire  
	mov max3, eax  ;max3=var
	jmp citire
	

gata:	

;inchide fisierul
	push f
	call fclose
	add esp, 4

endm

; functia de desenare - se apeleaza la fiecare click
; sau la fiecare interval de 200ms in care nu s-a dat click
; arg1 - evt (0 - initializare, 1 - click, 2 - s-a scurs intervalul fara click)
; arg2 - x  (in cazul apasarii unei taste, x contine codul ascii al tastei care a fost apasata)
; arg3 - y
draw proc
	push ebp
	mov ebp, esp
	pusha
	
	mov eax, [ebp+arg1]     
	cmp eax, 1
	jz evt_click         
	cmp eax, 2         
	jz evt_click ; nu s-a efectuat click pe nimic
	cmp eax, 3
	jz evt_click           	

	;mai jos e codul care intializeaza fereastra cu pixeli albi
	mov eax, area_width
	mov ebx, area_height
	mul ebx
	shl eax, 2
	push eax 
	push 255
	push area
	call memset
	add esp, 12
	apare_o_valoare_intrun_patrat_random       
	apare_o_valoare_intrun_patrat_random
    actualizam_valorile_anterioare
    actualizam_valorile_vechi 	
	jmp afisare
	
	
	
evt_click: 
        
	;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;  
	
   verifica_daca_jocul_a_fost_castigat 
   cmp ebx, 1 
   jne verifica_pierdut 
   inc joc_finalizat
   ;jocul e gata deci scorul se salveaza in fisier 
   cmp joc_finalizat, 1         ;scorul e adaugat doar o data in fisier 
   jne sari0
   adauga_scor_in_fisier        
   sari0:
   inc top_3_dupa_finalizare
   afiseaza_mesaj_final value1        ;OBS: nu se poate face return
   jmp final_draw
   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   
verifica_pierdut:
	  ;OBS: avem eroare la scor daca avem doua combouri pe doua linii in acelasi timp*inclusiv 0*
	  actualizam_valorile_anterioare

      muta_butoane_spre_sus
	  cmp sa_reusit_mutarea, 0  
	  jne jocul_nu_e_gata 
	  
	  return_nou         ;OBS: pentru return avem nevoie de "valorile_vechi" si "valorile anterioare" actualizate
      muta_butoane_spre_jos
	  cmp sa_reusit_mutarea, 0
	  jne jocul_nu_e_gata
	  
	  return_nou
	  muta_butoane_spre_stg 
	  cmp sa_reusit_mutarea, 0
	  jne jocul_nu_e_gata
	  
	  return_nou
	  muta_butoane_spre_dr
	  cmp sa_reusit_mutarea, 0
	  jne jocul_nu_e_gata 
	  inc joc_finalizat
	  ;jocul e gata deci scorul se salveaza in fisier 
	        ; cmp dword ptr[ebp+arg2], 'R'  -daca vrem sa putem da return dupa game over
	        ; je continua_jocul             -optional
	  cmp joc_finalizat, 1         ;scorul e adaugat doar o data in fisier (edit pb rezolvata)
	  jne sari_peste
	  adauga_scor_in_fisier        ;EDIT ADAUGAT problema: il baga de prea  multe ori in fisier
	  sari_peste:
	  inc top_3_dupa_finalizare
	  afiseaza_mesaj_final value0   ;se afiseaza game over
      jmp final_draw
	
	  
jocul_nu_e_gata:
	  return_nou


continua_jocul:





	cmp dword ptr[ebp+arg2], 'R'  
	jne next
	return
	mov scor_scazut_real, 0 ;daca apas de 2 ori pe R nu se scade de 2 ori scorul adaugat, doar o data
	jmp afisare 
	
	
next:

    cmp dword ptr[ebp+arg2], 'S' 
	jne next1
	inc click_score

next1:
	
	mov edx, 0            
	mov eax, click_score
	mov ecx, 2
	div ecx
	
	cmp edx, 0
	jne sus
	inc calculare_top 
	cmp calculare_top, 1
	jne sari_peste_asta
	calculam_top_3
	sari_peste_asta:
	afiseaza_top3_scoruri 
	
	jmp final_draw

	

  
sus:
    cmp dword ptr[ebp+arg2], '&' 
	jne jos 
    muta_butoane_spre_sus  
    mov ebx, scor_scazut
	mov scor_scazut_real, ebx
	cmp sa_reusit_mutarea, 0
	je sari_peste0
	apare_o_valoare_intrun_patrat_random  
	actualizam_valorile_vechi    
	
sari_peste0:
	
	jmp afisare
	

jos: 
    cmp dword ptr[ebp+arg2], '('
	jne stanga
	muta_butoane_spre_jos
	mov ebx, scor_scazut
	mov scor_scazut_real, ebx
	cmp sa_reusit_mutarea, 0
	je sari_peste1
	apare_o_valoare_intrun_patrat_random  
	actualizam_valorile_vechi
sari_peste1:

	jmp afisare
    

stanga:  
    cmp dword ptr[ebp+arg2], '%' 
	jne dreapta
	muta_butoane_spre_stg 
		mov ebx, scor_scazut
	mov scor_scazut_real, ebx
	cmp sa_reusit_mutarea, 0
	je sari_peste2
	apare_o_valoare_intrun_patrat_random  
    
	actualizam_valorile_vechi
sari_peste2:
	
	jmp afisare 
	

dreapta: 
    cmp dword ptr[ebp+arg2], "'" 
    jne afisare
	muta_butoane_spre_dr
		mov ebx, scor_scazut
	mov scor_scazut_real, ebx
	cmp sa_reusit_mutarea, 0
	je sari_peste3
	apare_o_valoare_intrun_patrat_random  
	actualizam_valorile_vechi
sari_peste3:
	
	jmp afisare
	
	

afisare: 
   afisare_joc 

   

final_draw:
	popa
	mov esp, ebp
	pop ebp
	ret
draw endp

start:
	
	;alocam memorie pentru zona de desenat  
	mov eax, area_width 
	mov ebx, area_height
	mul ebx      
	shl eax, 2
	push eax
	call malloc
	add esp, 4
	mov area, eax
	;apelam functia de desenare a ferestrei  
	;typedef void (*DrawFunc)(int evt, int x, int y);  
	;void __cdecl BeginDrawing(const char *title, int width, int height, unsigned int *area, DrawFunc draw);
	push offset draw
	push area 
	push area_height
	push area_width
	push offset window_title
	call BeginDrawing 
	add esp, 20
	
	;terminarea programului
	push 0
	call exit
end start
