; File: 101-hello_holberton.asm
; Author: Sylivester Mberenge
; Desc: system of 64-bit printing a string and a newline


extern printf

section .text
	global main

main:
	push rbp

	mov rdi,fmt
	mov rsi,msg
	mov rax,0
	call printf

	pop rbp

	mov rax,0
	ret

section .data
	msg: db "Hello, Holberton", 0
	fmt: db "%s", 10, 0
	