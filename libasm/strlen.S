        section .text
        global  _my_strlen ;

_my_strlen:
        mov     rax, 0

while:
        inc     rax
        inc     rdi 
        cmp     [rdi], byte 0
        jne     while

return:
        ret
