#include "main.h"

/**
 * print_numbers - prints 0 to 9
 * No return value
 */

void print_numbers(void)
{
	int c = 0;

	for (c; c < 10; c++)
		_putchar(c + '0');
	_putchar('\n');
}
