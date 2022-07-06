#include "main.h"

/**
 * times_table - ( times table
 * Return: Void
 */

void times_table(void)
{
	int u, h, r;

	for (u = 0; u <= 9; u++)
	{
		for (h = 0; h <= 9; h++)
		{
			r = h * u;

			if ((r / 10) == 0)
			{
				if (h != 0)
					_putchar(' ');
				_putchar(n + '0');

				if (h == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
				if (h == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

