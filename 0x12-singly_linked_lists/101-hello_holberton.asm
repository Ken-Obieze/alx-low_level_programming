	global main
	extern printf
main:
	mov edi, output
	call printf
	mov eax, 0
	ret:
output: db 'Hello, Holberton\n', o
