section .data
    msg db "Hello, Holberton", 0   ; Null-terminated string for the message
    newline db "%s", 10, 0                       ; ASCII code for newline character

section .text
    global main                         ; Entry point for the program

extern printf                         ; Declare the external C function

main:
    mov esi, msg
	mov edi, newline
	mov eax, 0
	call printf

	mov eax, 0
	ret
