section .data
	format db 'Hello, Holberton', 10, 0

section .text
	global main
	extern printf

main:
	; Print the string
	mov rdi, format
	xor eax, eax
	call printf
	
	; Return 0
	mov eax, 0
	ret
