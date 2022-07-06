#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @a: int for operation
 * Return: returns last digit of number
 */

int print_last_digit(int a)
{
	int b;

	if (a < 0)
		b = (a % 10) * (-1);
	else
		b = a % 10;
	_putchar(b + '0');
	return (b);
}
