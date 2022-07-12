#include "main.h"

/**
 * rev_string - reverses given string
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	for (j = len - 1; j >= 0; j--)
		_putchar(s[j]);
}
