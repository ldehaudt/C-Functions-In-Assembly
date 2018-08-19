global _ft_strdup

section .text
extern _malloc
extern _ft_memcpy
extern _ft_strlen
extern _ft_puts

_ft_strdup:
    push rdi
    call _ft_strlen
    mov rdi, rax
    push rax
    add rdi, 1
    call _malloc
    pop rdx
    pop rsi
    mov rdi, rax
    call _ft_memcpy    
    mov [rax + 6], byte 0  
    ret