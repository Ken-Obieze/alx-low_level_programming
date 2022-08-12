	global start
	extern printf
start:
	mov edi, output
	xor eax, eax
	call printf
	mov eax, 0
	ret:
output: db 'Hello, Holberton\n', o
