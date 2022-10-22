Section .text
	extern printf
	global main
main:
push rbp
	mov rsi, msg	; 64-bit ABI passing order starts w/edi, esi.
	mov rdi, fmt	;
	mov rax, 0	; printf is a varargs
	call printf

	mov rax, 0	; process termination service
	ret

Section .data
	msg: db "Hello, Holberton", 0
	fmt: db "%s", 10, 0

