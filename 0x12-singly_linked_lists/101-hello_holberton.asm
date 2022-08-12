	global start
	extern print

start:
	mov edi, output
	xor eax, eax
	call printf
	mov eax, 0

output: db 'Hello, Holberton', 0
