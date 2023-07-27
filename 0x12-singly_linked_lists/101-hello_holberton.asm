section .data
    hello_msg db "Hello, Holberton", 0    ; Null-terminated string for the message
    newline db 10, 0                     ; Null-terminated string for the new line

section .text
    global main                          ; Entry point for the program

extern printf                          ; Declare the external C function

main:
    push rbp                            ; Set up stack frame (required by ABI)

    ; Print the "Hello, Holberton" message
    mov rdi, hello_msg                  ; Load the address of the message
    call printf                         ; Call the printf function

    ; Print the new line
    mov rdi, newline                    ; Load the address of the new line
    call printf                         ; Call the printf function

    pop rbp                             ; Restore the original stack pointer
    ret                                 ; Return from the main function
