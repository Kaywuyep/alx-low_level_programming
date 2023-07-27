section .data
    hello_msg db "Hello, Holberton", 0   ; Null-terminated string for the message
    newline db 10                       ; ASCII code for newline character

section .text
    global main                         ; Entry point for the program

extern printf                         ; Declare the external C function

main:
    push rbp                           ; Set up stack frame (required by ABI)
    mov rdi, hello_msg                 ; Load the address of the message
    call printf                        ; Call the printf function for the message
    mov rdi, newline                   ; Load the address of the newline character
    call printf                        ; Call the printf function for the newline
    pop rbp                            ; Restore the original stack pointer
    ret                                ; Return from the main function
