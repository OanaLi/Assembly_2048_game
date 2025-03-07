return_nou MACRO
    mov ebx, valoare_anterioara_00
    mov valoare_buton_00, ebx
	mov ebx, valoare_anterioara_01
    mov valoare_buton_01, ebx 
	mov ebx, valoare_anterioara_02
    mov valoare_buton_02, ebx
	mov ebx, valoare_anterioara_03
    mov valoare_buton_03, ebx
	mov ebx, valoare_anterioara_10
    mov valoare_buton_10, ebx
	mov ebx, valoare_anterioara_11
    mov valoare_buton_11, ebx
	mov ebx, valoare_anterioara_12
    mov valoare_buton_12, ebx
	mov ebx, valoare_anterioara_13
    mov valoare_buton_13, ebx
	mov ebx, valoare_anterioara_20
    mov valoare_buton_20, ebx
	mov ebx, valoare_anterioara_21
    mov valoare_buton_21, ebx
	mov ebx, valoare_anterioara_22
    mov valoare_buton_22, ebx
	mov ebx, valoare_anterioara_23
    mov valoare_buton_23, ebx
	mov ebx, valoare_anterioara_30
    mov valoare_buton_30, ebx
	mov ebx, valoare_anterioara_31
    mov valoare_buton_31, ebx
	mov ebx, valoare_anterioara_32
    mov valoare_buton_32, ebx
	mov ebx, valoare_anterioara_33
    mov valoare_buton_33, ebx
	
	mov edx, scor_scazut 
	sub scor, edx 
ENDM

return MACRO
    mov ebx, valoare_veche_00
    mov valoare_buton_00, ebx
	mov ebx, valoare_veche_01
    mov valoare_buton_01, ebx 
	mov ebx, valoare_veche_02
    mov valoare_buton_02, ebx
	mov ebx, valoare_veche_03
    mov valoare_buton_03, ebx
	mov ebx, valoare_veche_10
    mov valoare_buton_10, ebx
	mov ebx, valoare_veche_11
    mov valoare_buton_11, ebx
	mov ebx, valoare_veche_12
    mov valoare_buton_12, ebx
	mov ebx, valoare_veche_13
    mov valoare_buton_13, ebx
	mov ebx, valoare_veche_20
    mov valoare_buton_20, ebx
	mov ebx, valoare_veche_21
    mov valoare_buton_21, ebx
	mov ebx, valoare_veche_22
    mov valoare_buton_22, ebx
	mov ebx, valoare_veche_23
    mov valoare_buton_23, ebx
	mov ebx, valoare_veche_30
    mov valoare_buton_30, ebx
	mov ebx, valoare_veche_31
    mov valoare_buton_31, ebx
	mov ebx, valoare_veche_32
    mov valoare_buton_32, ebx
	mov ebx, valoare_veche_33
    mov valoare_buton_33, ebx
	
	mov edx, scor_scazut_real
	sub scor, edx 
ENDM


compara_tabelinainte_cu_tabel_dupa MACRO
local tabloul_sa_modificat, final
    
	mov ebx, valoare_buton_00
    cmp valoare_anterioara_00, ebx
	jne tabloul_sa_modificat
	
	mov ebx, valoare_buton_01
    cmp valoare_anterioara_01, ebx 
	jne tabloul_sa_modificat
	
	mov ebx, valoare_buton_02
    cmp valoare_anterioara_02, ebx
	jne tabloul_sa_modificat
	
	mov ebx, valoare_buton_03
    cmp valoare_anterioara_03, ebx
	jne tabloul_sa_modificat
	
	mov ebx, valoare_buton_10
    cmp valoare_anterioara_10, ebx
	jne tabloul_sa_modificat
	
	mov ebx, valoare_buton_11
    cmp valoare_anterioara_11, ebx
	jne tabloul_sa_modificat
	
	mov ebx, valoare_buton_12
    cmp valoare_anterioara_12, ebx
	jne tabloul_sa_modificat
	
	mov ebx, valoare_buton_13
    cmp valoare_anterioara_13, ebx
	jne tabloul_sa_modificat
	
	mov ebx, valoare_buton_20
    cmp valoare_anterioara_20, ebx
	jne tabloul_sa_modificat
	
	mov ebx, valoare_buton_21
    cmp valoare_anterioara_21, ebx
	jne tabloul_sa_modificat
	
	mov ebx, valoare_buton_22
    cmp valoare_anterioara_22, ebx
	jne tabloul_sa_modificat
	
	mov ebx, valoare_buton_23
    cmp valoare_anterioara_23, ebx
	jne tabloul_sa_modificat
	
	mov ebx, valoare_buton_30
    cmp valoare_anterioara_30, ebx
	jne tabloul_sa_modificat
	
	mov ebx, valoare_buton_31
    cmp valoare_anterioara_31, ebx
	jne tabloul_sa_modificat
	
	mov ebx, valoare_buton_32
    cmp valoare_anterioara_32, ebx
	jne tabloul_sa_modificat
	
	mov ebx, valoare_buton_33
    cmp valoare_anterioara_33, ebx
	je final
	
tabloul_sa_modificat:
    mov sa_reusit_mutarea, 1
final:
	
ENDM

refacem_valorile_vechi_cu_ajutorul_copiilor MACRO

    mov ebx, valoare_veche_copie_00
	mov valoare_veche_00, ebx
	
	mov ebx, valoare_veche_copie_01
    mov valoare_veche_01, ebx 
	
	mov ebx, valoare_veche_copie_02
    mov valoare_veche_02, ebx
	
	mov ebx, valoare_veche_copie_03
    mov valoare_veche_03, ebx
	
	mov ebx, valoare_veche_copie_10
    mov valoare_veche_10, ebx
	
	mov ebx, valoare_veche_copie_11
    mov valoare_veche_11, ebx
	
	mov ebx, valoare_veche_copie_12
    mov valoare_veche_12, ebx
	
	mov ebx, valoare_veche_copie_13
    mov valoare_veche_13, ebx
	
	mov ebx, valoare_veche_copie_20
    mov valoare_veche_20, ebx
	
	mov ebx, valoare_veche_copie_21
    mov valoare_veche_21, ebx
	
	mov ebx, valoare_veche_copie_22
    mov valoare_veche_22, ebx
	
	mov ebx, valoare_veche_copie_23
    mov valoare_veche_copie_23, ebx
	
	mov ebx, valoare_veche_copie_30
    mov valoare_veche_30, ebx
	
	mov ebx, valoare_veche_copie_31
    mov valoare_veche_31, ebx
	
	mov ebx, valoare_veche_copie_32
    mov valoare_veche_32, ebx
	
	mov ebx, valoare_veche_copie_33
    mov valoare_veche_33, ebx

ENDM 




actualizam_valorile_anterioare MACRO
    mov ebx, valoare_buton_00
    mov valoare_anterioara_00, ebx
	
	mov ebx, valoare_buton_01
    mov valoare_anterioara_01, ebx 
	
	mov ebx, valoare_buton_02
    mov valoare_anterioara_02, ebx
	
	mov ebx, valoare_buton_03
    mov valoare_anterioara_03, ebx
	
	mov ebx, valoare_buton_10
    mov valoare_anterioara_10, ebx
	
	mov ebx, valoare_buton_11
    mov valoare_anterioara_11, ebx
	
	mov ebx, valoare_buton_12
    mov valoare_anterioara_12, ebx
	
	mov ebx, valoare_buton_13
    mov valoare_anterioara_13, ebx
	
	mov ebx, valoare_buton_20
    mov valoare_anterioara_20, ebx
	
	mov ebx, valoare_buton_21
    mov valoare_anterioara_21, ebx
	
	mov ebx, valoare_buton_22
    mov valoare_anterioara_22, ebx
	
	mov ebx, valoare_buton_23
    mov valoare_anterioara_23, ebx
	
	mov ebx, valoare_buton_30
    mov valoare_anterioara_30, ebx
	
	mov ebx, valoare_buton_31
    mov valoare_anterioara_31, ebx
	
	mov ebx, valoare_buton_32
    mov valoare_anterioara_32, ebx
	
	mov ebx, valoare_buton_33
    mov valoare_anterioara_33, ebx
ENDM
 
 
actualizam_valorile_vechi MACRO
    mov ebx, valoare_anterioara_00
    mov valoare_veche_00, ebx
	
	mov ebx, valoare_anterioara_01
    mov valoare_veche_01, ebx 
	
	mov ebx, valoare_anterioara_02
    mov valoare_veche_02, ebx
	
	mov ebx, valoare_anterioara_03
    mov valoare_veche_03, ebx
	
	mov ebx, valoare_anterioara_10
    mov valoare_veche_10, ebx
	
	mov ebx, valoare_anterioara_11
    mov valoare_veche_11, ebx
	
	mov ebx, valoare_anterioara_12
    mov valoare_veche_12, ebx
	
	mov ebx, valoare_anterioara_13
    mov valoare_veche_13, ebx
	
	mov ebx, valoare_anterioara_20
    mov valoare_veche_20, ebx
	
	mov ebx, valoare_anterioara_21
    mov valoare_veche_21, ebx
	
	mov ebx, valoare_anterioara_22
    mov valoare_veche_22, ebx
	
	mov ebx, valoare_anterioara_23
    mov valoare_veche_23, ebx
	
	mov ebx, valoare_anterioara_30
    mov valoare_veche_30, ebx
	
	mov ebx, valoare_anterioara_31
    mov valoare_veche_31, ebx
	
	mov ebx, valoare_anterioara_32
    mov valoare_veche_32, ebx
	
	mov ebx, valoare_anterioara_33
    mov valoare_veche_33, ebx
ENDM


muta_linia MACRO a, b, c, d
local rand0, rand1, next1, next2, combouri, combo_dublu, combo_simplu, gata, var2, var3

;eliminam toate zerourile
    
    mov k, 0
rand0:
	
    cmp a, 0
	jne next1
	cmp k, 3
	je combouri
	mov ebx, b
	mov a, ebx
	mov ebx, c
	mov b, ebx
	mov ebx, d
	mov c, ebx
	mov d, 0
	inc k
	jmp rand0      ;se repeta pana cand a e diferit de 0 

next1:
    mov k, 0
rand1:
	
    cmp b, 0
	jne next2
	cmp k, 2
	je combouri
	mov ebx, c
	mov b, ebx
	mov ebx, d
	mov c, ebx
	mov d, 0
	inc k
	jmp rand1
	
next2:
    cmp c, 0 
	jne combouri
	mov ebx, d
	mov c, ebx
	mov d, 0
	
combouri:
;caz doua combouri

    
combo_dublu:
    mov ebx, b
    cmp a, ebx
	jne combo_simplu
	mov ebx, d
	cmp c, ebx
	jne combo_simplu
	shl a, 1
	mov b, ebx
	shl b, 1
	mov c, 0
	mov d, 0
	
	;se actualizeaza scorul
	mov edx, a
	add scor, edx
	add scor_scazut, edx
	mov edx, b
	add scor, edx
	add scor_scazut, edx
	jmp gata
	
combo_simplu:
    mov ebx, b
	cmp a, ebx
	jne var2
	shl a, 1
	mov ebx, c
	mov b, ebx
	mov ebx, d
	mov c, ebx
	mov d, 0
	
	;se actualizeaza scorul
	mov edx, a
	add scor, edx
	add scor_scazut, edx
	jmp gata
	
  var2:
	mov ebx, c
	cmp b, ebx
	jne var3
	shl b, 1
	mov ebx, d
	mov c, ebx
	mov d, 0
	
	;se actualizeaza scorul
	mov edx, b
	add scor, edx
	add scor_scazut, edx
	jmp gata
	
  var3:
    mov ebx, d
	cmp c, ebx
	jne gata
	shl c, 1
	mov d, 0
	
	;se actualizeaza scorul
	mov edx, c
	add scor, edx
	add scor_scazut, edx
	jmp gata
  
    ;;;;;;;;;;;;;;;;;;;;OBS: ERORI LA CALCUL SCORULUI, NU MEREU SE ACTUALIZEAZA
gata:	
ENDM


muta_butoane_spre_sus MACRO
local final 
    mov scor_scazut, 0
    mov sa_reusit_mutarea, 0
    
	muta_linia valoare_buton_00, valoare_buton_01, valoare_buton_02, valoare_buton_03
    muta_linia valoare_buton_10, valoare_buton_11, valoare_buton_12, valoare_buton_13
	muta_linia valoare_buton_20, valoare_buton_21, valoare_buton_22, valoare_buton_23
	muta_linia valoare_buton_30, valoare_buton_31, valoare_buton_32, valoare_buton_33
	
	compara_tabelinainte_cu_tabel_dupa 
	;se actualizeaza sa_reusit_mutarea
	

ENDM

muta_butoane_spre_jos MACRO
local final
    mov scor_scazut, 0
    mov sa_reusit_mutarea, 0
    
	muta_linia valoare_buton_03, valoare_buton_02, valoare_buton_01, valoare_buton_00
    muta_linia valoare_buton_13, valoare_buton_12, valoare_buton_11, valoare_buton_10
	muta_linia valoare_buton_23, valoare_buton_22, valoare_buton_21, valoare_buton_20
	muta_linia valoare_buton_33, valoare_buton_32, valoare_buton_31, valoare_buton_30
	
	compara_tabelinainte_cu_tabel_dupa
	;se actualizeaza sa_reusit_mutarea

ENDM

muta_butoane_spre_dr MACRO
local final
    mov scor_scazut, 0
    mov sa_reusit_mutarea, 0
	
    muta_linia valoare_buton_30, valoare_buton_20, valoare_buton_10, valoare_buton_00
    muta_linia valoare_buton_31, valoare_buton_21, valoare_buton_11, valoare_buton_01
	muta_linia valoare_buton_32, valoare_buton_22, valoare_buton_12, valoare_buton_02
	muta_linia valoare_buton_33, valoare_buton_23, valoare_buton_13, valoare_buton_03 
	
	compara_tabelinainte_cu_tabel_dupa
	;se actualizeaza "sa_reusit_mutarea"

ENDM

muta_butoane_spre_stg MACRO
local final
    mov scor_scazut, 0
    mov sa_reusit_mutarea, 0
	
	muta_linia valoare_buton_03, valoare_buton_13, valoare_buton_23, valoare_buton_33
    muta_linia valoare_buton_02, valoare_buton_12, valoare_buton_22, valoare_buton_32
	muta_linia valoare_buton_01, valoare_buton_11, valoare_buton_21, valoare_buton_31
	muta_linia valoare_buton_00, valoare_buton_10, valoare_buton_20, valoare_buton_30
	
	compara_tabelinainte_cu_tabel_dupa
	;se actualizeaza sa_reusit_mutarea

	
ENDM