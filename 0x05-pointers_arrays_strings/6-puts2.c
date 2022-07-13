#include "main.h"

/**
 * puts2 - pront everyother character from fisrt
 * @str: caharacter to operate on
 * Return: void
 */

void puts2(char *str)
{
	int i, j;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	for (j = 0; j <= len; j += 2)
		_putchar(str[j]);
	_putchar('\n');
}

