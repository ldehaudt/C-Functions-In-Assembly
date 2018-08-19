global _ft_strcat

section .text
_ft_strcat:
    mov r8, 0
    jmp findStart

findStart:
    cmp [rdi + r8], byte 0
    je mid
    add r8, 1
    jmp findStart

mid:
    mov r9, 0
    jmp loop

loop:
    cmp [rsi + r9], byte 0
    je end
    mov al, byte [rsi + r9]
    mov [rdi + r8], al
    add r9, 1
    add r8, 1
    jmp loop

end:
    mov [rdi + r8], byte 0
    ret