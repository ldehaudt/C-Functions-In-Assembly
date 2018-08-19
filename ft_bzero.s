global _ft_bzero

section .text
_ft_bzero:
    jmp loop

loop:
    cmp rsi, 1
    jl end
    mov [rdi + rsi - 1], byte 0
    sub rsi, 1
    jmp loop

end:
    ret