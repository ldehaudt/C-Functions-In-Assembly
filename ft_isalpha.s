global _ft_isalpha

section .text
_ft_isalpha:
	cmp rdi, 65
	jl false
	cmp rdi, 90
	jg lower
	mov rax, 1
	ret

lower:
	cmp rdi, 97
	jl false
	cmp rdi, 122
	jg false
	mov rax, 1
	ret

false:
	mov rax, 0
	ret