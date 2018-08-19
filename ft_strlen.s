global _ft_strlen

section .text
_ft_strlen:
    mov rax, 0
    mov rcx, 0xffffffff
    push rdi
    repne scasb
    pop rbx
    sub rdi, rbx
    sub rdi, 1
    mov rax, rdi
    ret