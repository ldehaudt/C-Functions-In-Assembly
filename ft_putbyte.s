global _ft_putbyte

extern _ft_putchar

section .text
_ft_putbyte:
	mov r8, 0
    mov rax, rdi

loop:
    push rax
    and rax, 0x80
    mov rdi, 48 
    cmp rax, 0
    jne add1

cont:
    call _ft_putchar
    pop rax
    shl rax, 1
    add r8, 1
    cmp r8, 8
    je end
    jmp loop

add1:
    add rdi, 1
    jmp cont

end:
    ret