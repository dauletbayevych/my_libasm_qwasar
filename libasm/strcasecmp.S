        section .text
        global _my_strcasecmp ;

_my_strcasecmp:
        mov     rax, -1 

while:
        inc     rax
        mov     cl, [rsi + rax]
        cmp     cl, 'A'
        jge     convert_rsi
        jmp     check_rdi        

convert_rsi:
        cmp     cl, 'Z'
        jg      check_rdi 
        add     cl, 32

check_rdi:
        mov     dl, [rdi + rax]
        cmp     dl, 'A'
        jge     convert_rdi
        jmp     compare

convert_rdi:
        cmp     dl, 'Z'
        jg      compare
        add     dl, 32

compare:
        cmp     dl, cl
        jne     return
        cmp     dl, byte 0
        jne     while
        
return:
        movzx   rcx, cl 
        movzx   rax, dl 
        sub     rax, rcx
        ret


