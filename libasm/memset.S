        section .text
        global _my_memset ; 

_my_memset:
        mov     rax, rdi

while:
        cmp     rdx,0
        je      return
        mov     byte [rdi], sil 
        inc     rdi
        dec     rdx
        jmp     while

return:
        ret
