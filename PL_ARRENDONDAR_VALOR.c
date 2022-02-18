;-----------------------------------------;
; LocalProc em Uniface                    ;
; Frederik                                ;
;                                         ;
; Arredondar valor numérico               ;
;-----------------------------------------;
entry PL_ARREDONDAR_VALOR

params 
    numeric p_in_valor: IN ; Valor de entrada
    numeric p_qt_round: IN ; Quantidade de casas
    numeric p_vl_valor: OUT; Retorna Valor
endparams

variables
    numeric v_vl_valor
endvariables

if (p_qt_round != "")
    if (p_qt_round = 0)
	    v_vl_valor = p_in_valor[round,0]
    elseif (p_qt_round = 1)
	    v_vl_valor = p_in_valor[round,1]
	elseif (p_qt_round = 2)
	    v_vl_valor = p_in_valor[round,2]
	elseif (p_qt_round = 3)
		v_vl_valor = p_in_valor[round,3]
    elseif (p_qt_round = 4)
      	v_vl_valor = p_in_valor[round,4]
    elseif (p_qt_round = 5)
      	v_vl_valor = p_in_valor[round,5]
    elseif (p_qt_round = 6)
      	v_vl_valor = p_in_valor[round,6]
    elseif (p_qt_round = 7)
      	v_vl_valor = p_in_valor[round,7]
    elseif (p_qt_round = 8)
      	v_vl_valor = p_in_valor[round,8]
    elseif (p_qt_round = 9)
     	v_vl_valor = p_in_valor[round,9]
    endif
    p_vl_valor = v_vl_valor
else
	p_vl_valor = p_in_valor
endif

return (0)
end;