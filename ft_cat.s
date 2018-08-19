global _ft_cat

section .text
extern _ft_strnew
extern _ft_puts
extern _ft_strlen
extern _ft_bzero
extern _free
extern _read

section .text
_ft_cat:
    push rdi
    mov rdi, 1000
    call _ft_strnew

loop:
    pop rdi
    push rdi
    mov rsi, rax
    mov rdx, 1000
    call _read
    cmp rax, 0
    jle end
    mov rdi, rsi
    push rdi
    call _ft_puts
    pop rdi
    push rdi
    pop rdi
    
    mov rax, rdi
    mov rsi, 1000
    call _ft_bzero
    jmp loop

end:
    mov rdi, rsi
    call _free
    pop rdi
    ret