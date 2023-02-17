        section .text
        global _my_strcmp ;

_my_strcmp:
        mov     rax, 0 

while:
        mov     bl, [rdi + rax]
        mov     cl, [rsi + rax]
        cmp     bl,cl 
        jne     return
        cmp     bl, 0 
        je      return
        jmp     while

return:
        sub     bl, cl
        movsx   rax, bl
        ret



