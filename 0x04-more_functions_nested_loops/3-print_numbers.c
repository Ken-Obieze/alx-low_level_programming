#include "main.h"

/**
 * print_numbers - prints 0 to 9
 * Return: Void
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
		_putchar(c + '0');
	_putchar('\n');
}
