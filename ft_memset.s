global _ft_memset

section .text
_ft_memset:
    cld
    mov rax, rsi
    mov rcx, rdx
    rep stosb
    mov rax, rdi
    ret