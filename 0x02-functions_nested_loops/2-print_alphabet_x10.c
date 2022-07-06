#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times
 *
 * Return: Alwaays 0
 */

void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (char c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	}

	_putchar('\n');
}
