section .data
msg db "Hello, Holberton", 0 ; C string needs null terminator
fmt db "%s", 10, 0          ; The printf format, newline and null terminator

section .text
global main                 ; the standard gcc entry point

main:                          ; the program label for the entry point
    push rbp                   ; set up stack frame, aligned

    mov rdi, fmt               ; load format string
    mov rsi, msg               ; load message string
    xor rax, rax               ; clear rax (return value)
    call printf                ; Call C function printf

    pop rbp                    ; restore stack

    xor rax, rax               ; clear rax (return value) for normal exit
    ret                        ; return

