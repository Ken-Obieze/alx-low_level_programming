# include "main.h"

/**
 * _memset - fills memory with costant bike
 * @s: memory area to fill
 * @b: char to copy
 * @n: number of times to copy char
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
