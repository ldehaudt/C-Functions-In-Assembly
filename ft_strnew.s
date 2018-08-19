global _ft_strnew

section .text
extern _malloc
extern _ft_bzero

_ft_strnew:
    add rdi, 1
    push rdi
    call _malloc
    mov rdi,rax
    pop rsi
    call _ft_bzero
    ret