#include "main.h"

/**
 * _puts - returns length of string
 * @str: string to print
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
