        section .text
        global _my_index ;

_my_index:
        dec     rdi
        xor     rax,rax
while:
        inc     rdi
        mov     dl, [rdi]
        cmp     dl, sil
        je      found_char
        cmp     dl, byte 0
        jne     while
        movsx   rax, dl 
        ret

found_char:
        mov     rax,rdi

return:
        ret



