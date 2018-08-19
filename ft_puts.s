global _ft_puts

section .text
extern _ft_strlen

_ft_puts:
    push rdi
    call _ft_strlen
    pop rdi
    mov rdx, rax
    mov rsi, rdi
    mov rdi, 1
    mov rax, 0x2000004
    syscall
    ret