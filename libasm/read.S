        section .text
        global  _my_read ;

_my_read:
        mov     rax, 0
        syscall
        ret
