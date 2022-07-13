#include "main.h"

/**
 * puts_half - prints half the character
 * @str: caharacter to operate on
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, nlen;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	if (len % 2 == 0)
	{

		nlen = len / 2;

		for (j = nlen; j <= len; j++)
			_putchar(str[j]);
	} else
	{
		nlen = (len - 1) / 2;

		for (j = nlen; j <= len; j++)
			_putchar(str[j]);
		_putchar(str[len]);
	}
	_putchar('\n');
}

