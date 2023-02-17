        section .text
        global _my_strncmp ;

_my_strncmp:
        mov     rax, 0 

while:
        mov     bl, [rdi + rax]
        mov     cl, [rsi + rax]
        cmp     bl,cl 
        jne     return
        cmp     bl, 0 
        je      return
        inc     rax
        dec     rdx
        cmp     rdx, 0
        je      reached_size_t
        jmp     while

return:
        sub     bl, cl
        movsx   rax, bl
        ret

reached_size_t:
        ret


