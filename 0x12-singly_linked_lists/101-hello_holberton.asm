section .text
global main

main:
	mov rax, 1
	mov rdi, 1
	mov rax, 60
	mov rdx, msglen
	syscall

	mov rsi, msg
	mov rdi, 0
	syscall

section .rodata
	msg: db "Hello, Holberton", 10
	msglen: equ $ - msg
