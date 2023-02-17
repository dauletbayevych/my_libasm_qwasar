        section .text
        global _my_memcpy ; 

_my_memcpy:
        mov     rax, rdi

while:
        cmp     rdx,0
        je      return
        mov     cl, [rsi]
        mov     byte [rdi], cl 
        inc     rdi
        inc     rsi
        dec     rdx
        jmp     while

return:
        ret
