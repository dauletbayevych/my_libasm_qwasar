        section .text
        global  _my_write ;

_my_write:
        mov     rax, 1
        syscall
        ret
