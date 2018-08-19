global _ft_printbinary

section .text
extern _ft_putchar
extern _ft_putbyte

_ft_printbinary:
    mov rax, rdi
    mov r8, 0
loop:
    cmp r8, rsi
    je end
    push rax
    push rsi
    push r8
    mov rdi, [rax + r8]
    call _ft_putbyte
    mov rdi, 32
    call _ft_putchar
    pop r8
    pop rsi
    pop rax
    add r8, 1
    jmp loop

end:
    ret