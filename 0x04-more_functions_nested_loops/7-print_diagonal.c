#include "main.h"

/**
 * print_diagonal - draws diagonal line
 * @n: nunmber of line
 * Return: Void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else if (n == 1)
		_putchar('\\');
	else
	{
		for (i = 2; i <= n; i++)
		{
			for (j = 1; j <	i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
