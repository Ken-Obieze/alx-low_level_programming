#include "main.h"

/**
 * print_diagonal - draws diagonal line
 * @n: nunmber of line
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{

		_putchar('$');
		_putchar('\n');

	}
	else if (n > 0)
	{

		for (i = 0; i < n; i++)
		{

			for (j = 0; j <	i; j++)
			{

				_putchar(' ');

			}
			_putchar(92);
			_putchar('$');
			_putchar('\n');

		}
	}
}
