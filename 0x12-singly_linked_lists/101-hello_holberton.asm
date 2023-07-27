SECTION .data
msg:	db "Hello, Holberton", 0   ; C string needs null terminator
fmt:	db "%s", 10, 0           ; The printf format, newline and null terminator

SECTION .text
	extern printf
	global main

main:
	mov esi, msg                ; Load address of msg into esi
	mov edi, fmt                ; Load address of fmt into edi
	mov eax, 0                  ; Clear eax (return value) to avoid garbage data
	call printf                 ; Call C function printf

	mov eax, 0                  ; Set eax to 0 for normal exit
	ret                         ; Return from the main function

