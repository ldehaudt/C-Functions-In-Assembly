global _ft_isascii

section .text
_ft_isascii:
	cmp rdi, 0
	jl false
	cmp rdi, 177
	jg false
	mov rax, 1
	ret

false:
	mov rax, 0
	ret