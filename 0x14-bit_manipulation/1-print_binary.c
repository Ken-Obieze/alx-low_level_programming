#include "main.h"

/**
 * print_binary - prints binary equivalent of number
 * @n: number to convert
 */

void print_binary(unsigned long int n)
{
	int i, cnt = 0;
	unsigned long int j;

	for (i = 63; i >= 0; i--)
	{
		j = n >> i;

		if (j & 1)
		{
			_putchar('1');
			cnt++;
		} else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
