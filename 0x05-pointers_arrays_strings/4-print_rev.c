#include "main.h"

/**
 * print_rev - reverses given string
 * @s: string to reverse
 * Return: void
 */

int print_rev(char *s)
{
	int i, j;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	for (j = len - 1; j >= 0; j--)
		_putchar(s[j]);

	_putchar('\n');
}
