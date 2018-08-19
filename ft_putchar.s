global _ft_putchar

section .text
extern malloc

_ft_putchar:
    push rdi
    mov rdx, 1
    lea rsi, [rsp]
    mov rdi, 1
    mov rax, 0x2000004
    syscall
    pop rdi
    ret