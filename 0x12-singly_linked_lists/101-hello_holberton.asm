	global start
	extern print

start:
	mov edi, output
	xor eax, eax
	call printf
	mov eax, 0
	ret

output: db 'Hello, Holberton', o
