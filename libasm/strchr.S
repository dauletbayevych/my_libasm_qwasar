        section .text
        global _my_strchr ;

_my_strchr:
        dec     rdi
        xor     rax,rax
while:
        inc     rdi
        mov     dl, [rdi]
        cmp     dl, sil
        je      found_char
        cmp     dl, byte 0
        jne     while
        movsx     rax, dl 
        ret

found_char:
        mov     rax,rdi

return:
        ret



