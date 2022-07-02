#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d, p, t;

	for (p = 0; p <= 98; p++)
	{
		for (t = p + 1; q <= 99; t++)

		{

			putchar((p / 10) + '0');
			putchar((p % 10) + '0');
			putchar(' ');
			putchar((t / 10) + '0');
			putchar((t % 10) + '0');

			if (p == 98 && t == 99)
				continue;

			putchar(',');
			putchar(' ');

		}
	}

	putchar('\n');

	return (0);
}
