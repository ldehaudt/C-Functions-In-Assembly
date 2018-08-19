global _ft_putnbr

section .text
extern _ft_putchar

_ft_putnbr:
    mov rax, rdi
    mov r8, 0
    mov r9, 0
    mov r10, 10
    cmp rax, 0x7fffffff
    jg minus
    mov rax, rdi
    jmp load

minus:
    mov r9, rdi
    mov rdi, 45
    call _ft_putchar
    mov rax, 0x100000000  
    sub rax, r9
    jmp load

load:
    cmp rax, 10
    jl  mid
    xor rdx,rdx
    div r10
    push rdx
    add r8, 1
    jmp load
    
mid:
    push rax
    add r8, 1

unload:
    cmp r8, 0
    je  exit
    pop rdi
    add rdi, 48
    call _ft_putchar
    sub r8, 1    
    jmp unload

exit:
    ret