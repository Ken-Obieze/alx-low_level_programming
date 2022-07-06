#include "main.h"

/**
 * print_sign - prints the position of a number in number line
 * @n: number to perform check on
 * Return: 1, 0 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);

	} else if (n == 0)
	{
		_putchar('0');
		return (0);

	} else if (n < 0)
	{
		_putchar('-');
		return (-1);

	}

}

