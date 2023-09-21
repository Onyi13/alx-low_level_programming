section .data
hello db "Hello, Holberton", 10    ; The string with a newline character
hello_len equ $ - hello            ; Calculate the length of the string

section .text
global main
extern printf

main:
    ; Prepare the argument for printf
    mov rdi, hello         ; The address of the format string

    ; Call printf
    call printf

    ; Return from main
    mov rax, 60            ; syscall: exit
    xor rdi, rdi           ; status: 0
    syscall                ; invoke syscall
