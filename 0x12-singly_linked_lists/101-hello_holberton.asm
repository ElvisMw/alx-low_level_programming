section .data
    hello db "Hello, Holberton",0        ; Define the 'hello' string via null-termination

    format db "%s", 10, 0                ; Defines format specifier

section .text
    extern printf                       ; Declare the external printf function

    global main
main:
    push rbp                            ; Save the base pointer
    mov rdi, format                     ; Load the address of the format specifier into rdi
    mov rsi, hello                      ; Load the address of the 'hello' string into rsi
    call printf                         ; Call  printf function to print the string
    pop rbp                             ; Restore base pointer
    ret                                 ; Return from main function
