section .data
    hello db 'Hello, Holberton', 10, 0 ; 10 is the ASCII value for newline

section .text
    global main
    extern printf
    extern exit

main:
    ; Prepare the arguments for printf
    mov rdi, hello
    xor rax, rax

    ; Call printf
    call printf

    ; Prepare the arguments for exit
    xor edi, edi

    ; Call exit
    call exit

